<?php
/**
 * @file
 * openlocal_business.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_business_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openlocal_business_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function openlocal_business_eck_bundle_info() {
  $items = array(
  'ol_promotion_ol_promotion' => array(
  'machine_name' => 'ol_promotion_ol_promotion',
  'entity_type' => 'ol_promotion',
  'name' => 'ol_promotion',
  'label' => 'Promotion',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function openlocal_business_eck_entity_type_info() {
$items = array(
       'ol_promotion' => array(
  'name' => 'ol_promotion',
  'label' => 'Promotion',
  'properties' => array(
    'uid' => array(
      'label' => 'Author',
      'type' => 'integer',
      'behavior' => 'author',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
  ),
),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function openlocal_business_node_info() {
  $items = array(
    'ol_business' => array(
      'name' => t('Business'),
      'base' => 'node_content',
      'description' => t('A local business, service or trader.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'ol_reward_scheme' => array(
      'name' => t('Reward scheme'),
      'base' => 'node_content',
      'description' => t('A scheme such as a loyalty card or local currency designed to encourage local shopping.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
