<?php
/**
 * @file
 * openlocal_issue.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openlocal_issue_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_issue:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_issue';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Issues
%node:title',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '36799b77-f311-4cf2-956a-37642c890697';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d1ac03d3-03db-4244-8dee-c2227fdb6929';
    $pane->panel = 'contentmain';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd1ac03d3-03db-4244-8dee-c2227fdb6929';
    $display->content['new-d1ac03d3-03db-4244-8dee-c2227fdb6929'] = $pane;
    $display->panels['contentmain'][0] = 'new-d1ac03d3-03db-4244-8dee-c2227fdb6929';
    $pane = new stdClass();
    $pane->pid = 'new-3c7e5f8b-c122-417b-b43c-fb785a1046ec';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_details';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3c7e5f8b-c122-417b-b43c-fb785a1046ec';
    $display->content['new-3c7e5f8b-c122-417b-b43c-fb785a1046ec'] = $pane;
    $display->panels['contentmain'][1] = 'new-3c7e5f8b-c122-417b-b43c-fb785a1046ec';
    $pane = new stdClass();
    $pane->pid = 'new-a535b3af-2ef6-44d6-a22a-5424557d9980';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_issue_type';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a535b3af-2ef6-44d6-a22a-5424557d9980';
    $display->content['new-a535b3af-2ef6-44d6-a22a-5424557d9980'] = $pane;
    $display->panels['contentmain'][2] = 'new-a535b3af-2ef6-44d6-a22a-5424557d9980';
    $pane = new stdClass();
    $pane->pid = 'new-fe9d92df-45ef-4dbb-abb7-7aaee8a5bee7';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_issue_status';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fe9d92df-45ef-4dbb-abb7-7aaee8a5bee7';
    $display->content['new-fe9d92df-45ef-4dbb-abb7-7aaee8a5bee7'] = $pane;
    $display->panels['contentmain'][3] = 'new-fe9d92df-45ef-4dbb-abb7-7aaee8a5bee7';
    $pane = new stdClass();
    $pane->pid = 'new-5f67c8b7-b897-40bd-b387-65d494f18a08';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5f67c8b7-b897-40bd-b387-65d494f18a08';
    $display->content['new-5f67c8b7-b897-40bd-b387-65d494f18a08'] = $pane;
    $display->panels['contentmain'][4] = 'new-5f67c8b7-b897-40bd-b387-65d494f18a08';
    $pane = new stdClass();
    $pane->pid = 'new-bf7f6bf7-e21b-4708-a659-6b7dcfdec830';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'bf7f6bf7-e21b-4708-a659-6b7dcfdec830';
    $display->content['new-bf7f6bf7-e21b-4708-a659-6b7dcfdec830'] = $pane;
    $display->panels['contentmain'][5] = 'new-bf7f6bf7-e21b-4708-a659-6b7dcfdec830';
    $pane = new stdClass();
    $pane->pid = 'new-cf15b9e7-c522-42fb-b347-68c2ff4d82f3';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'cf15b9e7-c522-42fb-b347-68c2ff4d82f3';
    $display->content['new-cf15b9e7-c522-42fb-b347-68c2ff4d82f3'] = $pane;
    $display->panels['contentmain'][6] = 'new-cf15b9e7-c522-42fb-b347-68c2ff4d82f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5f67c8b7-b897-40bd-b387-65d494f18a08';
  $panelizer->display = $display;
  $export['node:ol_issue:default'] = $panelizer;

  return $export;
}
