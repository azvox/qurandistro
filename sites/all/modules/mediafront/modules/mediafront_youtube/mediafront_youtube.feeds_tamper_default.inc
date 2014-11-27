<?php
/**
 * @file
 * mediafront_youtube.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function mediafront_youtube_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'youtube_importer-xpathparser_7-explode';
  $feeds_tamper->importer = 'youtube_importer';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['youtube_importer-xpathparser_7-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'youtube_importer-xpathparser_8-string_to_unix_timestamp';
  $feeds_tamper->importer = 'youtube_importer';
  $feeds_tamper->source = 'xpathparser:8';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['youtube_importer-xpathparser_8-string_to_unix_timestamp'] = $feeds_tamper;

  return $export;
}
