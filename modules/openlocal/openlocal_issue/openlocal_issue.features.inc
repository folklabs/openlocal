<?php
/**
 * @file
 * openlocal_issue.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_issue_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openlocal_issue_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openlocal_issue_node_info() {
  $items = array(
    'ol_issue' => array(
      'name' => t('Issue'),
      'base' => 'node_content',
      'description' => t('Raise a problem or request for help.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
