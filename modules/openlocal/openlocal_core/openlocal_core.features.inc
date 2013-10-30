<?php
/**
 * @file
 * openlocal_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function openlocal_core_node_info() {
  $items = array(
    'ol_place' => array(
      'name' => t('Place'),
      'base' => 'node_content',
      'description' => t('A local place.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
