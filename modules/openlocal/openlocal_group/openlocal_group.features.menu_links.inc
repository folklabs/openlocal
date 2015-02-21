<?php
/**
 * @file
 * openlocal_group.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openlocal_group_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:groups
  $menu_links['main-menu:groups'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'groups',
    'router_path' => 'groups',
    'link_title' => 'Community',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Community');


  return $menu_links;
}
