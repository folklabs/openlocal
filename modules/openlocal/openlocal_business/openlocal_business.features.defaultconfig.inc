<?php
/**
 * @file
 * openlocal_business.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function openlocal_business_defaultconfig_features() {
  return array(
    'openlocal_business' => array(
      'default_page_manager_pages' => 'default_page_manager_pages',
      'panelizer_defaults' => 'panelizer_defaults',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_page_manager_pages().
 */
function openlocal_business_defaultconfig_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'local_business';
  $page->task = 'page';
  $page->admin_title = 'Local business';
  $page->admin_description = '';
  $page->path = 'businesses';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Businesses',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_local_business_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'local_business';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Businesses';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'business-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['contentmain'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['local_business'] = $page;

  return $pages;

}

/**
 * Implements hook_defaultconfig_panelizer_defaults().
 */
function openlocal_business_defaultconfig_panelizer_defaults() {
  $export = array();

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function openlocal_business_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node ol_business breadcrumbs'.
  $permissions['administer panelizer node ol_business breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_business breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business content'.
  $permissions['administer panelizer node ol_business content'] = array(
    'name' => 'administer panelizer node ol_business content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business context'.
  $permissions['administer panelizer node ol_business context'] = array(
    'name' => 'administer panelizer node ol_business context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business defaults'.
  $permissions['administer panelizer node ol_business defaults'] = array(
    'name' => 'administer panelizer node ol_business defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business layout'.
  $permissions['administer panelizer node ol_business layout'] = array(
    'name' => 'administer panelizer node ol_business layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business overview'.
  $permissions['administer panelizer node ol_business overview'] = array(
    'name' => 'administer panelizer node ol_business overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business settings'.
  $permissions['administer panelizer node ol_business settings'] = array(
    'name' => 'administer panelizer node ol_business settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  return $permissions;
}
