<?php
/**
 * @file
 * openlocal_user.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function openlocal_user_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
