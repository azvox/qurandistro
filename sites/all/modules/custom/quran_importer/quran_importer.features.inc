<?php
/**
 * @file
 * quran_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quran_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function quran_importer_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_mediafront_default_presets().
 */
function quran_importer_mediafront_default_presets() {
  $items = array(
    'quran_player' => array(
      'name' => 'quran_player',
      'description' => 'A general player for the Holly Quran',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => 0,
        ),
        'isplaylist' => array(
          0 => 0,
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'disptime' => 0,
        'duration' => 0,
        'volume' => 60,
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => 20,
        'showPlaylist' => 1,
        'vertical' => 1,
        'node' => array(),
        'playlist' => '',
        'pageLimit' => 286,
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '/sites/all/modules/mediafront/players/osmplayer/player/logo.png',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => 'http://www.qurandownload.org',
        'width' => '100%',
        'height' => '450px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 1,
        'volumeVertical' => 1,
        'plugins' => array(
          'timeline_indicator' => 0,
        ),
        'theme' => 'humanity',
        'showWhenEmpty' => 0,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
        'player_settings__active_tab' => 'edit-player-settings-misc',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_mediafront_views_default_options().
 */
function quran_importer_mediafront_views_default_options() {
  $options = array(
    'Quran' => array(
      'mediafront_player' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_alafasy' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_assudais' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_alajamy' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_recitation_no_value' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_tafseer_no_value' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_content_en_tr' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_content_en_si' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_content_en' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_chapter_number' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_ayah_chapter_number' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_tafseer_no' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_content_ar' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
    ),
    'quran' => array(
      'machine_name' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'vid' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'tid' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'name' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
    ),
    'quran_english' => array(
      'field_content_ar' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_content_en' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'tid' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_alafasy' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'mediafront_player' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_ayah_chapter_number' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_ayahid_value' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_ayahid' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_content_en_tr' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_content_en_tr_value' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_ayah_chapter_number_value' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_content_en_si' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_sura_images' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_sura_name' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_assudais' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_almuaiqly' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'random' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'term_node_tid' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_chapter_number' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
    ),
  );
  return $options;
}

/**
 * Implements hook_node_info().
 */
function quran_importer_node_info() {
  $items = array(
    'quran' => array(
      'name' => t('Quran'),
      'base' => 'node_content',
      'description' => t('To import The Holly Quran'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
