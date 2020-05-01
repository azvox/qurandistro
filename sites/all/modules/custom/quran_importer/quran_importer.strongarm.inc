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
      'field_content_bo' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
    ),
    'viewers' => array(
      'field_abbad' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_abdulbasit' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_abdulbasit_murattal' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_alafasy' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_alajamy' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_alakhdar' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_albana' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_algamdi' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_alhudhaifi' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_alhusary' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_alshuraym' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_arrefai' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_assudais' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_attablawi' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'uid' => array(
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
      'field_ayah_image' => array(
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
      'field_ayyub' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_baliyev' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_basfar' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'body' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_bosnian' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_bukhatir' => array(
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
      'field_content_am' => array(
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
      'field_content_arj' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_az' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_de' => array(
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
      'field_content_en_si' => array(
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
      'field_content_es' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_fa' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_fr' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_hi' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_id' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_it' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_ja' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_my' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_nl' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_pt' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_ru' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_so' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_sq' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_sv' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_sw' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_tg' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_tr' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_tt' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_ug' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_ur' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_uz' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_content_zh' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'delete_node' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'edit_node' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_hajjaj' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'timestamp' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_hizb_tag' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_hizbid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_hussary_mujawad' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_hussarym' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_ibrahimdosary' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_ibrahimwalk' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_jazaery' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_jebril' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_juhayne' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_juz_tag' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_juzid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_kabiri' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_khan_urdu' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'view_node' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_matroud' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_meaning' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_minshawi' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_neena' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'nid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_page_tag' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_pageid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'path' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'created' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'promote' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'status' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_qahdhani' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_recitation_no' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_rubu_tag' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_rubuhizbid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'sticky' => array(
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
      'field_tafseer_no' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_tags' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'delta' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'title' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_tunaji' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'changed' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
    ),
    'juz_links' => array(
      'field_linktitle' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_juzp_no' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_juzlink' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
    ),
    'recitations' => array(
      'field_page_no_value' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
    ),
    'sura_links' => array(
      'field_suralink' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'title' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_pages_no' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_total_ayah' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
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
  $strongarm->value = 'qurandistribution-7.x-1.1';
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
