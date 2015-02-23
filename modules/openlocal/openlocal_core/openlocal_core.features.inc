<?php
/**
 * @file
 * openlocal_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "radioactivity" && $api == "radioactivity_decay_profile") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openlocal_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
      'help' => t('All events listed on the site will be at a business venue or place. This screen will allow you to enter all the details about a place so that they can be used again in the future. Please check that the entry has not already been done by someone else first, they may have called it something slightly different - check on the <a href="/places">map display of places</a> to see if it already exists.

The more information that you can provide the easier it will be for people to find the venue, not contact you for information and improve attendance at the event.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
