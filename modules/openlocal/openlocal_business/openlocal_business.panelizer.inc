<?php
/**
 * @file
 * openlocal_business.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openlocal_business_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_business:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_business';
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
    'panels_breadcrumbs_titles' => 'Services
%node:title',
    'panels_breadcrumbs_paths' => 'services',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_taylor';
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
  $display->uuid = '9897d244-02bf-46f7-817e-a973729a4ed2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-85d7fed9-9096-4126-97b1-8675843e2331';
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
    $pane->uuid = '85d7fed9-9096-4126-97b1-8675843e2331';
    $display->content['new-85d7fed9-9096-4126-97b1-8675843e2331'] = $pane;
    $display->panels['half'][0] = 'new-85d7fed9-9096-4126-97b1-8675843e2331';
    $pane = new stdClass();
    $pane->pid = 'new-3fe8ea0b-e74a-4dcc-8648-d0b78634bbb3';
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
    $pane->uuid = '3fe8ea0b-e74a-4dcc-8648-d0b78634bbb3';
    $display->content['new-3fe8ea0b-e74a-4dcc-8648-d0b78634bbb3'] = $pane;
    $display->panels['half'][1] = 'new-3fe8ea0b-e74a-4dcc-8648-d0b78634bbb3';
    $pane = new stdClass();
    $pane->pid = 'new-eb8dd25b-a7d3-4012-b4ac-dccfdb31bb23';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eb8dd25b-a7d3-4012-b4ac-dccfdb31bb23';
    $display->content['new-eb8dd25b-a7d3-4012-b4ac-dccfdb31bb23'] = $pane;
    $display->panels['half'][2] = 'new-eb8dd25b-a7d3-4012-b4ac-dccfdb31bb23';
    $pane = new stdClass();
    $pane->pid = 'new-44f02cce-5b47-45d9-aea4-a9a9edd250f2';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '44f02cce-5b47-45d9-aea4-a9a9edd250f2';
    $display->content['new-44f02cce-5b47-45d9-aea4-a9a9edd250f2'] = $pane;
    $display->panels['half'][3] = 'new-44f02cce-5b47-45d9-aea4-a9a9edd250f2';
    $pane = new stdClass();
    $pane->pid = 'new-133b44f4-fc62-4527-a0e4-9705c3ece5fa';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_geolocation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'geofield_leaflet',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'data' => 'full',
        'leaflet_map' => 'OSM Mapnik',
        'height' => '200',
        'popup' => array(
          'show' => 0,
          'text' => '',
        ),
        'zoom' => array(
          'initialZoom' => '16',
          'minZoom' => '12',
          'maxZoom' => '17',
        ),
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
    $pane->uuid = '133b44f4-fc62-4527-a0e4-9705c3ece5fa';
    $display->content['new-133b44f4-fc62-4527-a0e4-9705c3ece5fa'] = $pane;
    $display->panels['quarter1'][0] = 'new-133b44f4-fc62-4527-a0e4-9705c3ece5fa';
    $pane = new stdClass();
    $pane->pid = 'new-51b62efe-f192-429f-b87a-82445651bfd0';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_business_category';
    $pane->shown = TRUE;
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '51b62efe-f192-429f-b87a-82445651bfd0';
    $display->content['new-51b62efe-f192-429f-b87a-82445651bfd0'] = $pane;
    $display->panels['quarter1'][1] = 'new-51b62efe-f192-429f-b87a-82445651bfd0';
    $pane = new stdClass();
    $pane->pid = 'new-412ea825-9d32-4831-a67b-e692b3d6c01e';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_business_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '412ea825-9d32-4831-a67b-e692b3d6c01e';
    $display->content['new-412ea825-9d32-4831-a67b-e692b3d6c01e'] = $pane;
    $display->panels['quarter1'][2] = 'new-412ea825-9d32-4831-a67b-e692b3d6c01e';
    $pane = new stdClass();
    $pane->pid = 'new-b4e467e0-f2dc-4b42-9d9c-2d326d1fd9f5';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_business_telephone';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b4e467e0-f2dc-4b42-9d9c-2d326d1fd9f5';
    $display->content['new-b4e467e0-f2dc-4b42-9d9c-2d326d1fd9f5'] = $pane;
    $display->panels['quarter1'][3] = 'new-b4e467e0-f2dc-4b42-9d9c-2d326d1fd9f5';
    $pane = new stdClass();
    $pane->pid = 'new-740972b4-63fc-450b-8b77-a30aa3214d01';
    $pane->panel = 'quarter1';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '740972b4-63fc-450b-8b77-a30aa3214d01';
    $display->content['new-740972b4-63fc-450b-8b77-a30aa3214d01'] = $pane;
    $display->panels['quarter1'][4] = 'new-740972b4-63fc-450b-8b77-a30aa3214d01';
    $pane = new stdClass();
    $pane->pid = 'new-2736c315-4eba-4685-b560-6a9b2dbfa5b5';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_business_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'email_contact',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2736c315-4eba-4685-b560-6a9b2dbfa5b5';
    $display->content['new-2736c315-4eba-4685-b560-6a9b2dbfa5b5'] = $pane;
    $display->panels['quarter1'][5] = 'new-2736c315-4eba-4685-b560-6a9b2dbfa5b5';
    $pane = new stdClass();
    $pane->pid = 'new-61619e12-85ee-48bb-9a77-246670ee494f';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_business_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '61619e12-85ee-48bb-9a77-246670ee494f';
    $display->content['new-61619e12-85ee-48bb-9a77-246670ee494f'] = $pane;
    $display->panels['quarter1'][6] = 'new-61619e12-85ee-48bb-9a77-246670ee494f';
    $pane = new stdClass();
    $pane->pid = 'new-2cd59e12-abc7-4249-a295-eb79fe373ce1';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_business_twitter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'twitterfield_twitter_link',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '2cd59e12-abc7-4249-a295-eb79fe373ce1';
    $display->content['new-2cd59e12-abc7-4249-a295-eb79fe373ce1'] = $pane;
    $display->panels['quarter1'][7] = 'new-2cd59e12-abc7-4249-a295-eb79fe373ce1';
    $pane = new stdClass();
    $pane->pid = 'new-6cf20e51-be2a-4e4e-b91b-93f3a6b0e3ef';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_business_facebook';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '6cf20e51-be2a-4e4e-b91b-93f3a6b0e3ef';
    $display->content['new-6cf20e51-be2a-4e4e-b91b-93f3a6b0e3ef'] = $pane;
    $display->panels['quarter1'][8] = 'new-6cf20e51-be2a-4e4e-b91b-93f3a6b0e3ef';
    $pane = new stdClass();
    $pane->pid = 'new-0dd6e0cf-a1d0-4de1-b120-e3b1008c29da';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '0dd6e0cf-a1d0-4de1-b120-e3b1008c29da';
    $display->content['new-0dd6e0cf-a1d0-4de1-b120-e3b1008c29da'] = $pane;
    $display->panels['quarter1'][9] = 'new-0dd6e0cf-a1d0-4de1-b120-e3b1008c29da';
    $pane = new stdClass();
    $pane->pid = 'new-0958fde4-02eb-43e2-9293-0d3a2bd2f705';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_business_opening_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'office_hours',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'daysformat' => 'long',
        'hoursformat' => 0,
        'compress' => FALSE,
        'grouped' => FALSE,
        'showclosed' => 'all',
        'closedformat' => 'Closed',
        'separator_days' => '<br />',
        'separator_grouped_days' => ' - ',
        'separator_day_hours' => ': ',
        'separator_hours_hours' => '-',
        'separator_more_hours' => ', ',
        'current_status' => array(
          'position' => 'hide',
          'open_text' => 'Currently open!',
          'closed_text' => 'Currently closed',
        ),
        'timezone_field' => '',
        'date_first_day' => '0',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '0958fde4-02eb-43e2-9293-0d3a2bd2f705';
    $display->content['new-0958fde4-02eb-43e2-9293-0d3a2bd2f705'] = $pane;
    $display->panels['quarter1'][10] = 'new-0958fde4-02eb-43e2-9293-0d3a2bd2f705';
    $pane = new stdClass();
    $pane->pid = 'new-dc0fb144-690b-4599-b08f-e302d2d5b3eb';
    $pane->panel = 'quarter2';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
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
    $pane->uuid = 'dc0fb144-690b-4599-b08f-e302d2d5b3eb';
    $display->content['new-dc0fb144-690b-4599-b08f-e302d2d5b3eb'] = $pane;
    $display->panels['quarter2'][0] = 'new-dc0fb144-690b-4599-b08f-e302d2d5b3eb';
    $pane = new stdClass();
    $pane->pid = 'new-293e6719-4f29-441c-a100-f59cc656853c';
    $pane->panel = 'quarter2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_business_promotions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => '',
        'delete' => '',
        'add' => '',
        'description' => 0,
        'view_mode' => 'full',
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
    $pane->uuid = '293e6719-4f29-441c-a100-f59cc656853c';
    $display->content['new-293e6719-4f29-441c-a100-f59cc656853c'] = $pane;
    $display->panels['quarter2'][1] = 'new-293e6719-4f29-441c-a100-f59cc656853c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-44f02cce-5b47-45d9-aea4-a9a9edd250f2';
  $panelizer->display = $display;
  $export['node:ol_business:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:ol_reward_scheme:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'ol_reward_scheme';
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
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_harris';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4cc718fe-22c1-4ace-ae74-23d9198c70ee';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d3bde9c9-588d-4736-94c6-68f389c8bd5f';
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
        'image_link' => '',
        'image_style' => 'openlocal_panel_deep',
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
    $pane->uuid = 'd3bde9c9-588d-4736-94c6-68f389c8bd5f';
    $display->content['new-d3bde9c9-588d-4736-94c6-68f389c8bd5f'] = $pane;
    $display->panels['column1'][0] = 'new-d3bde9c9-588d-4736-94c6-68f389c8bd5f';
    $pane = new stdClass();
    $pane->pid = 'new-eec22d6a-fae9-4a37-940e-211f98728af1';
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
    $pane->uuid = 'eec22d6a-fae9-4a37-940e-211f98728af1';
    $display->content['new-eec22d6a-fae9-4a37-940e-211f98728af1'] = $pane;
    $display->panels['column1'][1] = 'new-eec22d6a-fae9-4a37-940e-211f98728af1';
    $pane = new stdClass();
    $pane->pid = 'new-94efcd4b-14f9-41d6-8748-635d88a5c226';
    $pane->panel = 'column1';
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
    $pane->uuid = '94efcd4b-14f9-41d6-8748-635d88a5c226';
    $display->content['new-94efcd4b-14f9-41d6-8748-635d88a5c226'] = $pane;
    $display->panels['column1'][2] = 'new-94efcd4b-14f9-41d6-8748-635d88a5c226';
    $pane = new stdClass();
    $pane->pid = 'new-be64cb12-d40b-4a0f-b13e-c60f80f6038b';
    $pane->panel = 'column2';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
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
    $pane->uuid = 'be64cb12-d40b-4a0f-b13e-c60f80f6038b';
    $display->content['new-be64cb12-d40b-4a0f-b13e-c60f80f6038b'] = $pane;
    $display->panels['column2'][0] = 'new-be64cb12-d40b-4a0f-b13e-c60f80f6038b';
    $pane = new stdClass();
    $pane->pid = 'new-947720bb-ef77-43e3-8894-7ca62f9fecd4';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_business_promotions-panel_pane_1';
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
    $pane->uuid = '947720bb-ef77-43e3-8894-7ca62f9fecd4';
    $display->content['new-947720bb-ef77-43e3-8894-7ca62f9fecd4'] = $pane;
    $display->panels['contentmain'][0] = 'new-947720bb-ef77-43e3-8894-7ca62f9fecd4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:ol_reward_scheme:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:ol_business_category:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'ol_business_category';
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
    'panels_breadcrumbs_titles' => 'Services
Categories
%taxonomy_term:name',
    'panels_breadcrumbs_paths' => 'services
services/categories',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = '43eee9f2-1ddc-48f4-aa09-9a46fb65949c';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:ol_business_category:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:ol_business_tags:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'ol_business_tags';
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
    'panels_breadcrumbs_titles' => 'Services
Tags
%taxonomy_term:name',
    'panels_breadcrumbs_paths' => 'services
services/tags
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b2ac37c7-e326-4f22-9209-eab17a21bbb9';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:ol_business_tags:default'] = $panelizer;

  return $export;
}
