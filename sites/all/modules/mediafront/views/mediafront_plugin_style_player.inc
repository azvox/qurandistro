<?php

/**
 * @file
 * This file holds style plugin for MediaFront Views
 *
 * @ingroup openlayers
 */

/**
 * @class
 * Extension of the Views Plugin Syle for the Media Player from MediaFront
 *
 * This class extended the default views plugin class to provide
 * a style plugin for the MediaFront module.
 */
class mediafront_plugin_style_player extends views_plugin_style {

  /**
   * Initialize a style plugin.
   *
   * @param $view
   * @param $display
   * @param $options
   *   The style options might come externally as the style can be sourced
   *   from at least two locations. If it's not included, look on the display.
   */
  function init(&$view, &$display, $options = NULL) {
    parent::init($view, $display, $options);

    /**
     * This was keeping the view from being able to specify how many entries
     * were in the playlist... if we want this, we need to figure out how
     * to bring in the preset settings for pageLimit into the view to limit
     * the amount of results displayed.
     *
    $view->display_handler->set_option('pager', array(
      'type' => 'some',
      'options' => $view->display_handler->options['pager']['options'],
    ));
     *
     */

    // We want to get the total rows.
    $view->get_total_rows = TRUE;
  }

  /**
   * Set the default options.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['mediafront_preset'] = array('default' => '');
    return $options;
  }

  /**
   * Shows the options form for the media player style
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['mediafront_preset'] = mediafront_preset_select_form($this->options);
  }

  /**
   * Renders the media player.
   */
  function render() {
    if (empty($this->options['mediafront_preset'])) {
      return t('You must select a preset for the MediaFront Player style in the view.');
    }

    // Now render the media player for this view.
    return mediafront_get_player($this->options['mediafront_preset'], array(
      'id' => mediafront_views_player_pre_render($this->view),
      'playlist' => mediafront_get_playlist_from_view($this->view)
    ));
  }
}
