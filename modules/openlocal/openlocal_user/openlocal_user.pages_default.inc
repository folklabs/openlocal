<?php
/**
 * @file
 * openlocal_user.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openlocal_user_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ol_user_issues';
  $page->task = 'page';
  $page->admin_title = 'User issues';
  $page->admin_description = 'A user\'s open and closed issues.';
  $page->path = 'user/%user/issues';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'My issues',
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
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
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
  $handler->name = 'page_ol_user_issues__panel_context_7103f301-fc97-4090-9206-00ba083f79e5';
  $handler->task = 'page';
  $handler->subtask = 'ol_user_issues';
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
  $display->layout = 'radix_bryant_flipped';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'My issues';
  $display->uuid = '88fe5884-9db9-41fc-a3c3-d3122ba88687';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ec783459-fa8a-43fb-8acb-001b8649a984';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_issue-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'view_settings' => 'table',
      'header_type' => 'titles',
      'view_mode' => 'teaser',
      'widget_title' => 'Open issues',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec783459-fa8a-43fb-8acb-001b8649a984';
    $display->content['new-ec783459-fa8a-43fb-8acb-001b8649a984'] = $pane;
    $display->panels['contentmain'][0] = 'new-ec783459-fa8a-43fb-8acb-001b8649a984';
    $pane = new stdClass();
    $pane->pid = 'new-82dcc883-3400-4af9-94e9-c67a2c014293';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_issue-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'view_settings' => 'table',
      'header_type' => 'titles',
      'view_mode' => 'teaser',
      'widget_title' => 'Closed issues',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '82dcc883-3400-4af9-94e9-c67a2c014293';
    $display->content['new-82dcc883-3400-4af9-94e9-c67a2c014293'] = $pane;
    $display->panels['contentmain'][1] = 'new-82dcc883-3400-4af9-94e9-c67a2c014293';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ol_user_issues'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ol_user_published_content';
  $page->task = 'page';
  $page->admin_title = 'User published content';
  $page->admin_description = '';
  $page->path = 'user/%user/content';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Draft content',
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
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
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
  $handler->name = 'page_ol_user_published_content_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ol_user_published_content';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%user:name
Published content',
    'panels_breadcrumbs_paths' => '%user:name',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_entity_id:user_1',
            1 => 'logged-in-user',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_bryant_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Draft content';
  $display->uuid = 'eeaa7d45-25e8-4923-86ee-0638d93a9192';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-05613e1a-703f-4ff5-8f8d-2fa6e101689d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_user_content-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'table',
      'header_type' => 'titles',
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
    $pane->uuid = '05613e1a-703f-4ff5-8f8d-2fa6e101689d';
    $display->content['new-05613e1a-703f-4ff5-8f8d-2fa6e101689d'] = $pane;
    $display->panels['contentmain'][0] = 'new-05613e1a-703f-4ff5-8f8d-2fa6e101689d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ol_user_published_content'] = $page;

  return $pages;

}
