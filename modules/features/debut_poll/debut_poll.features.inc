<?php
/**
 * @file
 * debut_poll.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function debut_poll_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function debut_poll_node_info() {
  $items = array(
    'advpoll' => array(
      'name' => t('Advanced Poll'),
      'base' => 'node_content',
      'description' => t('Advanced Poll adds additional poll functionality, cookie voting, write-ins and voting modes.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
