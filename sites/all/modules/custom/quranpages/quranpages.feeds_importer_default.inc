<?php
/**
 * @file
 * quranpages.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function quranpages_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'juzlink_importer';
  $feeds_importer->config = array(
    'name' => 'Juzlink importer',
    'description' => 'to import with juz links',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'juzlink',
            'target' => 'field_juzlink:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'LinkTitle',
            'target' => 'field_juzlink:title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Juzp_no',
            'target' => 'field_juzp_no',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'juzlink',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['juzlink_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'quranpages_importer';
  $feeds_importer->config = array(
    'name' => 'quranpages importer',
    'description' => 'to import quran pages to drupal',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'page_no',
            'target' => 'field_page_no',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'image_pages',
            'target' => 'field_page_image:uri',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Ghamdi',
            'target' => 'field_ghamdi',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Abdul_Basit_Murattal',
            'target' => 'field_abdul_basit_murattal',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Abdul_Basit_Mujawwad ',
            'target' => 'field_abdul_basit_mujawwad_',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'AbdulSamad ',
            'target' => 'field_abdulsamad_',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Akhdar ',
            'target' => 'field_akhdar_',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Alafasy',
            'target' => 'field_alafasy_',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Al-Ajamy',
            'target' => 'field_al_ajamy_',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'AlMuaiqly',
            'target' => 'field_almuaiqly_',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Basfar',
            'target' => 'field_basfar',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Bukhatir',
            'target' => 'field_bukhatir_',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Hudhaify',
            'target' => 'field_hudhaify_',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Husary_Mujawwad',
            'target' => 'field_husary_mujawwad_',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Husary ',
            'target' => 'field_husary_',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Minshawy_Murattal',
            'target' => 'field_minshawy_murattal_',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Menshawi_muj',
            'target' => 'field_menshawi_muj',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Sudais',
            'target' => 'field_sudais_',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Sahih_Intnl_Ibrahim_Walk',
            'target' => 'field_sahih_intnl_ibrahim_walk_',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'quranpages',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['quranpages_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sura_link_importer';
  $feeds_importer->config = array(
    'name' => 'sura link importer',
    'description' => 'to import links',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Link',
            'target' => 'field_suralink:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'sno',
            'target' => 'field_pages_no',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Link_title',
            'target' => 'field_suralink:title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Total',
            'target' => 'field_total_ayah',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'sura_link',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['sura_link_importer'] = $feeds_importer;

  return $export;
}
