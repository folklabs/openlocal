<?php
/**
 * @file
 * openlocal_business.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function openlocal_business_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ol_business_actions'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'ol_business_actions',
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
      'ohm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ohm',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
