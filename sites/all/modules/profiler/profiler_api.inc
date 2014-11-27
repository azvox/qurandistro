<?php

/**
 * Include additional files.
 */
$dirname = dirname(__FILE__) . '/includes';
$includes = file_scan_directory($dirname, '/.inc$/');
foreach (array_keys(_system_rebuild_module_data()) as $module) {
  $file = "{$dirname}/{$module}.inc";
  if (isset($includes[$file])) {
    require_once $file;
  }
}

/**
 * @see hook_install_tasks().
 *
 * @param $config
 *   The config array for a Profiler Install Profile.
 */
function profiler_install_tasks($config) {
  return array('profiler_install_profile_complete' => array());
}

/**
 * @see hook_install_tasks_alter().
 *
 * @param $config
 *   The config array for a Profiler Install Profile.
 */
function profiler_install_tasks_alter($config, &$tasks, $install_state) {
  // Replace the modules profile task function with our custom callback.
  $tasks['install_profile_modules']['function'] = 'profiler_install_profile_modules';
}

/**
 * @see install_profile_modules().
 *
 * @param $install_state
 *   An array of information about the current installation state.
 *
 * @return
 *   The batch definition.
 */
function profiler_install_profile_modules(&$install_state) {
  $profile_name = $install_state['parameters']['profile'];
  $config = profiler_v2_load_config($profile_name);

  // Only necessary to override dependencies if there is a base profile.
  if (isset($config['base']) && $config['base']) {
    // This is hacky to say the least, but this way Profiler can implement
    // hook_system_info_alter() to add dependencies. If we don't do this, the
    // dependency sorting will be incorrect and cause errors to display.
    // First step, fill up the module_implements static cache.
    module_implements('system_info_alter');
    $implementations = &drupal_static('module_implements');
    $implementations['system_info_alter']['profiler'] = FALSE;
  }

  return install_profile_modules($install_state);
}

/**
 * Helper to hook_form_install_configure_form_alter().
 */
function profiler_form_install_configure_form_alter($config, &$form, &$form_state) {
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

/**
 * Implements hook_system_info_alter().
 */
function profiler_system_info_alter(&$info, $file, $type) {
  if ($file->name == drupal_get_profile() && isset($info['base'])) {
    $config = profiler_v2_load_config($file->name);
    $config['dependencies'] = profiler_config_reduce($config['dependencies']);
    $info = $config;
  }
}

/**
 * Complete the Profile installation.
 * @param $install_state
 *   An array of information about the current installation state.
 */
function profiler_install_profile_complete(&$install_state) {
  $profile_name = $install_state['parameters']['profile'];
  $config = profiler_v2_load_config($profile_name);

  // We flush caches at the beginning to ensure that any necessary module
  // tasks, such as Features component rebuilding, is complete before the
  // remaining tasks are run.
  drupal_flush_all_caches();

  // Run any component installations
  profiler_install_components($config);

  // Rebuild key tables/caches
  menu_rebuild();
  if (isset($config['node'])) {
    node_access_rebuild();
  }
  drupal_flush_all_caches();
}

/**
 * Reduce an array of components with mixed keys to its final reduced set of
 * values allowing for later entries to override former entries. Example:
 *
 *   profiler_config_reduce(array('foo', 'bar', 'foo' => 0));
 *
 * Will return the following:
 *
 *   array('bar');
 */
function profiler_config_reduce($data) {
  // We want the string keys at the end of the array, so that they can determine
  // the final setting.
  krsort($data);
  $reduced = array();
  foreach ($data as $key => $value) {
    if (is_int($key)) {
      $reduced[$value] = TRUE;
    }
    elseif (is_string($key)) {
      $reduced[$key] = (bool) $value;
    }
  }
  return array_keys(array_filter($reduced));
}

/**
 * Take an array of arrays and return a single array merging the child arrays.
 * The resulting array can optionally be reduced & made unique.
 *
 * @param array $data
 *   An array of arrays.
 * @param array $excluded_keys
 *   An array of keys to exclude. By default, no keys are excluded.
 * @param boolean $process
 *   Optional. Reduce and make the merged array unique.
 * @return array
 *   A single merged array.
 */
function profiler_config_merge($data, $excluded_keys = array(), $process = TRUE) {
  $merged = array();
  foreach ($data as $key => $value) {
    if (is_array($value) && !in_array($key, $excluded_keys, TRUE)) {
      $merged = array_merge($merged, $process ? profiler_config_reduce($value) : $value);
    }
  }
  return $process ? array_unique($merged) : $merged;
}

/**
 * Returns user 1 for a config, if it exists.
 */
function profiler_config_load_superuser($config) {
  if (isset($config['users'])) {
    foreach ($config['users'] as $account) {
      if ($account['uid'] == 1) {
        return $account;
      }
    }
  }
  return FALSE;
}

/**
 * Install components.
 */
function profiler_install_components($config) {
  if (is_array($config)) {
    $components = profiler_components();
    $identifiers = array();
    foreach ($components as $name => $component) {
      if (!empty($config[$name]) && isset($component['callback'])) {
        if (isset($component['file'])) {
          require_once($component['file']);
        }
        if (function_exists($component['callback'])) {
          $component['callback']($config[$name], $config, $identifiers);
        }
      }
    }
  }
}

/**
 * Invoke module hooks to retrieve component info.
 */
function profiler_components() {
  $components = module_invoke_all('profiler_components');
  drupal_alter('profiler_components', $components);
  uasort($components, 'profiler_components_sort');
  return $components;
}

/**
 * Sort callback for ordering components.
 */
function profiler_components_sort($a, $b) {
  $a = (array) $a + array('weight' => 0);
  $b = (array) $b + array('weight' => 0);
  return $a['weight'] < $b['weight'] ? -1 : 1;
}

/**
 * Helper function to select a role id based on role name.
 */
function _profiler_role_id_from_name($role_name) {
  $rids = &drupal_static(__FUNCTION__);

  if (!isset($rids[$role_name])) {
    $query = db_select('role', 'r')
      ->fields('r', array('rid'))
      ->condition('r.name', $role_name);
    $rids[$role_name] = $query->execute()->fetchField();
  }

  return $rids[$role_name];
}
