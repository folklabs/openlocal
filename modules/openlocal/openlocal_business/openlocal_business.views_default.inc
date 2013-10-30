<?php
/**
 * @file
 * openlocal_business.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openlocal_business_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openlocal_business';
  $view->description = 'Local business views.';
  $view->tag = 'local';
  $view->base_table = 'node';
  $view->human_name = 'OpenLocal Business';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Promotions (field_ol_business_promotions) */
  $handler->display->display_options['relationships']['field_ol_business_promotions_value']['id'] = 'field_ol_business_promotions_value';
  $handler->display->display_options['relationships']['field_ol_business_promotions_value']['table'] = 'field_data_field_ol_business_promotions';
  $handler->display->display_options['relationships']['field_ol_business_promotions_value']['field'] = 'field_ol_business_promotions_value';
  $handler->display->display_options['relationships']['field_ol_business_promotions_value']['delta'] = '-1';
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
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_ol_business_category']['id'] = 'field_ol_business_category';
  $handler->display->display_options['fields']['field_ol_business_category']['table'] = 'field_data_field_ol_business_category';
  $handler->display->display_options['fields']['field_ol_business_category']['field'] = 'field_ol_business_category';
  $handler->display->display_options['fields']['field_ol_business_category']['label'] = '';
  $handler->display->display_options['fields']['field_ol_business_category']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ol_business' => 'ol_business',
  );

  /* Display: Grid */
  $handler = $view->new_display('panel_pane', 'Grid', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Map / all */
  $handler = $view->new_display('panel_pane', 'Map / all', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_ol_geolocation';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = '#rendered_entity';
  $handler->display->display_options['style_options']['view_mode'] = 'teaser';
  $handler->display->display_options['style_options']['map'] = 'mapquest';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['icon'] = array(
    'iconUrl' => '',
    'shadowUrl' => '',
    'iconSize' => array(
      'x' => '',
      'y' => '',
    ),
    'iconAnchor' => array(
      'x' => '',
      'y' => '',
    ),
    'shadowAnchor' => array(
      'x' => '',
      'y' => '',
    ),
    'popupAnchor' => array(
      'x' => '',
      'y' => '',
    ),
  );
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
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_ol_business_category']['id'] = 'field_ol_business_category';
  $handler->display->display_options['fields']['field_ol_business_category']['table'] = 'field_data_field_ol_business_category';
  $handler->display->display_options['fields']['field_ol_business_category']['field'] = 'field_ol_business_category';
  $handler->display->display_options['fields']['field_ol_business_category']['label'] = '';
  $handler->display->display_options['fields']['field_ol_business_category']['element_label_colon'] = FALSE;
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
    'ol_business' => 'ol_business',
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

  /* Display: Reward list */
  $handler = $view->new_display('panel_pane', 'Reward list', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'A list of rewards offered by businesses in a specific scheme.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ol_description' => 'field_ol_description',
    'field_ol_business_category' => 'field_ol_business_category',
    'field_ol_promotion_description' => 'field_ol_promotion_description',
    'field_ol_promotion_reward_scheme' => 'field_ol_promotion_reward_scheme',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ol_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ol_business_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ol_promotion_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ol_promotion_reward_scheme' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_ol_business_category']['id'] = 'field_ol_business_category';
  $handler->display->display_options['fields']['field_ol_business_category']['table'] = 'field_data_field_ol_business_category';
  $handler->display->display_options['fields']['field_ol_business_category']['field'] = 'field_ol_business_category';
  $handler->display->display_options['fields']['field_ol_business_category']['element_label_colon'] = FALSE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_ol_promotion_description']['id'] = 'field_ol_promotion_description';
  $handler->display->display_options['fields']['field_ol_promotion_description']['table'] = 'field_data_field_ol_promotion_description';
  $handler->display->display_options['fields']['field_ol_promotion_description']['field'] = 'field_ol_promotion_description';
  $handler->display->display_options['fields']['field_ol_promotion_description']['relationship'] = 'field_ol_business_promotions_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Reward scheme (field_ol_promotion_reward_scheme) */
  $handler->display->display_options['arguments']['field_ol_promotion_reward_scheme_target_id']['id'] = 'field_ol_promotion_reward_scheme_target_id';
  $handler->display->display_options['arguments']['field_ol_promotion_reward_scheme_target_id']['table'] = 'field_data_field_ol_promotion_reward_scheme';
  $handler->display->display_options['arguments']['field_ol_promotion_reward_scheme_target_id']['field'] = 'field_ol_promotion_reward_scheme_target_id';
  $handler->display->display_options['arguments']['field_ol_promotion_reward_scheme_target_id']['relationship'] = 'field_ol_business_promotions_value';
  $handler->display->display_options['arguments']['field_ol_promotion_reward_scheme_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ol_promotion_reward_scheme_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ol_promotion_reward_scheme_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ol_promotion_reward_scheme_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ol_promotion_reward_scheme_target_id']['summary_options']['items_per_page'] = '25';
  $export['openlocal_business'] = $view;

  return $export;
}
