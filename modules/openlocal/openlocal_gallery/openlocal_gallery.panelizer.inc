<?php
/**
 * @file
 * openlocal_gallery.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openlocal_gallery_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_gallery:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_gallery';
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
    'panels_breadcrumbs_titles' => 'Galleries
%node:title',
    'panels_breadcrumbs_paths' => 'galleries',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_bryant_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7b3c3b9f-db1b-4d21-95e2-e44b83a34c4a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-812e47ed-ff5d-4f46-a1bd-1bb7aeb44a03';
    $pane->panel = 'contentmain';
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
    $pane->uuid = '812e47ed-ff5d-4f46-a1bd-1bb7aeb44a03';
    $display->content['new-812e47ed-ff5d-4f46-a1bd-1bb7aeb44a03'] = $pane;
    $display->panels['contentmain'][0] = 'new-812e47ed-ff5d-4f46-a1bd-1bb7aeb44a03';
    $pane = new stdClass();
    $pane->pid = 'new-40784ea4-abb9-4486-a5d1-905b2aab1268';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_photo_album-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '40784ea4-abb9-4486-a5d1-905b2aab1268';
    $display->content['new-40784ea4-abb9-4486-a5d1-905b2aab1268'] = $pane;
    $display->panels['contentmain'][1] = 'new-40784ea4-abb9-4486-a5d1-905b2aab1268';
    $pane = new stdClass();
    $pane->pid = 'new-ddb96cbc-f2e9-4654-9f22-c94f4905126f';
    $pane->panel = 'contentmain';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ddb96cbc-f2e9-4654-9f22-c94f4905126f';
    $display->content['new-ddb96cbc-f2e9-4654-9f22-c94f4905126f'] = $pane;
    $display->panels['contentmain'][2] = 'new-ddb96cbc-f2e9-4654-9f22-c94f4905126f';
    $pane = new stdClass();
    $pane->pid = 'new-5c40bc87-2134-412a-aa2c-89fd3de09b23';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OL Gallery actions',
      'title' => '',
      'body' => '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/ol-photo-album?field_ol_gallery_ref=﻿﻿%node:nid"><span class="ol-action-span"><i class="fa fa-plus"></i> add photos</span></a>
</div>
Please select this gallery when creating the new photo album.

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
    $pane->uuid = '5c40bc87-2134-412a-aa2c-89fd3de09b23';
    $display->content['new-5c40bc87-2134-412a-aa2c-89fd3de09b23'] = $pane;
    $display->panels['sidebar'][0] = 'new-5c40bc87-2134-412a-aa2c-89fd3de09b23';
    $pane = new stdClass();
    $pane->pid = 'new-f96c6517-cae7-471c-9736-478c180a8a90';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_list_default',
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
    $pane->uuid = 'f96c6517-cae7-471c-9736-478c180a8a90';
    $display->content['new-f96c6517-cae7-471c-9736-478c180a8a90'] = $pane;
    $display->panels['sidebar'][1] = 'new-f96c6517-cae7-471c-9736-478c180a8a90';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ddb96cbc-f2e9-4654-9f22-c94f4905126f';
  $panelizer->display = $display;
  $export['node:ol_gallery:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_photo_album:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_photo_album';
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
    'panels_breadcrumbs_titles' => 'Galleries
Photo albums
%node:title',
    'panels_breadcrumbs_paths' => 'galleries',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '653bc327-74fa-4821-904b-3452bb968570';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f253e46a-71bf-4def-98d0-a2ff36150641';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_credits';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f253e46a-71bf-4def-98d0-a2ff36150641';
    $display->content['new-f253e46a-71bf-4def-98d0-a2ff36150641'] = $pane;
    $display->panels['center'][0] = 'new-f253e46a-71bf-4def-98d0-a2ff36150641';
    $pane = new stdClass();
    $pane->pid = 'new-f0f11b94-7da5-4a01-abba-5fd0e85bd54e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'colorbox',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
        'colorbox_node_style' => 'openlocal_panel_deep',
        'colorbox_node_style_first' => '',
        'colorbox_image_style' => '',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
      ),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f0f11b94-7da5-4a01-abba-5fd0e85bd54e';
    $display->content['new-f0f11b94-7da5-4a01-abba-5fd0e85bd54e'] = $pane;
    $display->panels['center'][1] = 'new-f0f11b94-7da5-4a01-abba-5fd0e85bd54e';
    $pane = new stdClass();
    $pane->pid = 'new-0a35ae91-23aa-4e02-bbdf-38ff0ff98221';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Gallery link',
      'title' => '',
      'body' => '<div class="field field-name-field-ol-credits field-type-text field-label-inline clearfix">
<div class="field-label">Gallery:&nbsp;</div>
<div class="field-items"><div class="field-item even"><a href="/galleries/%node:field-ol-gallery-ref">%node:field-ol-gallery-ref</a></div>
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0a35ae91-23aa-4e02-bbdf-38ff0ff98221';
    $display->content['new-0a35ae91-23aa-4e02-bbdf-38ff0ff98221'] = $pane;
    $display->panels['center'][2] = 'new-0a35ae91-23aa-4e02-bbdf-38ff0ff98221';
    $pane = new stdClass();
    $pane->pid = 'new-8b57ee87-b476-4790-830b-8e9d70b1f5f4';
    $pane->panel = 'center';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
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
    $pane->uuid = '8b57ee87-b476-4790-830b-8e9d70b1f5f4';
    $display->content['new-8b57ee87-b476-4790-830b-8e9d70b1f5f4'] = $pane;
    $display->panels['center'][3] = 'new-8b57ee87-b476-4790-830b-8e9d70b1f5f4';
    $pane = new stdClass();
    $pane->pid = 'new-614d0b4e-64ec-4d54-adcf-ce4b677e0793';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '614d0b4e-64ec-4d54-adcf-ce4b677e0793';
    $display->content['new-614d0b4e-64ec-4d54-adcf-ce4b677e0793'] = $pane;
    $display->panels['center'][4] = 'new-614d0b4e-64ec-4d54-adcf-ce4b677e0793';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f253e46a-71bf-4def-98d0-a2ff36150641';
  $panelizer->display = $display;
  $export['node:ol_photo_album:default'] = $panelizer;

  return $export;
}
