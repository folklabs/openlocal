<?php
/**
 * @file
 * openlocal_group.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openlocal_group_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'group_events';
  $page->task = 'page';
  $page->admin_title = 'Group events';
  $page->admin_description = 'Events tab for groups.';
  $page->path = 'node/%node/events';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ol_group' => 'ol_group',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Events',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_group_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'group_events';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Groups
%node:title
Events',
    'panels_breadcrumbs_paths' => 'groups
%node:url',
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
  $display->title = '%node:title events';
  $display->uuid = 'bd071488-0fc6-4968-b588-a3de05dc8ebd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-332f4c48-46ee-4de0-8249-fe343d01120c';
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
    $pane->uuid = '332f4c48-46ee-4de0-8249-fe343d01120c';
    $display->content['new-332f4c48-46ee-4de0-8249-fe343d01120c'] = $pane;
    $display->panels['column2'][0] = 'new-332f4c48-46ee-4de0-8249-fe343d01120c';
    $pane = new stdClass();
    $pane->pid = 'new-20470b8b-8e67-40e8-885c-89efc11d8469';
    $pane->panel = 'column2';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '20470b8b-8e67-40e8-885c-89efc11d8469';
    $display->content['new-20470b8b-8e67-40e8-885c-89efc11d8469'] = $pane;
    $display->panels['column2'][1] = 'new-20470b8b-8e67-40e8-885c-89efc11d8469';
    $pane = new stdClass();
    $pane->pid = 'new-1dd2bdb7-5776-4191-ad09-5538499cc4df';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_event-panel_pane_3';
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
    $pane->uuid = '1dd2bdb7-5776-4191-ad09-5538499cc4df';
    $display->content['new-1dd2bdb7-5776-4191-ad09-5538499cc4df'] = $pane;
    $display->panels['contentmain'][0] = 'new-1dd2bdb7-5776-4191-ad09-5538499cc4df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1dd2bdb7-5776-4191-ad09-5538499cc4df';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['group_events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'groups';
  $page->task = 'page';
  $page->admin_title = 'Groups';
  $page->admin_description = '';
  $page->path = 'groups/list/!term';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'List',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Community',
      'name' => 'main-menu',
      'weight' => '5',
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
          8 => '8',
          1 => 0,
          2 => 0,
          6 => 0,
          4 => 0,
          3 => 0,
          7 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 0,
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
  $handler->name = 'page_groups_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'groups';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
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
      'contentmain' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Community';
  $display->uuid = '90f6fb08-fed0-4d99-8c4a-9f4eea60e776';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7c89d047-d73f-44f1-bdf0-1af80976d938';
    $pane->panel = 'column1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Group context help',
      'title' => '',
      'body' => '<p>The Community page is a collection of groups and organisations in the local area. Each group area is run by that respective group and content posted by them and their members.</p><p>Use the "+add group" button on the right hand side if you wish to start up your own group on the Herne Hill web site.</p>',
      'format' => 'panopoly_wysiwyg_text',
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
    $pane->uuid = '7c89d047-d73f-44f1-bdf0-1af80976d938';
    $display->content['new-7c89d047-d73f-44f1-bdf0-1af80976d938'] = $pane;
    $display->panels['column1'][0] = 'new-7c89d047-d73f-44f1-bdf0-1af80976d938';
    $pane = new stdClass();
    $pane->pid = 'new-77c8176e-6109-4ea1-8a55-a90ab8495084';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_group_categories-panel_pane_1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '77c8176e-6109-4ea1-8a55-a90ab8495084';
    $display->content['new-77c8176e-6109-4ea1-8a55-a90ab8495084'] = $pane;
    $display->panels['column1'][1] = 'new-77c8176e-6109-4ea1-8a55-a90ab8495084';
    $pane = new stdClass();
    $pane->pid = 'new-070b0733-dda8-4354-87a8-4881a31bf130';
    $pane->panel = 'column2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OL Group actions',
      'title' => '',
      'body' => '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/ol-issue"><span class="ol-action-span"><i class="fa fa-plus"></i> request group</span></a>
</div>

<div>
<a href="/contextual_help/how-create-group" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating groups</a>
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
    $pane->uuid = '070b0733-dda8-4354-87a8-4881a31bf130';
    $display->content['new-070b0733-dda8-4354-87a8-4881a31bf130'] = $pane;
    $display->panels['column2'][0] = 'new-070b0733-dda8-4354-87a8-4881a31bf130';
    $pane = new stdClass();
    $pane->pid = 'new-42577151-e2a3-4238-8677-0cc9b7ab0aaa';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_group-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_ol_group_category' => 1,
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '42577151-e2a3-4238-8677-0cc9b7ab0aaa';
    $display->content['new-42577151-e2a3-4238-8677-0cc9b7ab0aaa'] = $pane;
    $display->panels['column2'][1] = 'new-42577151-e2a3-4238-8677-0cc9b7ab0aaa';
    $pane = new stdClass();
    $pane->pid = 'new-dd4c4925-a332-4852-a166-17a5d9c4b3b6';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_group-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_featured_categories' => 1,
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
    $pane->uuid = 'dd4c4925-a332-4852-a166-17a5d9c4b3b6';
    $display->content['new-dd4c4925-a332-4852-a166-17a5d9c4b3b6'] = $pane;
    $display->panels['contentmain'][0] = 'new-dd4c4925-a332-4852-a166-17a5d9c4b3b6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['groups'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ol_group_galleries';
  $page->task = 'page';
  $page->admin_title = 'Group galleries';
  $page->admin_description = '';
  $page->path = 'node/%node/galleries';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ol_group' => 'ol_group',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Galleries',
    'name' => 'navigation',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ol_group_galleries_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ol_group_galleries';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Group galleries',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Groups
%node:title
Galleries',
    'panels_breadcrumbs_paths' => '/groups
%node:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_bryant_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Galleries';
  $display->uuid = 'e7698e4f-c0e5-4541-bebe-911d03f95542';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-54d83b72-e946-47fa-bbb7-4b618729b9c9';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_gallery-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => '<none>',
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
      'override_title' => '',
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
    $pane->uuid = '54d83b72-e946-47fa-bbb7-4b618729b9c9';
    $display->content['new-54d83b72-e946-47fa-bbb7-4b618729b9c9'] = $pane;
    $display->panels['contentmain'][0] = 'new-54d83b72-e946-47fa-bbb7-4b618729b9c9';
    $pane = new stdClass();
    $pane->pid = 'new-e6c48e88-548f-412e-babf-af02ecd0a5b3';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OL Group Gallery actions',
      'title' => '',
      'body' => '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/ol-photo-album"><span class="ol-action-span"><i class="fa fa-plus"></i> add photos</span></a>
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
    $pane->uuid = 'e6c48e88-548f-412e-babf-af02ecd0a5b3';
    $display->content['new-e6c48e88-548f-412e-babf-af02ecd0a5b3'] = $pane;
    $display->panels['sidebar'][0] = 'new-e6c48e88-548f-412e-babf-af02ecd0a5b3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ol_group_galleries'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ol_groups_map';
  $page->task = 'page';
  $page->admin_title = 'Groups map';
  $page->admin_description = 'A map of local community groups, if they have a defined location.';
  $page->path = 'groups/map';
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
  $handler->name = 'page_ol_groups_map_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ol_groups_map';
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
  $display->title = 'Map';
  $display->uuid = '753651d4-aa61-4de3-b314-a855091bc3a5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8c9388db-4e69-4853-bf81-dc9cb7ec00cf';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_group-panel_pane_2';
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
    $pane->uuid = '8c9388db-4e69-4853-bf81-dc9cb7ec00cf';
    $display->content['new-8c9388db-4e69-4853-bf81-dc9cb7ec00cf'] = $pane;
    $display->panels['contentmain'][0] = 'new-8c9388db-4e69-4853-bf81-dc9cb7ec00cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8c9388db-4e69-4853-bf81-dc9cb7ec00cf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ol_groups_map'] = $page;

  return $pages;

}
