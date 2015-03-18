<?php
/**
 * @file
 * openlocal_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openlocal_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openlocal_news_home_page';
  $page->task = 'page';
  $page->admin_title = 'News Home Page';
  $page->admin_description = 'The primary disambiguation page for all things news-related. Think of as the primary page of a blog or news section of your site.';
  $page->path = 'news/!term';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
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
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          2 => '2',
          1 => 0,
          7 => 0,
          3 => 0,
          6 => 0,
          8 => 0,
          4 => 0,
          5 => 0,
          10 => 0,
          11 => 0,
          9 => 0,
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
  $handler->name = 'page_openlocal_news_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openlocal_news_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
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
      'sidebar' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = '7e26167e-4e1c-4944-b44a-90a437207e17';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3db711be-100e-4c3b-80df-ec800b9c3ebc';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_news_categories-panel_pane_1';
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
    $pane->uuid = '3db711be-100e-4c3b-80df-ec800b9c3ebc';
    $display->content['new-3db711be-100e-4c3b-80df-ec800b9c3ebc'] = $pane;
    $display->panels['column1'][0] = 'new-3db711be-100e-4c3b-80df-ec800b9c3ebc';
    $pane = new stdClass();
    $pane->pid = 'new-1b769ed4-b34c-4d2f-86a7-d9b7878bcdb1';
    $pane->panel = 'column2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OL News actions',
      'title' => '',
      'body' => '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/ol-news-article"><span class="ol-action-span"><i class="fa fa-plus"></i> add news article</span></a>
</div>

<div>
<a href="/contextual_help/how-create-news-article" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating articles</a>
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
    $pane->uuid = '1b769ed4-b34c-4d2f-86a7-d9b7878bcdb1';
    $display->content['new-1b769ed4-b34c-4d2f-86a7-d9b7878bcdb1'] = $pane;
    $display->panels['column2'][0] = 'new-1b769ed4-b34c-4d2f-86a7-d9b7878bcdb1';
    $pane = new stdClass();
    $pane->pid = 'new-aa85516f-1631-4e02-8df9-93b6b19d8bf1';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_news-article_archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => NULL,
      'pager_id' => NULL,
      'fields_override' => array(
        'field_featured_image' => 0,
        'title' => 1,
        'body' => 0,
        'created' => 0,
      ),
      'exposed' => array(
        'widget_title' => 'Archive',
        'use_pager' => 0,
        'pager_id' => '',
        'sort_by' => 'created',
        'sort_order' => 'DESC',
      ),
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => 'Archive',
      'items_per_page' => '10',
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
    $pane->uuid = 'aa85516f-1631-4e02-8df9-93b6b19d8bf1';
    $display->content['new-aa85516f-1631-4e02-8df9-93b6b19d8bf1'] = $pane;
    $display->panels['column2'][1] = 'new-aa85516f-1631-4e02-8df9-93b6b19d8bf1';
    $pane = new stdClass();
    $pane->pid = 'new-ae9f3c39-8a7d-4a4c-95ab-a43e54c2f72e';
    $pane->panel = 'column2';
    $pane->type = 'openlocal_news_rss';
    $pane->subtype = 'openlocal_news_rss';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ae9f3c39-8a7d-4a4c-95ab-a43e54c2f72e';
    $display->content['new-ae9f3c39-8a7d-4a4c-95ab-a43e54c2f72e'] = $pane;
    $display->panels['column2'][2] = 'new-ae9f3c39-8a7d-4a4c-95ab-a43e54c2f72e';
    $pane = new stdClass();
    $pane->pid = 'new-f64be362-7d9b-4b39-a4e8-9740a28bc851';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_news-single_news_article';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'body' => 1,
        'created' => 1,
      ),
      'exposed' => array(
        'title_1' => 'Brockwell Lido Open Weekend - Update on free Sunday "taster" classes',
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
    $pane->uuid = 'f64be362-7d9b-4b39-a4e8-9740a28bc851';
    $display->content['new-f64be362-7d9b-4b39-a4e8-9740a28bc851'] = $pane;
    $display->panels['contentmain'][0] = 'new-f64be362-7d9b-4b39-a4e8-9740a28bc851';
    $pane = new stdClass();
    $pane->pid = 'new-7243182d-4ed6-4f65-9c66-d679a655ff8a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_news-list_news_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => '',
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'use_pager' => 1,
      'pager_id' => '',
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7243182d-4ed6-4f65-9c66-d679a655ff8a';
    $display->content['new-7243182d-4ed6-4f65-9c66-d679a655ff8a'] = $pane;
    $display->panels['contentmain'][1] = 'new-7243182d-4ed6-4f65-9c66-d679a655ff8a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openlocal_news_home_page'] = $page;

  return $pages;

}
