<?php
/**
 * @file
 * openlocal_organisation.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openlocal_organisation_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ol-services-actions.
  $menus['menu-ol-services-actions'] = array(
    'menu_name' => 'menu-ol-services-actions',
    'title' => 'OL Services actions',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('OL Services actions');


  return $menus;
}
