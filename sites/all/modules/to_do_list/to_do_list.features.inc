<?php
/**
 * @file
 * to_do_list.features.inc
 */

/**
 * Implements hook_views_api().
 */
function to_do_list_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function to_do_list_node_info() {
  $items = array(
    'tasks' => array(
      'name' => t('Tasks'),
      'base' => 'node_content',
      'description' => t('A list of task we have to do.'),
      'has_title' => '1',
      'title_label' => t('Tasks'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
