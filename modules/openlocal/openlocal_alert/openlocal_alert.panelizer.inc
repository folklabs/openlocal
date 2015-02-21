<?php
/**
 * @file
 * openlocal_alert.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openlocal_alert_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_alert:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_alert';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'taylor';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'half' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '02a2036f-df5b-48b5-91cd-02ee0d4bc0f5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d2224107-533d-4539-a61b-44ff0fb8d06b';
    $pane->panel = 'half';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'openlocal_panel_deep',
        'image_link' => '',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd2224107-533d-4539-a61b-44ff0fb8d06b';
    $display->content['new-d2224107-533d-4539-a61b-44ff0fb8d06b'] = $pane;
    $display->panels['half'][0] = 'new-d2224107-533d-4539-a61b-44ff0fb8d06b';
    $pane = new stdClass();
    $pane->pid = 'new-663360a5-be91-4930-bb70-5daa2779cbf8';
    $pane->panel = 'half';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '663360a5-be91-4930-bb70-5daa2779cbf8';
    $display->content['new-663360a5-be91-4930-bb70-5daa2779cbf8'] = $pane;
    $display->panels['half'][1] = 'new-663360a5-be91-4930-bb70-5daa2779cbf8';
    $pane = new stdClass();
    $pane->pid = 'new-74878f9d-37f8-48b4-b046-f8223e901dee';
    $pane->panel = 'half';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_alert_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '74878f9d-37f8-48b4-b046-f8223e901dee';
    $display->content['new-74878f9d-37f8-48b4-b046-f8223e901dee'] = $pane;
    $display->panels['half'][2] = 'new-74878f9d-37f8-48b4-b046-f8223e901dee';
    $pane = new stdClass();
    $pane->pid = 'new-7c31a657-05c2-49bc-b2e4-35323eeb6ba1';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_alert_resolved';
    $pane->shown = TRUE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c31a657-05c2-49bc-b2e4-35323eeb6ba1';
    $display->content['new-7c31a657-05c2-49bc-b2e4-35323eeb6ba1'] = $pane;
    $display->panels['quarter1'][0] = 'new-7c31a657-05c2-49bc-b2e4-35323eeb6ba1';
    $pane = new stdClass();
    $pane->pid = 'new-dbdcba7a-5440-42a4-bd2d-8e68f6a2302e';
    $pane->panel = 'quarter1';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dbdcba7a-5440-42a4-bd2d-8e68f6a2302e';
    $display->content['new-dbdcba7a-5440-42a4-bd2d-8e68f6a2302e'] = $pane;
    $display->panels['quarter1'][1] = 'new-dbdcba7a-5440-42a4-bd2d-8e68f6a2302e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dbdcba7a-5440-42a4-bd2d-8e68f6a2302e';
  $panelizer->display = $display;
  $export['node:ol_alert:default:default'] = $panelizer;

  return $export;
}
