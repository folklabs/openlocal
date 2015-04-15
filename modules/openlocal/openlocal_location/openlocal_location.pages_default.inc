<?php
/**
 * @file
 * openlocal_location.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openlocal_location_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ol_locations';
  $page->task = 'page';
  $page->admin_title = 'Locations';
  $page->admin_description = 'A list of locations.';
  $page->path = 'locations';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Locations',
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
  $handler->name = 'page_ol_locations__panel_context_2aa56005-6f30-49c6-a280-b47cbd663f1d';
  $handler->task = 'page';
  $handler->subtask = 'ol_locations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Locations';
  $display->uuid = '432a42be-6922-4c2d-8239-09f69a5ea5ed';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e05a1d4f-34fb-47a7-80a4-e9dcb63ca46e';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'openlocal_location-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e05a1d4f-34fb-47a7-80a4-e9dcb63ca46e';
  $display->content['new-e05a1d4f-34fb-47a7-80a4-e9dcb63ca46e'] = $pane;
  $display->panels['contentmain'][0] = 'new-e05a1d4f-34fb-47a7-80a4-e9dcb63ca46e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e05a1d4f-34fb-47a7-80a4-e9dcb63ca46e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ol_locations'] = $page;

  return $pages;

}
