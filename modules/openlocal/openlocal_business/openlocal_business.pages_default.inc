<?php
/**
 * @file
 * openlocal_business.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openlocal_business_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'services';
  $page->task = 'page';
  $page->admin_title = 'Services';
  $page->admin_description = '';
  $page->path = 'services/list/!term';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'List',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Services',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
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
  $handler->name = 'page_services_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'services';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Facet search',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Services
%term:raw',
    'panels_breadcrumbs_paths' => 'services',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_harris';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Services';
  $display->uuid = 'b8adfd2f-7b45-4321-b43b-d2f1c1eea737';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b170ea3a-d581-4bf3-97fd-9029cf96074c';
    $pane->panel = 'column1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OL Business description',
      'title' => '',
      'body' => '<p>This is a list of locally based service companies based in or around the Herne Hill, SE24 area. The contents are entirely the responsibility of the traders themselves so read them in that light.</p>

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
    $pane->uuid = 'b170ea3a-d581-4bf3-97fd-9029cf96074c';
    $display->content['new-b170ea3a-d581-4bf3-97fd-9029cf96074c'] = $pane;
    $display->panels['column1'][0] = 'new-b170ea3a-d581-4bf3-97fd-9029cf96074c';
    $pane = new stdClass();
    $pane->pid = 'new-4f94595e-45da-49e3-91c4-6bcd214b0c8b';
    $pane->panel = 'column1';
    $pane->type = 'search_current';
    $pane->subtype = 'search_current';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'advanced',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => FALSE,
      'prompt' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4f94595e-45da-49e3-91c4-6bcd214b0c8b';
    $display->content['new-4f94595e-45da-49e3-91c4-6bcd214b0c8b'] = $pane;
    $display->panels['column1'][1] = 'new-4f94595e-45da-49e3-91c4-6bcd214b0c8b';
    $pane = new stdClass();
    $pane->pid = 'new-f990ddeb-bedf-45ab-a31b-8dd9f2302610';
    $pane->panel = 'column1';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-92S7jjLVNm4mHAmafCXgP2s7x0qBWf9j';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f990ddeb-bedf-45ab-a31b-8dd9f2302610';
    $display->content['new-f990ddeb-bedf-45ab-a31b-8dd9f2302610'] = $pane;
    $display->panels['column1'][2] = 'new-f990ddeb-bedf-45ab-a31b-8dd9f2302610';
    $pane = new stdClass();
    $pane->pid = 'new-dc58544c-8400-40f4-8381-ef508eff8987';
    $pane->panel = 'column1';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-suVg0EF82TRmk1BIlyr5vF5kF0QvcXxt';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'dc58544c-8400-40f4-8381-ef508eff8987';
    $display->content['new-dc58544c-8400-40f4-8381-ef508eff8987'] = $pane;
    $display->panels['column1'][3] = 'new-dc58544c-8400-40f4-8381-ef508eff8987';
    $pane = new stdClass();
    $pane->pid = 'new-695f1634-d2df-4e0c-9302-ebb1a618ae1c';
    $pane->panel = 'column2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OL Business actions',
      'title' => '',
      'body' => '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/ol-issue"><span class="ol-action-span"><i class="fa fa-plus"></i> request business listing</span></a>
</div>

<div>
<a href="/contextual_help/how-add-business" class="ol-action-help"><i class="fa fa-question-circle"></i> About business listings</a>
</div>
</div>',
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
    $pane->uuid = '695f1634-d2df-4e0c-9302-ebb1a618ae1c';
    $display->content['new-695f1634-d2df-4e0c-9302-ebb1a618ae1c'] = $pane;
    $display->panels['column2'][0] = 'new-695f1634-d2df-4e0c-9302-ebb1a618ae1c';
    $pane = new stdClass();
    $pane->pid = 'new-014740a7-81b6-43e6-9ed5-bc636956cd23';
    $pane->panel = 'column2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Traders forum link',
      'title' => '',
      'body' => '<p>If you wish to post a review of a local trader, or request recommendations then please use the Discuss area on the web site - check out the "Local traders" Forum.</p>',
      'format' => 'panopoly_wysiwyg_text',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '014740a7-81b6-43e6-9ed5-bc636956cd23';
    $display->content['new-014740a7-81b6-43e6-9ed5-bc636956cd23'] = $pane;
    $display->panels['column2'][1] = 'new-014740a7-81b6-43e6-9ed5-bc636956cd23';
    $pane = new stdClass();
    $pane->pid = 'new-d104ae1b-73c1-4b44-945e-488c45ca0cd0';
    $pane->panel = 'column2';
    $pane->type = 'block';
    $pane->subtype = 'block-7';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Your business here?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd104ae1b-73c1-4b44-945e-488c45ca0cd0';
    $display->content['new-d104ae1b-73c1-4b44-945e-488c45ca0cd0'] = $pane;
    $display->panels['column2'][2] = 'new-d104ae1b-73c1-4b44-945e-488c45ca0cd0';
    $pane = new stdClass();
    $pane->pid = 'new-de28df7d-8eaf-4443-b499-9c54cc64c272';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_business-panel_pane_4';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_ol_business_category' => 1,
        'field_featured_image' => 1,
        'title' => 1,
        'field_ol_description' => 1,
      ),
      'context' => array(
        0 => 'empty',
      ),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'de28df7d-8eaf-4443-b499-9c54cc64c272';
    $display->content['new-de28df7d-8eaf-4443-b499-9c54cc64c272'] = $pane;
    $display->panels['column2'][3] = 'new-de28df7d-8eaf-4443-b499-9c54cc64c272';
    $pane = new stdClass();
    $pane->pid = 'new-0dfe9f57-731f-4778-b0fc-e2c8760942c4';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_business_facet_search-panel_pane_1';
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
    $pane->uuid = '0dfe9f57-731f-4778-b0fc-e2c8760942c4';
    $display->content['new-0dfe9f57-731f-4778-b0fc-e2c8760942c4'] = $pane;
    $display->panels['contentmain'][0] = 'new-0dfe9f57-731f-4778-b0fc-e2c8760942c4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_services_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'services';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Filter',
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
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Services';
  $display->uuid = '83259497-8868-41a9-a944-49578286381a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a16644a0-be7b-47c3-8e42-cefd550981b1';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_business_categories-panel_pane_1';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ol-2nd-nav-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a16644a0-be7b-47c3-8e42-cefd550981b1';
    $display->content['new-a16644a0-be7b-47c3-8e42-cefd550981b1'] = $pane;
    $display->panels['column1'][0] = 'new-a16644a0-be7b-47c3-8e42-cefd550981b1';
    $pane = new stdClass();
    $pane->pid = 'new-e58d2d94-4e94-4e3e-b3df-25c2d4a418e0';
    $pane->panel = 'column2';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e58d2d94-4e94-4e3e-b3df-25c2d4a418e0';
    $display->content['new-e58d2d94-4e94-4e3e-b3df-25c2d4a418e0'] = $pane;
    $display->panels['column2'][0] = 'new-e58d2d94-4e94-4e3e-b3df-25c2d4a418e0';
    $pane = new stdClass();
    $pane->pid = 'new-295884a2-f828-4cc5-80d3-ccbc38e5ec9a';
    $pane->panel = 'column2';
    $pane->type = 'block';
    $pane->subtype = 'block-7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Your business here?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '295884a2-f828-4cc5-80d3-ccbc38e5ec9a';
    $display->content['new-295884a2-f828-4cc5-80d3-ccbc38e5ec9a'] = $pane;
    $display->panels['column2'][1] = 'new-295884a2-f828-4cc5-80d3-ccbc38e5ec9a';
    $pane = new stdClass();
    $pane->pid = 'new-701aa93d-5c15-4385-b2d9-757adcfc72e2';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_business-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_ol_business_category' => 1,
        'field_featured_image' => 1,
        'title' => 1,
        'field_ol_description' => 1,
      ),
      'context' => array(
        0 => 'empty',
      ),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '701aa93d-5c15-4385-b2d9-757adcfc72e2';
    $display->content['new-701aa93d-5c15-4385-b2d9-757adcfc72e2'] = $pane;
    $display->panels['column2'][2] = 'new-701aa93d-5c15-4385-b2d9-757adcfc72e2';
    $pane = new stdClass();
    $pane->pid = 'new-d224b5b4-311a-4c8f-a43a-d71a4705601a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_business-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_ol_business_category' => 1,
        'field_featured_image' => 1,
        'title' => 1,
        'field_ol_description' => 1,
      ),
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
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd224b5b4-311a-4c8f-a43a-d71a4705601a';
    $display->content['new-d224b5b4-311a-4c8f-a43a-d71a4705601a'] = $pane;
    $display->panels['contentmain'][0] = 'new-d224b5b4-311a-4c8f-a43a-d71a4705601a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['services'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'services_map';
  $page->task = 'page';
  $page->admin_title = 'Services map';
  $page->admin_description = '';
  $page->path = 'services/map';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Map',
    'name' => 'main-menu',
    'weight' => '10',
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
  $handler->name = 'page_services_map__services_map';
  $handler->task = 'page';
  $handler->subtask = 'services_map';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Services map',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'services_map',
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
  $display->title = 'Services map';
  $display->uuid = 'b4ce4eb7-6281-4d53-8e19-8a9a0765121d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-790e36da-51c9-4fa3-84ba-448fd01f52ff';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_business-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => '',
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '790e36da-51c9-4fa3-84ba-448fd01f52ff';
    $display->content['new-790e36da-51c9-4fa3-84ba-448fd01f52ff'] = $pane;
    $display->panels['contentmain'][0] = 'new-790e36da-51c9-4fa3-84ba-448fd01f52ff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-790e36da-51c9-4fa3-84ba-448fd01f52ff';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['services_map'] = $page;

  return $pages;

}
