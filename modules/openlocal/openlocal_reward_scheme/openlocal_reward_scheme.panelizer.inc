<?php
/**
 * @file
 * openlocal_reward_scheme.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openlocal_reward_scheme_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_reward_scheme:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_reward_scheme';
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
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a7f2390f-1efb-4fbe-b3c3-361984e0d8d5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-370b18fb-69b6-40bc-9815-8cd060b540b9';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_description';
  $pane->shown = TRUE;
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '370b18fb-69b6-40bc-9815-8cd060b540b9';
  $display->content['new-370b18fb-69b6-40bc-9815-8cd060b540b9'] = $pane;
  $display->panels['center'][0] = 'new-370b18fb-69b6-40bc-9815-8cd060b540b9';
  $pane = new stdClass();
  $pane->pid = 'new-180fbde5-3a78-4e66-98bf-991187d873ad';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '180fbde5-3a78-4e66-98bf-991187d873ad';
  $display->content['new-180fbde5-3a78-4e66-98bf-991187d873ad'] = $pane;
  $display->panels['center'][1] = 'new-180fbde5-3a78-4e66-98bf-991187d873ad';
  $pane = new stdClass();
  $pane->pid = 'new-3a7bf4eb-b9d2-4d68-bcb3-e5680b82cca8';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ol_details';
  $pane->shown = TRUE;
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3a7bf4eb-b9d2-4d68-bcb3-e5680b82cca8';
  $display->content['new-3a7bf4eb-b9d2-4d68-bcb3-e5680b82cca8'] = $pane;
  $display->panels['center'][2] = 'new-3a7bf4eb-b9d2-4d68-bcb3-e5680b82cca8';
  $pane = new stdClass();
  $pane->pid = 'new-8c00b311-792f-4ef8-8a9f-3aee99a8f118';
  $pane->panel = 'center';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
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
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8c00b311-792f-4ef8-8a9f-3aee99a8f118';
  $display->content['new-8c00b311-792f-4ef8-8a9f-3aee99a8f118'] = $pane;
  $display->panels['center'][3] = 'new-8c00b311-792f-4ef8-8a9f-3aee99a8f118';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8c00b311-792f-4ef8-8a9f-3aee99a8f118';
  $panelizer->display = $display;
  $export['node:ol_reward_scheme:default'] = $panelizer;

  return $export;
}
