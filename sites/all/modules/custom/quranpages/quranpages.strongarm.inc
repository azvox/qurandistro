<?php
/**
 * @file
 * quranpages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function quranpages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__juzlink';
  $strongarm->value = array(
    'view_modes' => array(
      'basit' => array(
        'custom_settings' => FALSE,
      ),
      'abdul_basit_mujawwad' => array(
        'custom_settings' => TRUE,
      ),
      'abdulsamad' => array(
        'custom_settings' => TRUE,
      ),
      'akhdar' => array(
        'custom_settings' => TRUE,
      ),
      'alafasy' => array(
        'custom_settings' => TRUE,
      ),
      'al_ajamy' => array(
        'custom_settings' => TRUE,
      ),
      'almuaiqly' => array(
        'custom_settings' => TRUE,
      ),
      'basfar' => array(
        'custom_settings' => TRUE,
      ),
      'bukhatir' => array(
        'custom_settings' => TRUE,
      ),
      'sahih_intnl_ibrahim_walk' => array(
        'custom_settings' => TRUE,
      ),
      'ghamdi' => array(
        'custom_settings' => TRUE,
      ),
      'hudhaify' => array(
        'custom_settings' => TRUE,
      ),
      'husary_mujawwad' => array(
        'custom_settings' => TRUE,
      ),
      'husary_' => array(
        'custom_settings' => TRUE,
      ),
      'minshawy_murattal' => array(
        'custom_settings' => TRUE,
      ),
      'menshawi_muj' => array(
        'custom_settings' => TRUE,
      ),
      'sudais' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__juzlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__quranpages';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'basit' => array(
        'custom_settings' => TRUE,
      ),
      'abdul_basit_mujawwad' => array(
        'custom_settings' => TRUE,
      ),
      'abdulsamad' => array(
        'custom_settings' => TRUE,
      ),
      'akhdar' => array(
        'custom_settings' => TRUE,
      ),
      'alafasy' => array(
        'custom_settings' => TRUE,
      ),
      'al_ajamy' => array(
        'custom_settings' => TRUE,
      ),
      'almuaiqly' => array(
        'custom_settings' => TRUE,
      ),
      'basfar' => array(
        'custom_settings' => TRUE,
      ),
      'bukhatir' => array(
        'custom_settings' => TRUE,
      ),
      'sahih_intnl_ibrahim_walk' => array(
        'custom_settings' => TRUE,
      ),
      'ghamdi' => array(
        'custom_settings' => TRUE,
      ),
      'hudhaify' => array(
        'custom_settings' => TRUE,
      ),
      'husary_mujawwad' => array(
        'custom_settings' => TRUE,
      ),
      'husary_' => array(
        'custom_settings' => TRUE,
      ),
      'minshawy_murattal' => array(
        'custom_settings' => TRUE,
      ),
      'menshawi_muj' => array(
        'custom_settings' => TRUE,
      ),
      'sudais' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'flippy_pager' => array(
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'basit' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'abdul_basit_mujawwad' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'abdulsamad' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'akhdar' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'alafasy' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'al_ajamy' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'almuaiqly' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'bukhatir' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'sahih_intnl_ibrahim_walk' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'ghamdi' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'hudhaify' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'husary_mujawwad' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'husary_' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'minshawy_murattal' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'menshawi_muj' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'sudais' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'basfar' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__quranpages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sura_link';
  $strongarm->value = array(
    'view_modes' => array(
      'basit' => array(
        'custom_settings' => FALSE,
      ),
      'abdul_basit_mujawwad' => array(
        'custom_settings' => TRUE,
      ),
      'abdulsamad' => array(
        'custom_settings' => TRUE,
      ),
      'akhdar' => array(
        'custom_settings' => TRUE,
      ),
      'alafasy' => array(
        'custom_settings' => TRUE,
      ),
      'al_ajamy' => array(
        'custom_settings' => TRUE,
      ),
      'almuaiqly' => array(
        'custom_settings' => TRUE,
      ),
      'basfar' => array(
        'custom_settings' => TRUE,
      ),
      'bukhatir' => array(
        'custom_settings' => TRUE,
      ),
      'sahih_intnl_ibrahim_walk' => array(
        'custom_settings' => TRUE,
      ),
      'ghamdi' => array(
        'custom_settings' => TRUE,
      ),
      'hudhaify' => array(
        'custom_settings' => TRUE,
      ),
      'husary_mujawwad' => array(
        'custom_settings' => TRUE,
      ),
      'husary_' => array(
        'custom_settings' => TRUE,
      ),
      'minshawy_murattal' => array(
        'custom_settings' => TRUE,
      ),
      'menshawi_muj' => array(
        'custom_settings' => TRUE,
      ),
      'sudais' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__sura_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_juzlink';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_juzlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_quranpages';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_quranpages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sura_link';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sura_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_juzlink';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_juzlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_quranpages';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_quranpages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sura_link';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sura_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_juzlink';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_juzlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_quranpages';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_quranpages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sura_link';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_sura_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_juzlink';
  $strongarm->value = '0';
  $export['node_preview_juzlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_quranpages';
  $strongarm->value = '0';
  $export['node_preview_quranpages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sura_link';
  $strongarm->value = '1';
  $export['node_preview_sura_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_juzlink';
  $strongarm->value = 0;
  $export['node_submitted_juzlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_quranpages';
  $strongarm->value = 0;
  $export['node_submitted_quranpages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sura_link';
  $strongarm->value = 0;
  $export['node_submitted_sura_link'] = $strongarm;

  return $export;
}
