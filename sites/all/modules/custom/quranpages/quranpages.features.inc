<?php
/**
 * @file
 * quranpages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quranpages_ctools_plugin_api($module = NULL, $api = NULL) {
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
function quranpages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function quranpages_image_default_styles() {
  $styles = array();

  // Exported image style: 960x1581.
  $styles['960x1581'] = array(
    'label' => '960X1581',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 960,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_mediafront_default_presets().
 */
function quranpages_mediafront_default_presets() {
  $items = array(
    'quran_pages_nodeplayer' => array(
      'name' => 'quran_pages_nodeplayer',
      'description' => 'The node player for YouTube content.',
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
        'volume' => 80,
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
        'pageLimit' => 1,
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '/sites/all/modules/mediafront/players/osmplayer/player/logo.png',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => 'http://www.mediafront.org',
        'width' => '100%',
        'height' => '450px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 1,
        'volumeVertical' => 1,
        'plugins' => array(
          'timeline_indicator' => 0,
          'timeline_bookmark' => 0,
        ),
        'theme' => 'humanity',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
        'player_settings__active_tab' => 'edit-player-settings-presentation',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_mediafront_views_default_options().
 */
function quranpages_mediafront_views_default_options() {
  $options = array(
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
  return $options;
}

/**
 * Implements hook_node_info().
 */
function quranpages_node_info() {
  $items = array(
    'juzlink' => array(
      'name' => t('Juzlink'),
      'base' => 'node_content',
      'description' => t('to create with juz links'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'quranpages' => array(
      'name' => t('quranpages'),
      'base' => 'node_content',
      'description' => t('To use with quran pages images'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sura_link' => array(
      'name' => t('sura link'),
      'base' => 'node_content',
      'description' => t('this links for sura navigation'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
