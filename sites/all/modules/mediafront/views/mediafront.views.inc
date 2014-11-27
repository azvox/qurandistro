<?php
// $Id:
/**
 * @file mediafront.views.inc
 * Built in plugins for Views output handling.
 *
 */

/**
 * Implementation of hook_views_plugins
 */
function mediafront_views_plugins() {
  $path = drupal_get_path('module', 'mediafront');
  $plugins = array(
    'module' => 'mediafront', // This just tells our themes are elsewhere.
    'style' => array(
      'mediaplayer' => array(
        'title' => t('MediaFront Player'),
        'help' => t('Shows this view as a Media Player, mapping fields to the playlist elements.'),
        'handler' => 'mediafront_plugin_style_player',
        'path' => "$path/views",
        'theme path' => "$path/views",
        'uses fields' => TRUE,
        'uses row plugin' => FALSE,
        'uses options' => TRUE,
        'uses grouping' => FALSE,
        'type' => 'normal',
        'even empty' => TRUE,
      ),
    )
  );
  return $plugins;
}

/**
 * Allow them to say which field they would like to use for certain
 * MediaFront player fields.
 *
 * @param type $form
 * @param type $form_state
 */
function mediafront_form_views_ui_config_item_form_alter(&$form, &$form_state) {

  // Get the options for this field from the field handler.
  $options = mediafront_views_get_options($form_state['handler']);

  // Setup the mediafront settings for this field.
  $form['options']['mediafront'] = array(
    '#type' => 'fieldset',
    '#title' => 'MediaFront Settings',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE
  );

  // Add a link to player check.
  $form['options']['mediafront']['link_to_player'] = array(
    '#type' => 'checkbox',
    '#title' => t('Link to Player'),
    '#description' => t('Check if you would like for this field to dynamically link to the MediaFront player attached to this view.'),
    '#default_value' => !empty($options['link_to_player']),
  );

  // Add the field select form.
  $form['options']['mediafront'] = array_merge($form['options']['mediafront'], mediafront_field_form($options, 'edit-options-mediafront-'));

  // Prepend our own submit handler.
  array_unshift($form['buttons']['submit']['#submit'], 'mediafront_form_views_ui_config_item_form_submit');
}

/**
 * Submit handler for the views field items.
 *
 * @param type $form
 * @param type $form_state
 */
function mediafront_form_views_ui_config_item_form_submit(&$form, &$form_state) {

  // Set the options in the handler.
  mediafront_views_set_options($form_state['handler'], $form_state['values']['options']['mediafront']);
}

/**
 * Links the mediafront fields to the player.
 */
function mediafront_views_player_pre_render($view) {
  static $instance = 0;
  $instance++;

  // Mediafront ID.
  $id = 'mediafront_' . $view->name . '_' . $instance;

  // Determine if any field wishes to link to the media player.
  foreach ($view->field as $name => $field) {
    $options = mediafront_views_get_options($field);
    if (!empty($options['link_to_player'])) {
      drupal_add_js('
        (function($) {
          $(document).ready(function() {
            $(".views-field-' . drupal_clean_css_identifier($name) . '").each(function(index, element) {
              $(element).click(function(event) {
                event.preventDefault();
                minplayer.get("' . $id . '", "player", function(player) {
                  player.loadNode(Drupal.settings.mediafront["' . $id . '"].playlist.nodes[index]);
                });
              });
            });
          });
        })(jQuery);
      ', 'inline');
    }
  }

  return $id;
}

/**
 * Implements hook_views_data()
 */
function mediafront_views_data() {

  /**
   * Create an area handler for a media player within a view.
   */
  $data['views']['mediafront_player'] = array(
    'title' => t('MediaFront Player'),
    'help' => t('Add a media player to this view.'),
    'area' => array(
      'handler' => 'mediafront_handler_area_player',
    ),
  );

  return $data;
}
