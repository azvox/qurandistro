<?php

/**
 * @file
 * Contains views_handler_area_text handler.
 */

/**
 * Views mediafront player area handler.
 * @ingroup views_area_handlers Views' area handlers
*/
class mediafront_handler_area_player extends views_handler_area {

  function option_definition() {
    $options = parent::option_definition();
    $options['mediafront_preset'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['mediafront_preset'] = mediafront_preset_select_form($this->options);
  }

  function render($empty = FALSE) {
    return mediafront_get_player($this->options['mediafront_preset'], array(
      'id' => mediafront_views_player_pre_render($this->view),
      'disablePlaylist' => true,
      'playlist' => mediafront_get_playlist_from_view($this->view)
    ));
  }
}
