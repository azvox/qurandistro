<?php

/**
 * @file
 * Provides support for the Views module.
 */

/**
 * Implements hook_views_data().
 */
function timeline_bookmark_views_data() {
  $data = array();

  // Create the group.
  $data['timeline_bookmark']['table']['group'] = t('Content');

  // Setup the base table.
  $data['timeline_bookmark']['table']['base'] = array(
    'field' => 'bid',
    'title' => t('Timeline Bookmark'),
    'help' => t('The timeline bookmark.'),
  );

  // Join to the node table.
  $data['timeline_bookmark']['table']['join'] = array(
    'node' => array(
      'left_table' => 'node',
      'left_field' => 'nid',
      'table' => 'timeline_bookmark',
      'field' => 'entity_id',
      'extra' => array(
        array(
          'field'    => 'entity_type',
          'value'    => 'node',
        ),
      )
    ),
  );

  // The timeline bookmark link
  $data['timeline_bookmark']['link'] = array(
    'title' => t('Timeline Bookmark Link'),
    'help' => t('Display the timeline bookmark link.'),
    'field' => array(
      'real field' => 'mediatime',
      'additional fields' => array(
        'uid',
        'entity_type',
        'entity_id',
      ),
      'handler' => 'timeline_bookmark_field_link',
    ),
  );

  // The delete timeline bookmark link.
  $data['timeline_bookmark']['delete'] = array(
    'title' => t('Timeline Bookmark Delete'),
    'help' => t('Delete a timeline bookmark.'),
    'field' => array(
      'real field' => 'mediatime',
      'additional fields' => array(
        'uid',
        'entity_type',
        'entity_id',
      ),
      'handler' => 'timeline_bookmark_field_delete',
    ),
  );

  $data['timeline_bookmark']['entity_id'] = array(
    'title' => t('Content ID'),
    'help' => t('The content that was bookmarked.'),
    'relationship' => array(
      'base' => 'node',
      'title' => t('Node'),
      'help' => t('Relate this bookmark to the content that was bookmarked.'),
      'handler' => 'views_handler_relationship',
      'label' => t('Bookmark content'),
    ),
  );

  $data['timeline_bookmark']['uid'] = array(
    'title' => t('User uid'),
    'help' => t('The user that bookmarked this user.'),
    'relationship' => array(
      'base' => 'users',
      'title' => t('User'),
      'help' => t('Relate an item to the user that bookmarked it.'),
      'handler' => 'views_handler_relationship',
      'label' => t('Bookmark user'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_user_name',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
    'field' => array(
      'handler' => 'views_handler_field_user',
    ),
  );

  // Add fields for the mediatime.
  $data['timeline_bookmark']['timestamp'] = array(
    'title' => t('Created'),
    'help' => t('The time the bookmark was created.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Add fields for the mediatime.
  $data['timeline_bookmark']['mediatime'] = array(
    'title' => t('Media Time'),
    'help' => t('The time the user bookmarked this media.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Return the views data.
  return $data;
}
