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
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
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
          ),
          1 => array(
            'source' => 'Ayah_number',
            'target' => 'field_ayah_chapter_number',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Ayahid',
            'target' => 'field_ayahid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Tafseer_no',
            'target' => 'field_tafseer_no',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'recitation_no',
            'target' => 'field_recitation_no',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'sura name',
            'target' => 'field_sura_name',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'meaning',
            'target' => 'field_meaning',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'sura images',
            'target' => 'field_sura_images',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'ayah_image',
            'target' => 'field_ayah_image',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'content_ar',
            'target' => 'field_content_ar',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'content_en',
            'target' => 'field_content_en',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'content_en_si',
            'target' => 'field_content_en_si',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'content_en_tr',
            'target' => 'field_content_en_tr',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'content_arj',
            'target' => 'field_content_arj',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'content_az',
            'target' => 'field_content_az',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'content_de',
            'target' => 'field_content_de',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'content_es',
            'target' => 'field_content_es',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'content_fa',
            'target' => 'field_content_fa',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'content_fr',
            'target' => 'field_content_fr',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'content_hi',
            'target' => 'field_content_hi',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'content_id',
            'target' => 'field_content_id',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'content_it',
            'target' => 'field_content_it',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'content_ja',
            'target' => 'field_content_ja',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'content_my',
            'target' => 'field_content_my',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'content_nl',
            'target' => 'field_content_nl',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'content_pt',
            'target' => 'field_content_pt',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'content_ru',
            'target' => 'field_content_ru',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'content_so',
            'target' => 'field_content_so',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'content_sq',
            'target' => 'field_content_sq',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => 'content_sw',
            'target' => 'field_content_sw',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'content_sv',
            'target' => 'field_content_sv',
            'unique' => FALSE,
          ),
          31 => array(
            'source' => 'content_tg',
            'target' => 'field_content_tg',
            'unique' => FALSE,
          ),
          32 => array(
            'source' => 'content_tr',
            'target' => 'field_content_tr',
            'unique' => FALSE,
          ),
          33 => array(
            'source' => 'content_tt',
            'target' => 'field_content_tt',
            'unique' => FALSE,
          ),
          34 => array(
            'source' => 'content_ug',
            'target' => 'field_content_ug',
            'unique' => FALSE,
          ),
          35 => array(
            'source' => 'content_ur',
            'target' => 'field_content_ur',
            'unique' => FALSE,
          ),
          36 => array(
            'source' => 'content_uz',
            'target' => 'field_content_uz',
            'unique' => FALSE,
          ),
          37 => array(
            'source' => 'content_am',
            'target' => 'field_content_am',
            'unique' => FALSE,
          ),
          38 => array(
            'source' => 'content_zh',
            'target' => 'field_content_zh',
            'unique' => FALSE,
          ),
          39 => array(
            'source' => 'alajamy',
            'target' => 'field_alajamy',
            'unique' => FALSE,
          ),
          40 => array(
            'source' => 'assudais',
            'target' => 'field_assudais',
            'unique' => FALSE,
          ),
          41 => array(
            'source' => 'alakhdar',
            'target' => 'field_alakhdar',
            'unique' => FALSE,
          ),
          42 => array(
            'source' => 'jebril',
            'target' => 'field_jebril',
            'unique' => FALSE,
          ),
          43 => array(
            'source' => 'ibrahimwalk',
            'target' => 'field_ibrahimwalk',
            'unique' => FALSE,
          ),
          44 => array(
            'source' => 'arrefai',
            'target' => 'field_arrefai',
            'unique' => FALSE,
          ),
          45 => array(
            'source' => 'attablawi',
            'target' => 'field_attablawi',
            'unique' => FALSE,
          ),
          46 => array(
            'source' => 'almuaiqly',
            'target' => 'field_almuaiqly',
            'unique' => FALSE,
          ),
          47 => array(
            'source' => 'basfar',
            'target' => 'field_basfar',
            'unique' => FALSE,
          ),
          48 => array(
            'source' => 'alhusary',
            'target' => 'field_alhusary',
            'unique' => FALSE,
          ),
          49 => array(
            'source' => 'abdulbasit_murattal',
            'target' => 'field_abdulbasit_murattal',
            'unique' => FALSE,
          ),
          50 => array(
            'source' => 'abdulbasit',
            'target' => 'field_abdulbasit',
            'unique' => FALSE,
          ),
          51 => array(
            'source' => 'alhudhaifi',
            'target' => 'field_alhudhaifi',
            'unique' => FALSE,
          ),
          52 => array(
            'source' => 'ayyub',
            'target' => 'field_ayyub',
            'unique' => FALSE,
          ),
          53 => array(
            'source' => 'alshuraym',
            'target' => 'field_alshuraym',
            'unique' => FALSE,
          ),
          54 => array(
            'source' => 'alshatri',
            'target' => 'field_alshatri',
            'unique' => FALSE,
          ),
          55 => array(
            'source' => 'algamdi',
            'target' => 'field_algamdi',
            'unique' => FALSE,
          ),
          56 => array(
            'source' => 'minshawi',
            'target' => 'field_minshawi',
            'unique' => FALSE,
          ),
          57 => array(
            'source' => 'bukhatir',
            'target' => 'field_bukhatir',
            'unique' => FALSE,
          ),
          58 => array(
            'source' => 'khan_urdu',
            'target' => 'field_khan_urdu',
            'unique' => FALSE,
          ),
          59 => array(
            'source' => 'ibrahimdosary',
            'target' => 'field_ibrahimdosary',
            'unique' => FALSE,
          ),
          60 => array(
            'source' => 'jazaery',
            'target' => 'field_jazaery',
            'unique' => FALSE,
          ),
          61 => array(
            'source' => 'kabiri',
            'target' => 'field_kabiri',
            'unique' => FALSE,
          ),
          62 => array(
            'source' => 'juhayne',
            'target' => 'field_juhayne',
            'unique' => FALSE,
          ),
          63 => array(
            'source' => 'matroud',
            'target' => 'field_matroud',
            'unique' => FALSE,
          ),
          64 => array(
            'source' => 'neena',
            'target' => 'field_neena',
            'unique' => FALSE,
          ),
          65 => array(
            'source' => 'hajjaj',
            'target' => 'field_hajjaj',
            'unique' => FALSE,
          ),
          66 => array(
            'source' => 'baliyev',
            'target' => 'field_baliyev',
            'unique' => FALSE,
          ),
          67 => array(
            'source' => 'bosnian',
            'target' => 'field_bosnian',
            'unique' => FALSE,
          ),
          68 => array(
            'source' => 'abbad',
            'target' => 'field_abbad',
            'unique' => FALSE,
          ),
          69 => array(
            'source' => 'hussarym',
            'target' => 'field_hussarym',
            'unique' => FALSE,
          ),
          70 => array(
            'source' => 'hussary_mujawad',
            'target' => 'field_hussary_mujawad',
            'unique' => FALSE,
          ),
          71 => array(
            'source' => 'tunaji',
            'target' => 'field_tunaji',
            'unique' => FALSE,
          ),
          72 => array(
            'source' => 'qahdhani',
            'target' => 'field_qahdhani',
            'unique' => FALSE,
          ),
          73 => array(
            'source' => 'albana',
            'target' => 'field_albana',
            'unique' => FALSE,
          ),
          74 => array(
            'source' => 'alqasim',
            'target' => 'field_alqasim',
            'unique' => FALSE,
          ),
          75 => array(
            'source' => 'alqatami',
            'target' => 'field_alqatami',
            'unique' => FALSE,
          ),
          76 => array(
            'source' => 'alafasy',
            'target' => 'field_alafasy',
            'unique' => FALSE,
          ),
          77 => array(
            'source' => 'Ayah Title',
            'target' => 'title',
            'unique' => 1,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => '1',
        'authorize' => 1,
        'skip_hash_check' => 0,
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
