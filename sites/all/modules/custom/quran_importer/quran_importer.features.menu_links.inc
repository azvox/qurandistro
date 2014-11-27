<?php
/**
 * @file
 * quran_importer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function quran_importer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_alafasy:<front>
  $menu_links['main-menu_alafasy:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Alafasy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_alafasy:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_recitations:<front>',
  );
  // Exported menu link: main-menu_almuqaily:Almuqaily
  $menu_links['main-menu_almuqaily:Almuqaily'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Almuqaily',
    'router_path' => 'Almuqaily',
    'link_title' => 'Almuqaily',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_almuqaily:Almuqaily',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_recitations:<front>',
  );
  // Exported menu link: main-menu_arabic-only:Arabic
  $menu_links['main-menu_arabic-only:Arabic'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Arabic',
    'router_path' => 'Arabic',
    'link_title' => 'Arabic only',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_arabic-only:Arabic',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_translations:<front>',
  );
  // Exported menu link: main-menu_english-saheeh:Quran-Saxiix
  $menu_links['main-menu_english-saheeh:Quran-Saxiix'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Quran-Saxiix',
    'router_path' => 'Quran-Saxiix',
    'link_title' => 'English Saheeh',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_english-saheeh:Quran-Saxiix',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_translations:<front>',
  );
  // Exported menu link: main-menu_english-yusuf-ali:quran-english
  $menu_links['main-menu_english-yusuf-ali:quran-english'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'quran-english',
    'router_path' => 'quran-english',
    'link_title' => 'English Yusuf Ali',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_english-yusuf-ali:quran-english',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_translations:<front>',
  );
  // Exported menu link: main-menu_quran-in-english:English-literal
  $menu_links['main-menu_quran-in-english:English-literal'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'English-literal',
    'router_path' => 'English-literal',
    'link_title' => 'quran-in-english',
    'options' => array(
      'attributes' => array(
        'title' => 'Quran in Literal English',
      ),
      'identifier' => 'main-menu_quran-in-english:English-literal',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_translations:<front>',
  );
  // Exported menu link: main-menu_quran-sudays:sudays
  $menu_links['main-menu_quran-sudays:sudays'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sudays',
    'router_path' => 'sudays',
    'link_title' => 'quran-sudays',
    'options' => array(
      'attributes' => array(
        'title' => 'Quran in recitation by sudays',
      ),
      'identifier' => 'main-menu_quran-sudays:sudays',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_recitations:<front>',
  );
  // Exported menu link: main-menu_recitations:<front>
  $menu_links['main-menu_recitations:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Recitations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_recitations:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_translations:<front>
  $menu_links['main-menu_translations:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Translations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_translations:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_import-quran:import
  $menu_links['navigation_import-quran:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import Quran',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_import-quran:import',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_import-quran:import/quran_importer
  $menu_links['user-menu_import-quran:import/quran_importer'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'import/quran_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Quran',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_import-quran:import/quran_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alafasy');
  t('Almuqaily');
  t('Arabic only');
  t('English Saheeh');
  t('English Yusuf Ali');
  t('Import Quran');
  t('Recitations');
  t('Translations');
  t('quran-in-english');
  t('quran-sudays');


  return $menu_links;
}
