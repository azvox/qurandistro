<?php

/**
 * Views field handler to delete a Timeline Bookmark.
 *
 * @ingroup views
 */
class timeline_bookmark_field_delete extends views_handler_field {

  function option_definition() {
    $options = parent::option_definition();
    $options['bookmark_delete_text'] = array('default' => 'delete', 'translatable' => TRUE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['bookmark_delete_text'] = array(
      '#type' => 'textfield',
      '#title' => t('Bookmark Delete Text'),
      '#default_value' => $this->options['bookmark_delete_text'],
      '#description' => t('Enter the text you would like the bookmark delete link to say.'),
    );
    parent::options_form($form, $form_state);
  }

  function render($values) {
    $uid = $this->aliases['uid'];
    $entity_type = $this->aliases['entity_type'];
    $entity_id = $this->aliases['entity_id'];
    $mediatime = $this->field_alias;
    $url = 'timeline_bookmark/';
    $url .= $values->{$uid} . '/';
    $url .= $values->{$entity_type} . '/';
    $url .= $values->{$entity_id} . '/';
    $url .= $values->{$mediatime} . '/delete';
    $options = array('query' => drupal_get_destination());
    return l($this->options['bookmark_delete_text'], $url, $options);
  }
}
