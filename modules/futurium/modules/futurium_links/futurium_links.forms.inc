<?php
/**
 * @file
 * futurium_links.forms.inc
 */

/**
 * Form to create relations.
 */
function futurium_links_create_link_form($form, &$form_state, $node, $settings) {

  $origin = $node->nid;

  $form['origin'] = array(
    '#type' => 'hidden',
    '#value' => $origin,
  );

  $name = $settings['relation_type'];
  $class = $settings['relation_class'];
  $type = _relation_type_load($name);

  $label = $type->label;
  $description = $type->description;
  $direction = 'normal';

  $bundles = _futurium_links_possible_bundles($origin, $name);

  if ($settings['reverse']) {
    $label = $type->reverse_label;
    $description = $type->reverse_description;
    $direction = 'reverse';
    $bundles = _futurium_links_possible_bundles($origin, $name, TRUE);
  }

  if (!empty($bundles)) {

    $form['search'] = array(
      '#tree' => TRUE,
      '#type' => 'container',
      '#title' => t('@label', array('@label' => $label)),
      '#attributes' => array(
        'id' => "relation-{$class}",
        'class' => array(
          'new-relation-container',
          $class,
        ),
      ),
    );

    $base = 'node/futurium_links/autocomplete';
    $description_text = t("@description", array('@description' => $description));
    $form['search']['item'] = array(
      '#title' => t('@relation_label', array('@relation_label' => $label)),
      '#type' => 'textfield',
      '#description' => $description_text,
      '#maxlength' => 300,
      '#autocomplete_path' => "{$base}/hide/{$name}/{$direction}/{$origin}",
      '#ajax' => array(
        'event' => 'autocompleteHidden',
        'callback' => "_futurium_links_show_preview",
      ),
    );

    $form['search']['preview'] = array(
      '#markup' => '<div class="preview"></div>',
    );

    $form['search']['feedback'] = array(
      '#markup' => '<div class="feedback"></div>',
    );

    $form_state['settings'] = $settings;

    $form['submit'] = array(
      '#value' => t('Link'),
      '#type' => 'submit',
    );

    $form['#submit'][] = 'futurium_links_create_link_submit';

    _futurium_linker_add_autocomplete_js($form);
  }
  return $form;
}

/**
 * Validation function.
 */
function futurium_links_create_link_form_validate($form, &$form_state) {
  $item = $form_state['values']['search']['item'];
  $target = _futurium_links_parse_result($item);
  if (!$target) {
    $msg = t("Please select an item to create a relation to.");
    form_error($form['search']['item'], $msg);
  }
  else {
    $form_state['values']['target'] = $target;
  }
}

/**
 * Submit function.
 */
function futurium_links_create_link_submit($form, $form_state) {
  $input = $form_state['values'];
  $settings = $form_state['settings'];
  if (isset($input['origin'], $input['target'], $settings['relation_type'])) {
    $result = _futurium_links_link_nodes(
      $input['origin'],
      $input['target'],
      $settings['relation_type'],
      $settings['reverse'],
      'message'
    );
    drupal_set_message($result['message'], $result['type']);
  }
}

/**
 * Ajax callback to show preview.
 */
function _futurium_links_show_preview($form, &$form_state) {
  $target_nid = _futurium_links_parse_result($form_state['values']['search']['item']);

  $relation_class = $form_state['settings']['relation_class'];
  $wrapper = ".new-relation-container.{$relation_class} .preview";

  if ($target_nid !== FALSE) {
    $n = node_load($target_nid);
    $markup = node_view($n, $form_state['settings']['preview_view_mode']);
    $commands[] = ajax_command_replace(
      $wrapper,
      '<div class="preview">' . drupal_render($markup) . '</div>'
    );
  }
  else {
    $commands[] = ajax_command_remove("{$wrapper} .node");
  }

  return array('#type' => 'ajax', '#commands' => $commands);
}

/**
 * Helper to add #attached js file.
 */
function _futurium_linker_add_autocomplete_js(&$form) {

  $form['#attached'] = array(
    'js' => array(
      drupal_get_path('module', 'futurium_links') . '/futurium_links.js' => array(
        'type' => 'file',
        'scope' => 'footer',
        'weight' => 100,
      ),
    ),
  );

}
