<?php

/**
 * Views field handler for the Timeline Bookmark link.
 *
 * @ingroup views
 */
class timeline_bookmark_field_link extends views_handler_field {

  function option_definition() {
    $options = parent::option_definition();
    $options['bookmark_text'] = array('default' => 'Go to bookmark', 'translatable' => TRUE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['bookmark_text'] = array(
      '#type' => 'textfield',
      '#title' => t('Bookmark Text'),
      '#default_value' => $this->options['bookmark_text'],
      '#description' => t('Enter the text you would like the bookmark to say.'),
    );
    parent::options_form($form, $form_state);
  }

  function render($values) {
    $entity_type = $this->aliases['entity_type'];
    $entity_id = $this->aliases['entity_id'];
    $mediatime = $this->field_alias;
    $url = $values->{$entity_type} . '/' . $values->{$entity_id};
    $options = array('query' => array('seek' => $values->{$mediatime}));
    return l($this->options['bookmark_text'], $url, $options);
  }
}
