<?php
/**
 * @file
 * openlocal_campaign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_campaign_ctools_plugin_api($module = NULL, $api = NULL) {
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
function openlocal_campaign_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openlocal_campaign_node_info() {
  $items = array(
    'ol_campaign' => array(
      'name' => t('Campaign'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
