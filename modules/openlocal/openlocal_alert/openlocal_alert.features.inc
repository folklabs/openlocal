<?php
/**
 * @file
 * openlocal_alert.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_alert_ctools_plugin_api($module = NULL, $api = NULL) {
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
function openlocal_alert_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openlocal_alert_node_info() {
  $items = array(
    'ol_alert' => array(
      'name' => t('Alert'),
      'base' => 'node_content',
      'description' => t('An alert to tell the community about an urgent issue, e.g. a missing pet.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
