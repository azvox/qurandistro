<?php
/**
 * @file
 * timeline_bookmark.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function timeline_bookmark_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_timeline_bookmarks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'timeline_bookmark';
  $view->human_name = 'User Timeline Bookmarks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Timeline Bookmarks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'link' => 'link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'timeline_bookmark';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Bookmark User';
  /* Relationship: Content: Node */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'timeline_bookmark';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'entity_id';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Media Time */
  $handler->display->display_options['fields']['mediatime']['id'] = 'mediatime';
  $handler->display->display_options['fields']['mediatime']['table'] = 'timeline_bookmark';
  $handler->display->display_options['fields']['mediatime']['field'] = 'mediatime';
  $handler->display->display_options['fields']['mediatime']['label'] = 'Time (seconds)';
  /* Field: Content: Timeline Bookmark Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'timeline_bookmark';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  $handler->display->display_options['fields']['link']['label'] = 'Bookmark';
  $handler->display->display_options['fields']['link']['element_label_colon'] = FALSE;
  /* Field: Content: Timeline Bookmark Delete */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'timeline_bookmark';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  $handler->display->display_options['fields']['delete']['label'] = 'Delete';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'user/%/timeline_bookmarks';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Timeline Bookmarks';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['user_timeline_bookmarks'] = $view;

  return $export;
}
