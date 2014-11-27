<?php
/**
 * @file
 * Node module integration.
 */

/**
 * Implementation of hook_profiler_components() on behalf of node.
 */
function node_profiler_components() {
  return array(
    'nodes' => array(
      'callback' => 'profiler_install_nodes',
      'weight' => 10,
    ),
  );
}

/**
 * Component install callback for 'nodes'.
 */
function profiler_install_nodes($nodes, $config, &$identifiers) {
  foreach (array_filter($nodes) as $nid => $properties) {
    if (isset($properties['name'])) {
      $account = user_load(array('name' => $properties['name']));
      if (!$account) {
        drupal_set_message(t('Failed to load Drupal user %user -- node %title not saved.', array('%name' => $properties['name'], '%title' => $properties['title'])), 'error', FALSE);
        continue;
      }
    }

    // Set a parent menu link id if one was specified.
    if (isset($properties['menu']['parent'])) {
      if (isset($identifiers['nodes'][$properties['menu']['parent']])) {
        $properties['menu']['plid'] = $identifiers['nodes'][$properties['menu']['parent']]->menu['mlid'];
      }
    }

    $default = array(
      'nid' => NULL,
      'title' => '',
      'body' => '',
      'type' => 'page',
      'teaser' => '',
      'log' => '',
      'created' => '',
      'format' => filter_fallback_format(),
      'uid' => !empty($account) ? $account->uid : 0,
    );
    $node = (object) array_merge($default, $properties);
    node_save($node);

    // Save the node to the identifiers array so other nodes can reference it.
    $identifiers['nodes'][$nid] = $node;
  }
}
