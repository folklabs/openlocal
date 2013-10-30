<?php
/**
 * @file
 * openlocal_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_group_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
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
function openlocal_group_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openlocal_group_node_info() {
  $items = array(
    'ol_group' => array(
      'name' => t('Local group'),
      'base' => 'node_content',
      'description' => t('A local community group.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'ol_group_post' => array(
      'name' => t('Group post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
