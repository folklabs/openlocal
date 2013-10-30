<?php
/**
 * @file
 * openlocal_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_gallery_ctools_plugin_api() {
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
function openlocal_gallery_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openlocal_gallery_node_info() {
  $items = array(
    'ol_gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('An image/media gallery.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
