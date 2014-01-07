<?php
/**
 * @file
 * AJAX comments settings form.
 */

/**
 * AJAX comments settings form.
 */
function uyan_comments_settings() {
  $form['uyan_account_id'] = array(
   '#type' => 'textfield',
    '#title' => t('Uyan account id'),
    // '#title_display' => 'attribute',
    '#description' => t('Please input your Uyan account ID in http://www.uyan.cc/sites'),
    '#default_value' => variable_get('uyan_account_id', '91212'),
    '#attributes' => array(
      'placeholder' => t('91212'),
    ),
  );
  $form['uyan_comments_node_types'] = array(
    '#title' => t('Content types'),
    '#type' => 'checkboxes',
    '#description' => t('Select node types you want to activate uyan comments on.'),
    '#default_value' => variable_get('uyan_comments_node_types', array()),
    '#options' => node_type_get_names(),
  );

  //TODO: add uyan comment on specific pages.
  //TODO: SSO http://www.uyan.cc/help/html/SSO
  //TODO: blocks TOP Hot 
  // $form['uyan_comments_node_path_list'] = array(
  //     '#type' => 'radios',
  //     '#title' => t('Show orNot on specific pages'),
  //     '#options' => array(
  //       0 => t('All pages except those listed'),
  //       1 => t('Only the listed pages'),
  //     ),
  //     '#default_value' => variable_get('uyan_comments_node_path_list', '0'),
  // );
  // $form['uyan_comments_node_path'] = array(
  //   '#title' => t('Show uyan comments on specific pages'),
  //   '#type' => 'textarea',
  //   '#title_display' => 'attribute',
  //   '#default_value' => variable_get('uyan_comments_node_path', 'node/*'),
  //   '#description' =>  t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>')),
  // );
  return system_settings_form($form);
}

  