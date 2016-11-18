<?php
/**
 * @file
 * quran_importer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function quran_importer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_quran';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_quran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_quran';
  $strongarm->value = 'Ayah-[random:number]';
  $export['ant_pattern_quran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_quran';
  $strongarm->value = '2';
  $export['ant_quran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__quran';
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
      'token' => array(
        'custom_settings' => FALSE,
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
  $export['field_bundle_settings_node__quran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__sura_name';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__sura_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediafront_views_options';
  $strongarm->value = array(
    'Quran' => array(
      'mediafront_player' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_alafasy' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_assudais' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_alajamy' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_recitation_no_value' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_tafseer_no_value' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_en_tr' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_en_si' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_en' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_chapter_number' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_ayah_chapter_number' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_tafseer_no' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_ar' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
    ),
    'quran' => array(
      'machine_name' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'vid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'tid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'name' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
    ),
    'quran_english' => array(
      'field_content_ar' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_en' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'tid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_alafasy' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'mediafront_player' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_ayah_chapter_number' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_ayahid_value' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_ayahid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_en_tr' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_en_tr_value' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_ayah_chapter_number_value' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_en_si' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_sura_images' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_sura_name' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_assudais' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_almuaiqly' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'random' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'term_node_tid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_chapter_number' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
    ),
  );
  $export['mediafront_views_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_quran';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_quran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_quran';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_quran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_quran';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_quran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_quran';
  $strongarm->value = '0';
  $export['node_preview_quran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_quran';
  $strongarm->value = 0;
  $export['node_submitted_quran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'quran-english';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'The Holy Quran distribution';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'The Holy Quran-القرآن الكريم';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'quran' => TRUE,
  );
  $export['views_defaults'] = $strongarm;

  return $export;
}
