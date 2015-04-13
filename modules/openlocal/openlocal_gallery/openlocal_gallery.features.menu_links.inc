<?php
/**
 * @file
 * openlocal_gallery.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openlocal_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ol-gallery-buttons_add-photos:node/add/ol-photo-album
  $menu_links['menu-ol-gallery-buttons_add-photos:node/add/ol-photo-album'] = array(
    'menu_name' => 'menu-ol-gallery-buttons',
    'link_path' => 'node/add/ol-photo-album',
    'router_path' => 'node/add/ol-photo-album',
    'link_title' => 'add photos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ol-gallery-buttons_add-photos:node/add/ol-photo-album',
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
  t('add photos');


  return $menu_links;
}
