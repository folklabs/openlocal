<?php
/**
 * @file
 * openlocal_business.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_business_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openlocal_business_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openlocal_business_node_info() {
  $items = array(
    'ol_business' => array(
      'name' => t('Local business'),
      'base' => 'node_content',
      'description' => t('A local business, service or trader.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
