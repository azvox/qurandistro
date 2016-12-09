<?php
/**
 * @file
 * quranpages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function quranpages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_-home:<front>.
  $menu_links['main-menu_-home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => ' Home',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-home',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_-home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_-sura-view:<front>.
  $menu_links['main-menu_-sura-view:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => ' Sura View',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-book',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_-sura-view:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t(' Home');
  t(' Sura View');

  return $menu_links;
}
