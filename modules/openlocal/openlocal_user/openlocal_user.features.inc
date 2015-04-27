<?php
/**
 * @file
 * openlocal_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openlocal_user_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function openlocal_user_default_profile2_type() {
  $items = array();
  $items['ol_personal_info'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "ol_personal_info",
    "label" : "Personal info",
    "weight" : "0",
    "data" : { "registration" : 1 }
  }');
  return $items;
}
