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

// /**
//  * Implements hook_default_registration_state().
//  */
// function openlocal_event_default_registration_state() {
//   $items = array();
//   $items['canceled'] = entity_import('registration_state', '{
//     "name" : "canceled",
//     "label" : "Canceled",
//     "description" : "Registration was cancelled",
//     "default_state" : "0",
//     "active" : "0",
//     "show_on_form" : "0",
//     "weight" : "1"
//   }');
//   $items['complete'] = entity_import('registration_state', '{
//     "name" : "complete",
//     "label" : "Complete",
//     "description" : "Registration has been completed.",
//     "default_state" : "1",
//     "active" : "1",
//     "show_on_form" : "0",
//     "weight" : "1"
//   }');
//   $items['pending'] = entity_import('registration_state', '{
//     "name" : "pending",
//     "label" : "Pending",
//     "description" : "Registration is pending.",
//     "default_state" : "0",
//     "active" : "0",
//     "show_on_form" : "0",
//     "weight" : "1"
//   }');
//   return $items;
// }

// /**
//  * Implements hook_default_registration_type().
//  */
// function openlocal_event_default_registration_type() {
//   $items = array();
//   $items['ol_event_registration'] = entity_import('registration_type', '{
//     "name" : "ol_event_registration",
//     "label" : "Event registration",
//     "locked" : "0",
//     "weight" : "0",
//     "data" : null
//   }');
//   return $items;
// }
