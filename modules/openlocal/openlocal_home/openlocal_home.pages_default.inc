<?php
/**
 * @file
 * openlocal_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openlocal_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'The site homepage.';
  $page->path = 'frontpage';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  $display->title = 'Home';
  $display->uuid = '251a38a8-dfb5-473d-9a41-d1f628272d55';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5cbd9e24-074b-47af-8ce4-a6df872d1e81';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_widgets_general_content-piece_of_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'created' => 0,
        'name' => 0,
      ),
      'exposed' => array(
        'title' => 'Herne Hill Card',
        'type' => 'All',
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'view_mode' => 'featured',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'nodes',
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
    $pane->uuid = '5cbd9e24-074b-47af-8ce4-a6df872d1e81';
    $display->content['new-5cbd9e24-074b-47af-8ce4-a6df872d1e81'] = $pane;
    $display->panels['column1'][0] = 'new-5cbd9e24-074b-47af-8ce4-a6df872d1e81';
    $pane = new stdClass();
    $pane->pid = 'new-a246a9c6-5eac-4d90-8d64-fd126415a96b';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_event-panel_pane_1';
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
    $pane->uuid = 'a246a9c6-5eac-4d90-8d64-fd126415a96b';
    $display->content['new-a246a9c6-5eac-4d90-8d64-fd126415a96b'] = $pane;
    $display->panels['column1'][1] = 'new-a246a9c6-5eac-4d90-8d64-fd126415a96b';
    $pane = new stdClass();
    $pane->pid = 'new-6dcc8b69-71fe-4542-b9f7-86c7e7a2b233';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_twitter-panel_pane_1';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6dcc8b69-71fe-4542-b9f7-86c7e7a2b233';
    $display->content['new-6dcc8b69-71fe-4542-b9f7-86c7e7a2b233'] = $pane;
    $display->panels['column1'][2] = 'new-6dcc8b69-71fe-4542-b9f7-86c7e7a2b233';
    $pane = new stdClass();
    $pane->pid = 'new-9e33fb68-599d-42b6-a481-5ae6620398db';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_alert-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => 'Local alerts',
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
    $pane->uuid = '9e33fb68-599d-42b6-a481-5ae6620398db';
    $display->content['new-9e33fb68-599d-42b6-a481-5ae6620398db'] = $pane;
    $display->panels['column2'][0] = 'new-9e33fb68-599d-42b6-a481-5ae6620398db';
    $pane = new stdClass();
    $pane->pid = 'new-babda0a1-f1f1-4469-9563-abc41194c0a0';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_what_s_hot-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '6',
      'view_mode' => 'teaser',
      'widget_title' => NULL,
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
    $pane->uuid = 'babda0a1-f1f1-4469-9563-abc41194c0a0';
    $display->content['new-babda0a1-f1f1-4469-9563-abc41194c0a0'] = $pane;
    $display->panels['column2'][1] = 'new-babda0a1-f1f1-4469-9563-abc41194c0a0';
    $pane = new stdClass();
    $pane->pid = 'new-81d7edfc-f6e5-4ae6-8522-42c6a6d929f3';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'ol_forum_recent_comments-panel_pane_1';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '81d7edfc-f6e5-4ae6-8522-42c6a6d929f3';
    $display->content['new-81d7edfc-f6e5-4ae6-8522-42c6a6d929f3'] = $pane;
    $display->panels['column2'][2] = 'new-81d7edfc-f6e5-4ae6-8522-42c6a6d929f3';
    $pane = new stdClass();
    $pane->pid = 'new-69f5f27e-76fc-4abc-964d-fc9575b52e11';
    $pane->panel = 'column2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OL Home actions',
      'title' => '',
      'body' => '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/openlocal-news-article"><span class="ol-action-span"><i class="fa fa-plus"></i> add news article</span></a>
</div>

<div>
<a href="/contextual_help/how-create-news-article" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating articles</a>
</div>

<div class="ol-action-button">
<a href="/node/add/ol-alert"><span class="ol-action-span"><i class="fa fa-plus"></i> create alert</span></a>
</div>

<div>
<a href="/contextual_help/how-create-alert" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating alerts</a>
</div>
</div>',
      'format' => 'panopoly_html_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '69f5f27e-76fc-4abc-964d-fc9575b52e11';
    $display->content['new-69f5f27e-76fc-4abc-964d-fc9575b52e11'] = $pane;
    $display->panels['column2'][3] = 'new-69f5f27e-76fc-4abc-964d-fc9575b52e11';
    $pane = new stdClass();
    $pane->pid = 'new-b6884e53-690d-448f-9d43-b2f970d3d357';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_highlight-panel_pane_1';
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
    $pane->uuid = 'b6884e53-690d-448f-9d43-b2f970d3d357';
    $display->content['new-b6884e53-690d-448f-9d43-b2f970d3d357'] = $pane;
    $display->panels['contentmain'][0] = 'new-b6884e53-690d-448f-9d43-b2f970d3d357';
    $pane = new stdClass();
    $pane->pid = 'new-cadbbc65-5c2f-4a6b-8b0a-bafcad6e5cd7';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_news-homepage_news_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '3',
      'fields_override' => array(
        'nid' => 0,
        'field_featured_image' => 1,
        'title' => 1,
        'body' => 1,
        'created' => 1,
        'name' => 1,
        'field_user_picture' => 1,
        'comment_count' => 1,
      ),
      'exposed' => array(
        'Is Featured' => 'All',
        'sort_order' => 'DESC',
        'sort_by' => 'created',
      ),
      'override_title' => '',
      'override_title_text' => '',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cadbbc65-5c2f-4a6b-8b0a-bafcad6e5cd7';
    $display->content['new-cadbbc65-5c2f-4a6b-8b0a-bafcad6e5cd7'] = $pane;
    $display->panels['contentmain'][1] = 'new-cadbbc65-5c2f-4a6b-8b0a-bafcad6e5cd7';
    $pane = new stdClass();
    $pane->pid = 'new-66d0c1f6-7254-4aa2-8cc7-cb9950a725ff';
    $pane->panel = 'contentmain';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '66d0c1f6-7254-4aa2-8cc7-cb9950a725ff';
    $display->content['new-66d0c1f6-7254-4aa2-8cc7-cb9950a725ff'] = $pane;
    $display->panels['contentmain'][2] = 'new-66d0c1f6-7254-4aa2-8cc7-cb9950a725ff';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
