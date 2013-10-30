<?php
/**
 * @file
 * openlocal_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_contact_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function openlocal_contact_node_info() {
  $items = array(
    'mass_contact' => array(
      'name' => t('Mass Contact message'),
      'base' => 'node_content',
      'description' => t('Archived copies of mass email messages sent from this site.'),
      'has_title' => '1',
      'title_label' => t('Subject'),
      'help' => '',
    ),
  );
  return $items;
}
