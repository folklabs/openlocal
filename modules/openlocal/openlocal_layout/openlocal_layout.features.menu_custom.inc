<?php
/**
 * @file
 * openlocal_layout.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openlocal_layout_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ol-footer-menu.
  $menus['menu-ol-footer-menu'] = array(
    'menu_name' => 'menu-ol-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');


  return $menus;
}
