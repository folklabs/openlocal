<?php
/**
 * @file
 * openlocal_organisation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openlocal_organisation_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ol_directory';
  $page->task = 'page';
  $page->admin_title = 'Directory';
  $page->admin_description = 'A directory of local organisations.';
  $page->path = 'directory';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Directory',
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
  $handler->name = 'page_ol_directory__panel_context_08d962bd-a013-445b-ae96-383c51d7b4ca';
  $handler->task = 'page';
  $handler->subtask = 'ol_directory';
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
  $display->layout = 'radix_harris';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Directory';
  $display->uuid = '79b87d15-2706-442e-9fad-9723bc4d9d86';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e2972d7a-b8e2-4079-961d-2d1d63f714e8';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-bo5UeWFkP5XMDu9ZL1WiZw0uxsmeVvOB';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e2972d7a-b8e2-4079-961d-2d1d63f714e8';
  $display->content['new-e2972d7a-b8e2-4079-961d-2d1d63f714e8'] = $pane;
  $display->panels['column1'][0] = 'new-e2972d7a-b8e2-4079-961d-2d1d63f714e8';
  $pane = new stdClass();
  $pane->pid = 'new-f70b3d35-1e9d-41bd-85e4-e3ee7f388d48';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-jm1m1wpfwnKIL3JK2TmhZTzKJM8tzXUF';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f70b3d35-1e9d-41bd-85e4-e3ee7f388d48';
  $display->content['new-f70b3d35-1e9d-41bd-85e4-e3ee7f388d48'] = $pane;
  $display->panels['column1'][1] = 'new-f70b3d35-1e9d-41bd-85e4-e3ee7f388d48';
  $pane = new stdClass();
  $pane->pid = 'new-e03385d3-d12d-4b42-9ced-ad24b116232e';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-s811z3nRX0sLrH7AHxwJTOmBK3mFKlxk';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e03385d3-d12d-4b42-9ced-ad24b116232e';
  $display->content['new-e03385d3-d12d-4b42-9ced-ad24b116232e'] = $pane;
  $display->panels['column1'][2] = 'new-e03385d3-d12d-4b42-9ced-ad24b116232e';
  $pane = new stdClass();
  $pane->pid = 'new-6985c74b-cab1-4da2-bdb3-fccc086aa853';
  $pane->panel = 'column2';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6985c74b-cab1-4da2-bdb3-fccc086aa853';
  $display->content['new-6985c74b-cab1-4da2-bdb3-fccc086aa853'] = $pane;
  $display->panels['column2'][0] = 'new-6985c74b-cab1-4da2-bdb3-fccc086aa853';
  $pane = new stdClass();
  $pane->pid = 'new-4d73d715-f0df-435e-9315-36e0bc8ece99';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'openlocal_organisation_facet_search-grid';
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
  $pane->uuid = '4d73d715-f0df-435e-9315-36e0bc8ece99';
  $display->content['new-4d73d715-f0df-435e-9315-36e0bc8ece99'] = $pane;
  $display->panels['contentmain'][0] = 'new-4d73d715-f0df-435e-9315-36e0bc8ece99';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4d73d715-f0df-435e-9315-36e0bc8ece99';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ol_directory'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ol_services';
  $page->task = 'page';
  $page->admin_title = 'Services';
  $page->admin_description = '';
  $page->path = 'services/!term';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Services',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ol_services__panel_context_d628b93e-9840-4f7b-ad69-6af5db994a6a';
  $handler->task = 'page';
  $handler->subtask = 'ol_services';
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
  $display->layout = 'radix_harris';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Services';
  $display->uuid = 'ea951a38-0bd2-4867-ba80-251c6ef1ddef';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4c0509cd-3f68-4f66-be64-ab872111e039';
  $pane->panel = 'column1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Help text',
    'title' => '',
    'body' => '<p>This is a list of locally based service organisations based in or around the local area. The contents are entirely the responsibility of the traders themselves so read them in that light.</p>

<a href="/services">Reset filters</a>',
    'format' => 'panopoly_html_text',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4c0509cd-3f68-4f66-be64-ab872111e039';
  $display->content['new-4c0509cd-3f68-4f66-be64-ab872111e039'] = $pane;
  $display->panels['column1'][0] = 'new-4c0509cd-3f68-4f66-be64-ab872111e039';
  $pane = new stdClass();
  $pane->pid = 'new-9329e33c-108d-4682-ad8c-01eba1eaa19a';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-jm1m1wpfwnKIL3JK2TmhZTzKJM8tzXUF';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9329e33c-108d-4682-ad8c-01eba1eaa19a';
  $display->content['new-9329e33c-108d-4682-ad8c-01eba1eaa19a'] = $pane;
  $display->panels['column1'][1] = 'new-9329e33c-108d-4682-ad8c-01eba1eaa19a';
  $pane = new stdClass();
  $pane->pid = 'new-a89081f5-f2f4-40f0-8cbf-7ce799c6d37c';
  $pane->panel = 'column1';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-s811z3nRX0sLrH7AHxwJTOmBK3mFKlxk';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a89081f5-f2f4-40f0-8cbf-7ce799c6d37c';
  $display->content['new-a89081f5-f2f4-40f0-8cbf-7ce799c6d37c'] = $pane;
  $display->panels['column1'][2] = 'new-a89081f5-f2f4-40f0-8cbf-7ce799c6d37c';
  $pane = new stdClass();
  $pane->pid = 'new-9fc77cd8-07b3-4102-ae1e-747adeb26a93';
  $pane->panel = 'column2';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9fc77cd8-07b3-4102-ae1e-747adeb26a93';
  $display->content['new-9fc77cd8-07b3-4102-ae1e-747adeb26a93'] = $pane;
  $display->panels['column2'][0] = 'new-9fc77cd8-07b3-4102-ae1e-747adeb26a93';
  $pane = new stdClass();
  $pane->pid = 'new-eee94afa-2c62-4c50-9707-f6e7a1514023';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'openlocal_organisation-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 0,
      'title' => 0,
      'field_ol_description' => 0,
      'field_featured_categories' => 0,
      'nothing' => 1,
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'widget_title' => 'Recently added',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'eee94afa-2c62-4c50-9707-f6e7a1514023';
  $display->content['new-eee94afa-2c62-4c50-9707-f6e7a1514023'] = $pane;
  $display->panels['column2'][1] = 'new-eee94afa-2c62-4c50-9707-f6e7a1514023';
  $pane = new stdClass();
  $pane->pid = 'new-d0e014fd-27e3-44b4-8da1-0790c2cb4c97';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'openlocal_organisation_facet_search-grid';
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
  $pane->uuid = 'd0e014fd-27e3-44b4-8da1-0790c2cb4c97';
  $display->content['new-d0e014fd-27e3-44b4-8da1-0790c2cb4c97'] = $pane;
  $display->panels['contentmain'][0] = 'new-d0e014fd-27e3-44b4-8da1-0790c2cb4c97';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d0e014fd-27e3-44b4-8da1-0790c2cb4c97';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ol_services'] = $page;

  return $pages;

}
