<?php
/**
 * @file
 * openlocal_event.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openlocal_event_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_event';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Events
%node:title',
    'panels_breadcrumbs_paths' => 'events',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_taylor';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'half' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '026d20c7-1f36-4db2-bb19-bd7112461a27';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-254b92f1-bd46-4dfc-98d3-011dbfadbdab';
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
        'image_style' => '',
        'image_link' => '',
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '254b92f1-bd46-4dfc-98d3-011dbfadbdab';
    $display->content['new-254b92f1-bd46-4dfc-98d3-011dbfadbdab'] = $pane;
    $display->panels['half'][0] = 'new-254b92f1-bd46-4dfc-98d3-011dbfadbdab';
    $pane = new stdClass();
    $pane->pid = 'new-b84a4adf-6fbe-4fde-9e23-a07f76c976ae';
    $pane->panel = 'half';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_details';
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
    $pane->uuid = 'b84a4adf-6fbe-4fde-9e23-a07f76c976ae';
    $display->content['new-b84a4adf-6fbe-4fde-9e23-a07f76c976ae'] = $pane;
    $display->panels['half'][1] = 'new-b84a4adf-6fbe-4fde-9e23-a07f76c976ae';
    $pane = new stdClass();
    $pane->pid = 'new-b0af6da4-6d2f-4e1f-b743-cec0ad4cba78';
    $pane->panel = 'half';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b0af6da4-6d2f-4e1f-b743-cec0ad4cba78';
    $display->content['new-b0af6da4-6d2f-4e1f-b743-cec0ad4cba78'] = $pane;
    $display->panels['half'][2] = 'new-b0af6da4-6d2f-4e1f-b743-cec0ad4cba78';
    $pane = new stdClass();
    $pane->pid = 'new-7b457e8c-1612-4590-9bc3-8a3d7e1ab2c4';
    $pane->panel = 'half';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7b457e8c-1612-4590-9bc3-8a3d7e1ab2c4';
    $display->content['new-7b457e8c-1612-4590-9bc3-8a3d7e1ab2c4'] = $pane;
    $display->panels['half'][3] = 'new-7b457e8c-1612-4590-9bc3-8a3d7e1ab2c4';
    $pane = new stdClass();
    $pane->pid = 'new-75d83da0-6711-4492-8f9e-1541f0e3312b';
    $pane->panel = 'half';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '75d83da0-6711-4492-8f9e-1541f0e3312b';
    $display->content['new-75d83da0-6711-4492-8f9e-1541f0e3312b'] = $pane;
    $display->panels['half'][4] = 'new-75d83da0-6711-4492-8f9e-1541f0e3312b';
    $pane = new stdClass();
    $pane->pid = 'new-0740d8ac-8149-45d5-85d4-a3001eac3f78';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_event_venue_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
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
    $pane->uuid = '0740d8ac-8149-45d5-85d4-a3001eac3f78';
    $display->content['new-0740d8ac-8149-45d5-85d4-a3001eac3f78'] = $pane;
    $display->panels['quarter1'][0] = 'new-0740d8ac-8149-45d5-85d4-a3001eac3f78';
    $pane = new stdClass();
    $pane->pid = 'new-8cf90e7a-7f2e-4391-9586-e009b9e834cf';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'short',
        'multiple_number' => '1',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'hide',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8cf90e7a-7f2e-4391-9586-e009b9e834cf';
    $display->content['new-8cf90e7a-7f2e-4391-9586-e009b9e834cf'] = $pane;
    $display->panels['quarter1'][1] = 'new-8cf90e7a-7f2e-4391-9586-e009b9e834cf';
    $pane = new stdClass();
    $pane->pid = 'new-40db2545-ce7a-4615-92dd-a9abe292ffde';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_event_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'email_contact',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '40db2545-ce7a-4615-92dd-a9abe292ffde';
    $display->content['new-40db2545-ce7a-4615-92dd-a9abe292ffde'] = $pane;
    $display->panels['quarter1'][2] = 'new-40db2545-ce7a-4615-92dd-a9abe292ffde';
    $pane = new stdClass();
    $pane->pid = 'new-4dbfdf33-f547-44e0-8f9d-803f8935692b';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_event_contact_telephone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4dbfdf33-f547-44e0-8f9d-803f8935692b';
    $display->content['new-4dbfdf33-f547-44e0-8f9d-803f8935692b'] = $pane;
    $display->panels['quarter1'][3] = 'new-4dbfdf33-f547-44e0-8f9d-803f8935692b';
    $pane = new stdClass();
    $pane->pid = 'new-7c35bdb8-2bf3-4aa3-b659-c88105e3b999';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '7c35bdb8-2bf3-4aa3-b659-c88105e3b999';
    $display->content['new-7c35bdb8-2bf3-4aa3-b659-c88105e3b999'] = $pane;
    $display->panels['quarter1'][4] = 'new-7c35bdb8-2bf3-4aa3-b659-c88105e3b999';
    $pane = new stdClass();
    $pane->pid = 'new-a6bf1dff-96c1-4567-aba2-f47e8f22ff31';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Group',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a6bf1dff-96c1-4567-aba2-f47e8f22ff31';
    $display->content['new-a6bf1dff-96c1-4567-aba2-f47e8f22ff31'] = $pane;
    $display->panels['quarter1'][5] = 'new-a6bf1dff-96c1-4567-aba2-f47e8f22ff31';
    $pane = new stdClass();
    $pane->pid = 'new-7a142de8-fd9d-4cfe-9d87-e229907a924b';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_location_properties';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '7a142de8-fd9d-4cfe-9d87-e229907a924b';
    $display->content['new-7a142de8-fd9d-4cfe-9d87-e229907a924b'] = $pane;
    $display->panels['quarter1'][6] = 'new-7a142de8-fd9d-4cfe-9d87-e229907a924b';
    $pane = new stdClass();
    $pane->pid = 'new-f6d2c926-9bdc-4d8b-a992-e60f96d012eb';
    $pane->panel = 'quarter2';
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
    $pane->uuid = 'f6d2c926-9bdc-4d8b-a992-e60f96d012eb';
    $display->content['new-f6d2c926-9bdc-4d8b-a992-e60f96d012eb'] = $pane;
    $display->panels['quarter2'][0] = 'new-f6d2c926-9bdc-4d8b-a992-e60f96d012eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:ol_event:default'] = $panelizer;

  return $export;
}
