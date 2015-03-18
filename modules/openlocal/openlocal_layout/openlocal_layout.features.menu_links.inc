<?php
/**
 * @file
 * openlocal_layout.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openlocal_layout_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ol-footer-menu_sitemap:sitemap
  $menu_links['menu-ol-footer-menu_sitemap:sitemap'] = array(
    'menu_name' => 'menu-ol-footer-menu',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Sitemap',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ol-footer-menu_sitemap:sitemap',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sitemap');


  return $menu_links;
}
