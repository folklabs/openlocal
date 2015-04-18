<?php
/**
 * @file
 * openlocal_organisation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openlocal_organisation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openlocal_organisation';
  $view->description = 'Local organisation views.';
  $view->tag = 'openlocal';
  $view->base_table = 'node';
  $view->human_name = 'OpenLocal Organisation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_ol_description']['id'] = 'field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['table'] = 'field_data_field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['field'] = 'field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['label'] = '';
  $handler->display->display_options['fields']['field_ol_description']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ol_organisation_category']['id'] = 'field_ol_organisation_category';
  $handler->display->display_options['fields']['field_ol_organisation_category']['table'] = 'field_data_field_ol_organisation_category';
  $handler->display->display_options['fields']['field_ol_organisation_category']['field'] = 'field_ol_organisation_category';
  $handler->display->display_options['fields']['field_ol_organisation_category']['label'] = '';
  $handler->display->display_options['fields']['field_ol_organisation_category']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ol_organisation' => 'ol_organisation',
  );

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'openlocal_panel_shallow',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_ol_description']['id'] = 'field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['table'] = 'field_data_field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['field'] = 'field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['label'] = '';
  $handler->display->display_options['fields']['field_ol_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ol_description']['element_label_colon'] = FALSE;
  /* Field: Content: Categories */
  $handler->display->display_options['fields']['field_featured_categories']['id'] = 'field_featured_categories';
  $handler->display->display_options['fields']['field_featured_categories']['table'] = 'field_data_field_featured_categories';
  $handler->display->display_options['fields']['field_featured_categories']['field'] = 'field_featured_categories';
  $handler->display->display_options['fields']['field_featured_categories']['label'] = '';
  $handler->display->display_options['fields']['field_featured_categories']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_categories']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ol-grid-teaser">
<div class="views-field ol-grid-teaser-title">[title]</div>
<div>[field_featured_image]</div>
<div class="views-field">[field_ol_description]</div>
<div class="views-field ol-grid-teaser-categories">[field_featured_categories]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'ol_organisation_category' => 'ol_organisation_category',
  );
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'token.current-page:url',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Map */
  $handler = $view->new_display('panel_pane', 'Map', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_ol_geolocation';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = '#rendered_entity';
  $handler->display->display_options['style_options']['view_mode'] = 'teaser';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_ol_description']['id'] = 'field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['table'] = 'field_data_field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['field'] = 'field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['label'] = '';
  $handler->display->display_options['fields']['field_ol_description']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ol_organisation_category']['id'] = 'field_ol_organisation_category';
  $handler->display->display_options['fields']['field_ol_organisation_category']['table'] = 'field_data_field_ol_organisation_category';
  $handler->display->display_options['fields']['field_ol_organisation_category']['field'] = 'field_ol_organisation_category';
  $handler->display->display_options['fields']['field_ol_organisation_category']['label'] = '';
  $handler->display->display_options['fields']['field_ol_organisation_category']['element_label_colon'] = FALSE;
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_ol_geolocation']['id'] = 'field_ol_geolocation';
  $handler->display->display_options['fields']['field_ol_geolocation']['table'] = 'field_data_field_ol_geolocation';
  $handler->display->display_options['fields']['field_ol_geolocation']['field'] = 'field_ol_geolocation';
  $handler->display->display_options['fields']['field_ol_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_ol_geolocation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ol_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ol_geolocation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ol_geolocation']['type'] = 'geofield_geojson';
  $handler->display->display_options['fields']['field_ol_geolocation']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ol_organisation' => 'ol_organisation',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['openlocal_organisation'] = $view;

  return $export;
}
