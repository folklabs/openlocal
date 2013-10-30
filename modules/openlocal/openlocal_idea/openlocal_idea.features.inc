<?php
/**
 * @file
 * openlocal_idea.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_idea_ctools_plugin_api() {
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
function openlocal_idea_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openlocal_idea_node_info() {
  $items = array(
    'ol_idea' => array(
      'name' => t('Idea'),
      'base' => 'node_content',
      'description' => t('A suggestion for a local improvement or change.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
