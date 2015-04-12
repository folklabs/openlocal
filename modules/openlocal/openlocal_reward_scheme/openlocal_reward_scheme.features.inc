<?php
/**
 * @file
 * openlocal_reward_scheme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_reward_scheme_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function openlocal_reward_scheme_node_info() {
  $items = array(
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
