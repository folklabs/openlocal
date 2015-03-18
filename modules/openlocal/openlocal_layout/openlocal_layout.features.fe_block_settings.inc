<?php
/**
 * @file
 * openlocal_layout.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function openlocal_layout_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_credits'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'footer_credits',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'herne_hill',
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'masquerade',
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'herne_hill' => array(
        'region' => 'footer',
        'status' => 0,
        'theme' => 'herne_hill',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-ol-footer-menu'] = array(
    'cache' => -1,
    'delta' => 'menu-ol-footer-menu',
    'module' => 'menu',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'herne_hill',
        'weight' => -26,
      ),
    ),
  );

  $export['nice_menus-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'nice_menus',
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
