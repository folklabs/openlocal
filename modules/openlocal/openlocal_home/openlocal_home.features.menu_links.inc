<?php
/**
 * @file
 * openlocal_home.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openlocal_home_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:frontpage
  $menu_links['main-menu:frontpage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'frontpage',
    'router_path' => 'frontpage',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');


  return $menu_links;
}
