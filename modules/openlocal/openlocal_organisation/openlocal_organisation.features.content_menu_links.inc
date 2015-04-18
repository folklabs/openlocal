<?php
/**
 * @file
 * openlocal_organisation.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function openlocal_organisation_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-ol-services-actions:node/add/ol-organisation
  $menu_links['menu-ol-services-actions:node/add/ol-organisation'] = array(
    'menu_name' => 'menu-ol-services-actions',
    'link_path' => 'node/add/ol-organisation',
    'router_path' => 'node/add/ol-organisation',
    'link_title' => 'request service',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
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
  t('request service');


  return $menu_links;
}
