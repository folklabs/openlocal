<?php
/**
 * @file
 * openlocal_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_event_ctools_plugin_api() {
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
function openlocal_event_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openlocal_event_node_info() {
  $items = array(
    'ol_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('A local event.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function openlocal_event_default_registration_type() {
  $items = array();
  $items['ol_event_registration'] = entity_import('registration_type', '{
    "name" : "ol_event_registration",
    "label" : "Event registration",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
