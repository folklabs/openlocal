<?php
/**
 * @file
 * openlocal_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openlocal_event_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events/list/!term/!date';
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
      'title' => 'What\'s on',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          6 => '6',
          1 => 0,
          2 => 0,
          4 => 0,
          3 => 0,
          7 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 0,
      ),
    ),
    'date' => array(
      'id' => 1,
      'identifier' => 'Date',
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
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
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
  $display->layout = 'harris';
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
  $display->title = 'What\'s on';
  $display->uuid = '0c73555f-c97e-4151-9788-22176a57c83f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0cfa3ec0-390e-4eed-b578-ac0e58062ee2';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_event_categories-panel_pane_1';
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
    $pane->uuid = '0cfa3ec0-390e-4eed-b578-ac0e58062ee2';
    $display->content['new-0cfa3ec0-390e-4eed-b578-ac0e58062ee2'] = $pane;
    $display->panels['column1'][0] = 'new-0cfa3ec0-390e-4eed-b578-ac0e58062ee2';
    $pane = new stdClass();
    $pane->pid = 'new-77d0c5d4-70be-4b99-84a5-79d4c576db0f';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'ol_event_calendar-panel_pane_2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '77d0c5d4-70be-4b99-84a5-79d4c576db0f';
    $display->content['new-77d0c5d4-70be-4b99-84a5-79d4c576db0f'] = $pane;
    $display->panels['column1'][1] = 'new-77d0c5d4-70be-4b99-84a5-79d4c576db0f';
    $pane = new stdClass();
    $pane->pid = 'new-a4f0a695-344a-4e9d-bcbb-81a4eddc393e';
    $pane->panel = 'column2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OL Event actions',
      'title' => '',
      'body' => '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/ol-event"><span class="ol-action-span"><i class="fa fa-plus"></i> add event</span></a>
</div>
<div class="ol-action-button">
<a href="/node/add/ol-place"><span class="ol-action-span"><i class="fa fa-plus"></i> add place</span></a>
</div>

<div>
<a href="/contextual_help/how-create-event" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating events</a>
</div>
</div>',
      'format' => 'panopoly_html_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4f0a695-344a-4e9d-bcbb-81a4eddc393e';
    $display->content['new-a4f0a695-344a-4e9d-bcbb-81a4eddc393e'] = $pane;
    $display->panels['column2'][0] = 'new-a4f0a695-344a-4e9d-bcbb-81a4eddc393e';
    $pane = new stdClass();
    $pane->pid = 'new-b89f948f-5713-48dc-ae5e-cface43ba061';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_event-panel_pane_2';
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
      'context' => array(
        0 => 'argument_term_1',
        1 => 'empty',
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
    $pane->uuid = 'b89f948f-5713-48dc-ae5e-cface43ba061';
    $display->content['new-b89f948f-5713-48dc-ae5e-cface43ba061'] = $pane;
    $display->panels['contentmain'][0] = 'new-b89f948f-5713-48dc-ae5e-cface43ba061';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b89f948f-5713-48dc-ae5e-cface43ba061';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_calendar';
  $page->task = 'page';
  $page->admin_title = 'Events calendar';
  $page->admin_description = '';
  $page->path = 'events/calendar';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_calendar_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_calendar';
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
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Calendar';
  $display->uuid = '7d032db0-f1b1-4772-bc89-7cde1f935cd2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-00cfc939-f487-4f9e-a032-516b427b715f';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'ol_event_calendar-panel_pane_1';
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
    $pane->uuid = '00cfc939-f487-4f9e-a032-516b427b715f';
    $display->content['new-00cfc939-f487-4f9e-a032-516b427b715f'] = $pane;
    $display->panels['contentmain'][0] = 'new-00cfc939-f487-4f9e-a032-516b427b715f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_calendar'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_map';
  $page->task = 'page';
  $page->admin_title = 'Events map';
  $page->admin_description = '';
  $page->path = 'events/map';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Map',
    'name' => 'navigation',
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
  $handler->name = 'page_events_map_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_map';
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
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events map';
  $display->uuid = '460d174b-af3f-466a-a3dd-1e55ff9cf2b5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-364c5c48-61bd-4870-a066-3b861554f70d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_event-panel_pane_4';
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
    $pane->uuid = '364c5c48-61bd-4870-a066-3b861554f70d';
    $display->content['new-364c5c48-61bd-4870-a066-3b861554f70d'] = $pane;
    $display->panels['contentmain'][0] = 'new-364c5c48-61bd-4870-a066-3b861554f70d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-364c5c48-61bd-4870-a066-3b861554f70d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_map'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ol_event_venues';
  $page->task = 'page';
  $page->admin_title = 'Venues';
  $page->admin_description = 'A listing of venues for events.';
  $page->path = 'venues/!keywords';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Venues',
    'name' => 'main-menu',
    'weight' => '10',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Venues',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'keywords' => array(
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
  $handler->name = 'page_ol_event_venues_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ol_event_venues';
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
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Event venues';
  $display->uuid = '847f14c4-4e55-40ff-8a8a-1942a72ead00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-db191b05-5a22-4d38-8f5a-c75a03da153f';
    $pane->panel = 'column1';
    $pane->type = 'block';
    $pane->subtype = 'block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => ' ',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'db191b05-5a22-4d38-8f5a-c75a03da153f';
    $display->content['new-db191b05-5a22-4d38-8f5a-c75a03da153f'] = $pane;
    $display->panels['column1'][0] = 'new-db191b05-5a22-4d38-8f5a-c75a03da153f';
    $pane = new stdClass();
    $pane->pid = 'new-bdb93446-562c-438d-89f8-6a7db353bfde';
    $pane->panel = 'column2';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
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
    $pane->uuid = 'bdb93446-562c-438d-89f8-6a7db353bfde';
    $display->content['new-bdb93446-562c-438d-89f8-6a7db353bfde'] = $pane;
    $display->panels['column2'][0] = 'new-bdb93446-562c-438d-89f8-6a7db353bfde';
    $pane = new stdClass();
    $pane->pid = 'new-04900176-a4c5-4996-998a-2534a5b2177f';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'views-160a843794911f6ad4ddb6ec52b766fa';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
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
    $pane->uuid = '04900176-a4c5-4996-998a-2534a5b2177f';
    $display->content['new-04900176-a4c5-4996-998a-2534a5b2177f'] = $pane;
    $display->panels['contentmain'][0] = 'new-04900176-a4c5-4996-998a-2534a5b2177f';
    $pane = new stdClass();
    $pane->pid = 'new-6381f4da-453b-48af-b394-d5da5133d734';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_event_venues-panel_pane_1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6381f4da-453b-48af-b394-d5da5133d734';
    $display->content['new-6381f4da-453b-48af-b394-d5da5133d734'] = $pane;
    $display->panels['contentmain'][1] = 'new-6381f4da-453b-48af-b394-d5da5133d734';
    $pane = new stdClass();
    $pane->pid = 'new-c9d65ad5-1485-4f0d-88fd-32a9952f6e3b';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_event_venues-panel_pane_2';
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
    $pane->uuid = 'c9d65ad5-1485-4f0d-88fd-32a9952f6e3b';
    $display->content['new-c9d65ad5-1485-4f0d-88fd-32a9952f6e3b'] = $pane;
    $display->panels['header'][0] = 'new-c9d65ad5-1485-4f0d-88fd-32a9952f6e3b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ol_event_venues'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ol_event_venues_map';
  $page->task = 'page';
  $page->admin_title = 'Venues map';
  $page->admin_description = 'A map of potential event venues.';
  $page->path = 'venues/map';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Map',
    'name' => 'navigation',
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
  $handler->name = 'page_ol_event_venues_map_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ol_event_venues_map';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Map',
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
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Venues map';
  $display->uuid = 'ba5eae6d-62dd-4011-8e0f-7bc45d68c9cd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a186edf1-b304-4186-8d2b-0766e1ac90e4';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_event_venues-panel_pane_2';
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
    $pane->uuid = 'a186edf1-b304-4186-8d2b-0766e1ac90e4';
    $display->content['new-a186edf1-b304-4186-8d2b-0766e1ac90e4'] = $pane;
    $display->panels['contentmain'][0] = 'new-a186edf1-b304-4186-8d2b-0766e1ac90e4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a186edf1-b304-4186-8d2b-0766e1ac90e4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ol_event_venues_map'] = $page;

  return $pages;

}
