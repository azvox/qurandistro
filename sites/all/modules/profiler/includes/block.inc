<?php
/**
 * @file
 * Block module integration.
 */

/**
 * Implementation of hook_profiler_components() on behalf of block.
 */
function block_profiler_components() {
  return array(
    'blocks' => array(
      'callback' => 'profiler_install_blocks',
      'weight' => 10,
    ),
  );
}

/**
 * Component install callback for 'blocks'.
 */
function profiler_install_blocks($blocks, $config, &$identifiers) {
  if (!isset($identifiers['blocks'])) {
    $identifiers['blocks'] = array();
  }

  foreach ($blocks as $name => $block) {
    if (empty($block['info'])) {
      $block['info'] = $name;
    }

    if (!in_array($block['info'], $identifiers['blocks'])) {
      // Record the custom block content and get a delta.
      $delta = db_insert('block_custom')
        ->fields(array(
          'body' => $block['body'],
          'info' => $block['info'],
          'format' => isset($block['format'])? $block['format'] : 'plain_text',
        ))
        ->execute();

      // Create the block record.
      if ($delta) {
        $bid = db_insert('block')
          ->fields(array(
            'module',
            'delta',
            'theme',
            'status',
            'weight',
            'region',
            'custom',
            'visibility',
            'pages',
            'title',
            'cache',
          ))
          ->values(array(
            'module' => 'block',
            'delta' => $delta,
            'theme' => isset($block['theme'])? $block['theme'] : $config['theme'],
            'status' => isset($block['status'])? $block['status'] : 0,
            'weight' => isset($block['weight'])? $block['weight'] : 0,
            'region' => isset($block['region'])? $block['region'] : '',
            'custom' => isset($block['custom'])? $block['custom'] : 0,
            'visibility' => isset($block['visibility'])? $block['visibility'] : 0,
            'pages' => isset($block['pages'])? $block['pages'] : '',
            'title' => isset($block['title'])? $block['title'] : '',
            'cache' => isset($block['cache'])? $block['cache'] : 1,
          ))
          ->execute();

        // Store the info in identifiers to keep them unique.
        $identifiers['blocks'][$bid] = $block['info'];
      }
    }
  }
}
