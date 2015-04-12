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
  $display->uuid = '2e707234-d46b-41e2-bae0-b8e4e94450b1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-79bc0ded-69be-4066-9bb8-35f083012d0a';
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
  $pane->uuid = '79bc0ded-69be-4066-9bb8-35f083012d0a';
  $display->content['new-79bc0ded-69be-4066-9bb8-35f083012d0a'] = $pane;
  $display->panels['center'][0] = 'new-79bc0ded-69be-4066-9bb8-35f083012d0a';
  $pane = new stdClass();
  $pane->pid = 'new-f396653c-2834-489c-8229-d7a594203e70';
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
  $pane->uuid = 'f396653c-2834-489c-8229-d7a594203e70';
  $display->content['new-f396653c-2834-489c-8229-d7a594203e70'] = $pane;
  $display->panels['center'][1] = 'new-f396653c-2834-489c-8229-d7a594203e70';
  $pane = new stdClass();
  $pane->pid = 'new-d31ec035-32bc-46bf-a53e-453e50a46eef';
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
  $pane->uuid = 'd31ec035-32bc-46bf-a53e-453e50a46eef';
  $display->content['new-d31ec035-32bc-46bf-a53e-453e50a46eef'] = $pane;
  $display->panels['center'][2] = 'new-d31ec035-32bc-46bf-a53e-453e50a46eef';
  $pane = new stdClass();
  $pane->pid = 'new-1d690cc8-00f9-4e66-9a76-25619b95f8c1';
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
  $pane->uuid = '1d690cc8-00f9-4e66-9a76-25619b95f8c1';
  $display->content['new-1d690cc8-00f9-4e66-9a76-25619b95f8c1'] = $pane;
  $display->panels['center'][3] = 'new-1d690cc8-00f9-4e66-9a76-25619b95f8c1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1d690cc8-00f9-4e66-9a76-25619b95f8c1';
  $panelizer->display = $display;
  $export['node:ol_reward_scheme:default'] = $panelizer;

  return $export;
}
