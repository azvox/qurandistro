<?php
/**
 * @file
 * quran_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function quran_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'quran_importer';
  $feeds_importer->config = array(
    'name' => 'quran_importer',
    'description' => 'To import The Holly Quran to Drupal',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'quran',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'chapter_number',
            'target' => 'field_chapter_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Ayah_number',
            'target' => 'field_ayah_chapter_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Tafseer_no',
            'target' => 'field_tafseer_no',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'recitation_no',
            'target' => 'field_recitation_no',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'sura name',
            'target' => 'field_sura_name',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'meaning',
            'target' => 'field_meaning',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'sura images',
            'target' => 'field_sura_images',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'ayah_image',
            'target' => 'field_ayah_image',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'content_ar',
            'target' => 'field_content_ar',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'content_en',
            'target' => 'field_content_en',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'content_bo',
            'target' => 'field_content_bo:summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'content_en_si',
            'target' => 'field_content_en_si',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'content_en_tr',
            'target' => 'field_content_en_tr',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'content_arj',
            'target' => 'field_content_arj',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'content_az',
            'target' => 'field_content_az',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'content_de',
            'target' => 'field_content_de',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'content_es',
            'target' => 'field_content_es',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'content_fa',
            'target' => 'field_content_fa',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'content_fr',
            'target' => 'field_content_fr',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'content_hi',
            'target' => 'field_content_hi',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'content_id',
            'target' => 'field_content_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'content_it',
            'target' => 'field_content_it',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'content_ja',
            'target' => 'field_content_ja',
            'unique' => FALSE,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'content_my',
            'target' => 'field_content_my',
            'unique' => FALSE,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'content_nl',
            'target' => 'field_content_nl',
            'unique' => FALSE,
            'language' => 'und',
          ),
          25 => array(
            'source' => 'content_pt',
            'target' => 'field_content_pt',
            'unique' => FALSE,
            'language' => 'und',
          ),
          26 => array(
            'source' => 'content_ru',
            'target' => 'field_content_ru',
            'unique' => FALSE,
            'language' => 'und',
          ),
          27 => array(
            'source' => 'content_so',
            'target' => 'field_content_so',
            'unique' => FALSE,
            'language' => 'und',
          ),
          28 => array(
            'source' => 'content_sq',
            'target' => 'field_content_sq',
            'unique' => FALSE,
            'language' => 'und',
          ),
          29 => array(
            'source' => 'content_sw',
            'target' => 'field_content_sw',
            'unique' => FALSE,
            'language' => 'und',
          ),
          30 => array(
            'source' => 'content_sv',
            'target' => 'field_content_sv',
            'unique' => FALSE,
            'language' => 'und',
          ),
          31 => array(
            'source' => 'content_tg',
            'target' => 'field_content_tg',
            'unique' => FALSE,
            'language' => 'und',
          ),
          32 => array(
            'source' => 'content_tr',
            'target' => 'field_content_tr',
            'unique' => FALSE,
            'language' => 'und',
          ),
          33 => array(
            'source' => 'content_tt',
            'target' => 'field_content_tt',
            'unique' => FALSE,
            'language' => 'und',
          ),
          34 => array(
            'source' => 'content_ug',
            'target' => 'field_content_ug',
            'unique' => FALSE,
            'language' => 'und',
          ),
          35 => array(
            'source' => 'content_ur',
            'target' => 'field_content_ur',
            'unique' => FALSE,
            'language' => 'und',
          ),
          36 => array(
            'source' => 'content_uz',
            'target' => 'field_content_uz',
            'unique' => FALSE,
            'language' => 'und',
          ),
          37 => array(
            'source' => 'content_am',
            'target' => 'field_content_am',
            'unique' => FALSE,
            'language' => 'und',
          ),
          38 => array(
            'source' => 'content_zh',
            'target' => 'field_content_zh',
            'unique' => FALSE,
            'language' => 'und',
          ),
          39 => array(
            'source' => 'alajamy',
            'target' => 'field_alajamy',
            'unique' => FALSE,
            'language' => 'und',
          ),
          40 => array(
            'source' => 'assudais',
            'target' => 'field_assudais',
            'unique' => FALSE,
            'language' => 'und',
          ),
          41 => array(
            'source' => 'alakhdar',
            'target' => 'field_alakhdar',
            'unique' => FALSE,
            'language' => 'und',
          ),
          42 => array(
            'source' => 'jebril',
            'target' => 'field_jebril',
            'unique' => FALSE,
            'language' => 'und',
          ),
          43 => array(
            'source' => 'ibrahimwalk',
            'target' => 'field_ibrahimwalk',
            'unique' => FALSE,
            'language' => 'und',
          ),
          44 => array(
            'source' => 'arrefai',
            'target' => 'field_arrefai',
            'unique' => FALSE,
            'language' => 'und',
          ),
          45 => array(
            'source' => 'attablawi',
            'target' => 'field_attablawi',
            'unique' => FALSE,
            'language' => 'und',
          ),
          46 => array(
            'source' => 'almuaiqly',
            'target' => 'field_almuaiqly',
            'unique' => FALSE,
            'language' => 'und',
          ),
          47 => array(
            'source' => 'basfar',
            'target' => 'field_basfar',
            'unique' => FALSE,
            'language' => 'und',
          ),
          48 => array(
            'source' => 'alhusary',
            'target' => 'field_alhusary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          49 => array(
            'source' => 'abdulbasit_murattal',
            'target' => 'field_abdulbasit_murattal',
            'unique' => FALSE,
            'language' => 'und',
          ),
          50 => array(
            'source' => 'abdulbasit',
            'target' => 'field_abdulbasit',
            'unique' => FALSE,
            'language' => 'und',
          ),
          51 => array(
            'source' => 'alhudhaifi',
            'target' => 'field_alhudhaifi',
            'unique' => FALSE,
            'language' => 'und',
          ),
          52 => array(
            'source' => 'ayyub',
            'target' => 'field_ayyub',
            'unique' => FALSE,
            'language' => 'und',
          ),
          53 => array(
            'source' => 'alshuraym',
            'target' => 'field_alshuraym',
            'unique' => FALSE,
            'language' => 'und',
          ),
          54 => array(
            'source' => 'alshatri',
            'target' => 'field_alshatri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          55 => array(
            'source' => 'algamdi',
            'target' => 'field_algamdi',
            'unique' => FALSE,
            'language' => 'und',
          ),
          56 => array(
            'source' => 'minshawi',
            'target' => 'field_minshawi',
            'unique' => FALSE,
            'language' => 'und',
          ),
          57 => array(
            'source' => 'bukhatir',
            'target' => 'field_bukhatir',
            'unique' => FALSE,
            'language' => 'und',
          ),
          58 => array(
            'source' => 'khan_urdu',
            'target' => 'field_khan_urdu',
            'unique' => FALSE,
            'language' => 'und',
          ),
          59 => array(
            'source' => 'ibrahimdosary',
            'target' => 'field_ibrahimdosary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          60 => array(
            'source' => 'jazaery',
            'target' => 'field_jazaery',
            'unique' => FALSE,
            'language' => 'und',
          ),
          61 => array(
            'source' => 'kabiri',
            'target' => 'field_kabiri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          62 => array(
            'source' => 'juhayne',
            'target' => 'field_juhayne',
            'unique' => FALSE,
            'language' => 'und',
          ),
          63 => array(
            'source' => 'matroud',
            'target' => 'field_matroud',
            'unique' => FALSE,
            'language' => 'und',
          ),
          64 => array(
            'source' => 'neena',
            'target' => 'field_neena',
            'unique' => FALSE,
            'language' => 'und',
          ),
          65 => array(
            'source' => 'hajjaj',
            'target' => 'field_hajjaj',
            'unique' => FALSE,
            'language' => 'und',
          ),
          66 => array(
            'source' => 'baliyev',
            'target' => 'field_baliyev',
            'unique' => FALSE,
            'language' => 'und',
          ),
          67 => array(
            'source' => 'bosnian',
            'target' => 'field_bosnian',
            'unique' => FALSE,
            'language' => 'und',
          ),
          68 => array(
            'source' => 'abbad',
            'target' => 'field_abbad',
            'unique' => FALSE,
            'language' => 'und',
          ),
          69 => array(
            'source' => 'hussarym',
            'target' => 'field_hussarym',
            'unique' => FALSE,
            'language' => 'und',
          ),
          70 => array(
            'source' => 'hussary_mujawad',
            'target' => 'field_hussary_mujawad',
            'unique' => FALSE,
            'language' => 'und',
          ),
          71 => array(
            'source' => 'tunaji',
            'target' => 'field_tunaji',
            'unique' => FALSE,
            'language' => 'und',
          ),
          72 => array(
            'source' => 'qahdhani',
            'target' => 'field_qahdhani',
            'unique' => FALSE,
            'language' => 'und',
          ),
          73 => array(
            'source' => 'albana',
            'target' => 'field_albana',
            'unique' => FALSE,
            'language' => 'und',
          ),
          74 => array(
            'source' => 'alqasim',
            'target' => 'field_alqasim',
            'unique' => FALSE,
            'language' => 'und',
          ),
          75 => array(
            'source' => 'alqatami',
            'target' => 'field_alqatami',
            'unique' => FALSE,
            'language' => 'und',
          ),
          76 => array(
            'source' => 'alafasy',
            'target' => 'field_alafasy',
            'unique' => FALSE,
            'language' => 'und',
          ),
          77 => array(
            'source' => 'ayah-title',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          78 => array(
            'source' => 'ayahid',
            'target' => 'field_ayahid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          79 => array(
            'source' => 'pageid',
            'target' => 'field_pageid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          80 => array(
            'source' => 'page-tag',
            'target' => 'field_page_tag',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          81 => array(
            'source' => 'rubu-tag',
            'target' => 'field_rubu_tag',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          82 => array(
            'source' => 'rubuhizbid',
            'target' => 'field_rubuhizbid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          83 => array(
            'source' => 'hizb-tag',
            'target' => 'field_hizb_tag',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          84 => array(
            'source' => 'hizbid',
            'target' => 'field_hizbid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          85 => array(
            'source' => 'juz-tag',
            'target' => 'field_juz_tag',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          86 => array(
            'source' => 'juzid',
            'target' => 'field_juzid',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'input_format' => 'plain_text',
        'author' => '1',
        'authorize' => 1,
        'skip_hash_check' => 0,
        'insert_new' => 1,
        'update_non_existent' => 'skip',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['quran_importer'] = $feeds_importer;

  return $export;
}
