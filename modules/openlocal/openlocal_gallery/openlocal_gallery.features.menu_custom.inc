<?php
/**
 * @file
 * openlocal_gallery.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openlocal_gallery_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ol-gallery-buttons.
  $menus['menu-ol-gallery-buttons'] = array(
    'menu_name' => 'menu-ol-gallery-buttons',
    'title' => 'OL Gallery buttons',
    'description' => 'Action buttons for galleries.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Action buttons for galleries.');
  t('OL Gallery buttons');


  return $menus;
}
