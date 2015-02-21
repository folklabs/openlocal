<?php
/**
 * @file
 * openlocal_group.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openlocal_group_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_group:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_group';
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
    'panels_breadcrumbs_titles' => 'Groups
%node:title',
    'panels_breadcrumbs_paths' => 'groups',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_harris';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'slider' => NULL,
      'slidergutter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'footercolumn1' => NULL,
      'footercolumn2' => NULL,
      'footercolumn3' => NULL,
      'sidebar' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'header' => NULL,
      'half' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
      'footer' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7d8bea90-4ec8-4072-b460-d962c531dd3f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8f641073-b834-4195-9ee3-5a5886c5c205';
    $pane->panel = 'column1';
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
    $pane->uuid = '8f641073-b834-4195-9ee3-5a5886c5c205';
    $display->content['new-8f641073-b834-4195-9ee3-5a5886c5c205'] = $pane;
    $display->panels['column1'][0] = 'new-8f641073-b834-4195-9ee3-5a5886c5c205';
    $pane = new stdClass();
    $pane->pid = 'new-54285e94-408a-485e-afc1-166f1fbeccce';
    $pane->panel = 'column1';
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
    $pane->uuid = '54285e94-408a-485e-afc1-166f1fbeccce';
    $display->content['new-54285e94-408a-485e-afc1-166f1fbeccce'] = $pane;
    $display->panels['column1'][1] = 'new-54285e94-408a-485e-afc1-166f1fbeccce';
    $pane = new stdClass();
    $pane->pid = 'new-ad8b5d29-848a-498a-9583-91e57301e9de';
    $pane->panel = 'column1';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ad8b5d29-848a-498a-9583-91e57301e9de';
    $display->content['new-ad8b5d29-848a-498a-9583-91e57301e9de'] = $pane;
    $display->panels['column1'][2] = 'new-ad8b5d29-848a-498a-9583-91e57301e9de';
    $pane = new stdClass();
    $pane->pid = 'new-5855344c-43c9-4b23-b8c7-792e36fa92e2';
    $pane->panel = 'column1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          0 => 'address',
        ),
      ),
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
    $pane->uuid = '5855344c-43c9-4b23-b8c7-792e36fa92e2';
    $display->content['new-5855344c-43c9-4b23-b8c7-792e36fa92e2'] = $pane;
    $display->panels['column1'][3] = 'new-5855344c-43c9-4b23-b8c7-792e36fa92e2';
    $pane = new stdClass();
    $pane->pid = 'new-295dfb87-c9de-4da6-b6b1-fc0929763043';
    $pane->panel = 'column1';
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
    $pane->uuid = '295dfb87-c9de-4da6-b6b1-fc0929763043';
    $display->content['new-295dfb87-c9de-4da6-b6b1-fc0929763043'] = $pane;
    $display->panels['column1'][4] = 'new-295dfb87-c9de-4da6-b6b1-fc0929763043';
    $pane = new stdClass();
    $pane->pid = 'new-0a407742-ccf6-4b8b-90cd-5f838b49ed17';
    $pane->panel = 'column2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => '0',
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
    $pane->uuid = '0a407742-ccf6-4b8b-90cd-5f838b49ed17';
    $display->content['new-0a407742-ccf6-4b8b-90cd-5f838b49ed17'] = $pane;
    $display->panels['column2'][0] = 'new-0a407742-ccf6-4b8b-90cd-5f838b49ed17';
    $pane = new stdClass();
    $pane->pid = 'new-afbc0a72-d039-4d7f-a472-cdbcba8b9192';
    $pane->panel = 'column2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OL Group content actions',
      'title' => '',
      'body' => '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/ol-event"><span class="ol-action-span"><i class="fa fa-plus"></i> add event</span></a>
</div>
<div class="ol-action-button">
<a href="/node/add/ol-group-post"><span class="ol-action-span"><i class="fa fa-plus"></i> add group post</span></a>
</div>
<div class="ol-action-button">
<a href="/node/add/ol-gallery"><span class="ol-action-span"><i class="fa fa-plus"></i> add gallery</span></a>
</div>

<div>
<a href="/contextual_help/about-groups" class="ol-action-help"><i class="fa fa-question-circle"></i> About groups</a>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'afbc0a72-d039-4d7f-a472-cdbcba8b9192';
    $display->content['new-afbc0a72-d039-4d7f-a472-cdbcba8b9192'] = $pane;
    $display->panels['column2'][1] = 'new-afbc0a72-d039-4d7f-a472-cdbcba8b9192';
    $pane = new stdClass();
    $pane->pid = 'new-494419ea-8f35-4678-879a-8e9fb97b5e34';
    $pane->panel = 'column2';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(),
      'field_name' => 'og_group_ref',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '494419ea-8f35-4678-879a-8e9fb97b5e34';
    $display->content['new-494419ea-8f35-4678-879a-8e9fb97b5e34'] = $pane;
    $display->panels['column2'][2] = 'new-494419ea-8f35-4678-879a-8e9fb97b5e34';
    $pane = new stdClass();
    $pane->pid = 'new-382e7ffd-893d-4476-abe9-d1b28551e9f1';
    $pane->panel = 'column2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_group_coordinators';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'user_reference_default',
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
    $pane->uuid = '382e7ffd-893d-4476-abe9-d1b28551e9f1';
    $display->content['new-382e7ffd-893d-4476-abe9-d1b28551e9f1'] = $pane;
    $display->panels['column2'][3] = 'new-382e7ffd-893d-4476-abe9-d1b28551e9f1';
    $pane = new stdClass();
    $pane->pid = 'new-c4de8c61-d4eb-4f0b-bc11-d8ba209027d3';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_members-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => 'Members',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c4de8c61-d4eb-4f0b-bc11-d8ba209027d3';
    $display->content['new-c4de8c61-d4eb-4f0b-bc11-d8ba209027d3'] = $pane;
    $display->panels['column2'][4] = 'new-c4de8c61-d4eb-4f0b-bc11-d8ba209027d3';
    $pane = new stdClass();
    $pane->pid = 'new-b957c697-40ce-4fad-b4cf-8cbfbe5edccc';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_group_content-panel_pane_2';
    $pane->shown = FALSE;
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
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b957c697-40ce-4fad-b4cf-8cbfbe5edccc';
    $display->content['new-b957c697-40ce-4fad-b4cf-8cbfbe5edccc'] = $pane;
    $display->panels['column2'][5] = 'new-b957c697-40ce-4fad-b4cf-8cbfbe5edccc';
    $pane = new stdClass();
    $pane->pid = 'new-dde37050-7669-40db-8aea-e2c13ca584a0';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_group_content-panel_pane_3';
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
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'dde37050-7669-40db-8aea-e2c13ca584a0';
    $display->content['new-dde37050-7669-40db-8aea-e2c13ca584a0'] = $pane;
    $display->panels['column2'][6] = 'new-dde37050-7669-40db-8aea-e2c13ca584a0';
    $pane = new stdClass();
    $pane->pid = 'new-0e37bee6-99df-4b17-b17d-200cc58872cd';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_group_content-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '20',
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Updates',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0e37bee6-99df-4b17-b17d-200cc58872cd';
    $display->content['new-0e37bee6-99df-4b17-b17d-200cc58872cd'] = $pane;
    $display->panels['contentmain'][0] = 'new-0e37bee6-99df-4b17-b17d-200cc58872cd';
    $pane = new stdClass();
    $pane->pid = 'new-56860236-9bc4-4a6d-81ef-9c082e09f705';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_nodes-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
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
    $pane->uuid = '56860236-9bc4-4a6d-81ef-9c082e09f705';
    $display->content['new-56860236-9bc4-4a6d-81ef-9c082e09f705'] = $pane;
    $display->panels['contentmain'][1] = 'new-56860236-9bc4-4a6d-81ef-9c082e09f705';
    $pane = new stdClass();
    $pane->pid = 'new-03b66fa2-63ae-4b77-9933-1f49720de2a9';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_group_content-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'exposed' => array(
        'widget_title' => '',
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => '',
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
    $pane->uuid = '03b66fa2-63ae-4b77-9933-1f49720de2a9';
    $display->content['new-03b66fa2-63ae-4b77-9933-1f49720de2a9'] = $pane;
    $display->panels['contentmain'][2] = 'new-03b66fa2-63ae-4b77-9933-1f49720de2a9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-295dfb87-c9de-4da6-b6b1-fc0929763043';
  $panelizer->display = $display;
  $export['node:ol_group:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_group_post:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_group_post';
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
    'panels_breadcrumbs_titles' => 'Groups
%node:group-group
Posts
%node:title',
    'panels_breadcrumbs_paths' => 'groups
',
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
  $display->uuid = 'cc761c7c-6a55-4a17-a506-77d5843b50c0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-01114245-9875-4ba5-93cd-88af7797b615';
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
        'image_style' => 'openlocal_node_main',
        'image_link' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '01114245-9875-4ba5-93cd-88af7797b615';
    $display->content['new-01114245-9875-4ba5-93cd-88af7797b615'] = $pane;
    $display->panels['half'][0] = 'new-01114245-9875-4ba5-93cd-88af7797b615';
    $pane = new stdClass();
    $pane->pid = 'new-815563e3-cba9-45a1-af3d-538a4f5fb004';
    $pane->panel = 'half';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '815563e3-cba9-45a1-af3d-538a4f5fb004';
    $display->content['new-815563e3-cba9-45a1-af3d-538a4f5fb004'] = $pane;
    $display->panels['half'][1] = 'new-815563e3-cba9-45a1-af3d-538a4f5fb004';
    $pane = new stdClass();
    $pane->pid = 'new-e05fbc50-0ccc-445c-bfdb-10a4198a8f60';
    $pane->panel = 'half';
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
    $pane->uuid = 'e05fbc50-0ccc-445c-bfdb-10a4198a8f60';
    $display->content['new-e05fbc50-0ccc-445c-bfdb-10a4198a8f60'] = $pane;
    $display->panels['half'][2] = 'new-e05fbc50-0ccc-445c-bfdb-10a4198a8f60';
    $pane = new stdClass();
    $pane->pid = 'new-4f81032f-864a-441c-9de4-113fa6992046';
    $pane->panel = 'quarter1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4f81032f-864a-441c-9de4-113fa6992046';
    $display->content['new-4f81032f-864a-441c-9de4-113fa6992046'] = $pane;
    $display->panels['quarter1'][0] = 'new-4f81032f-864a-441c-9de4-113fa6992046';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e05fbc50-0ccc-445c-bfdb-10a4198a8f60';
  $panelizer->display = $display;
  $export['node:ol_group_post:default'] = $panelizer;

  return $export;
}
