<?php
/**
 * @file
 * openlocal_group.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function openlocal_group_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ol_group_actions'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'ol_group_actions',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'herne_hill' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'herne_hill',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
