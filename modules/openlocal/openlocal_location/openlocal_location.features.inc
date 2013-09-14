<?php
/**
 * @file
 * openlocal_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_location_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function openlocal_location_node_info() {
  $items = array(
    'ol_location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
