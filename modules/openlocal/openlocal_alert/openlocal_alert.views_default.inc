<?php
/**
 * @file
 * openlocal_alert.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openlocal_alert_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openlocal_alert';
  $view->description = 'Alerts for urgent citizen issues.';
  $view->tag = 'openlocal';
  $view->base_table = 'node';
  $view->human_name = 'OpenLocal Alert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Local alerts';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No current alerts';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No Missing Moggies or other reported problems. Phew.</p>
<p><a href="/node/add/ol-alert">Submit an alert</a></p>
';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_html_text';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ol_link']['id'] = 'field_ol_link';
  $handler->display->display_options['fields']['field_ol_link']['table'] = 'field_data_field_ol_link';
  $handler->display->display_options['fields']['field_ol_link']['field'] = 'field_ol_link';
  $handler->display->display_options['fields']['field_ol_link']['label'] = '';
  $handler->display->display_options['fields']['field_ol_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ol_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ol_link']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_ol_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'openlocal_panel_deep',
    'image_link' => 'content',
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'ol_alert' => 'ol_alert',
  );
  /* Filter criterion: Content: Resolved (field_ol_alert_resolved) */
  $handler->display->display_options['filters']['field_ol_alert_resolved_value']['id'] = 'field_ol_alert_resolved_value';
  $handler->display->display_options['filters']['field_ol_alert_resolved_value']['table'] = 'field_data_field_ol_alert_resolved';
  $handler->display->display_options['filters']['field_ol_alert_resolved_value']['field'] = 'field_ol_alert_resolved_value';
  $handler->display->display_options['filters']['field_ol_alert_resolved_value']['value'] = array(
    0 => '0',
  );

  /* Display: Sidebar */
  $handler = $view->new_display('panel_pane', 'Sidebar', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ol_link']['id'] = 'field_ol_link';
  $handler->display->display_options['fields']['field_ol_link']['table'] = 'field_data_field_ol_link';
  $handler->display->display_options['fields']['field_ol_link']['field'] = 'field_ol_link';
  $handler->display->display_options['fields']['field_ol_link']['label'] = '';
  $handler->display->display_options['fields']['field_ol_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ol_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ol_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ol_link']['type'] = 'link_url';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['alter']['path'] = '[field_ol_link]';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'openlocal_panel_deep',
    'image_link' => '',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_ol_alert_category']['id'] = 'field_ol_alert_category';
  $handler->display->display_options['fields']['field_ol_alert_category']['table'] = 'field_data_field_ol_alert_category';
  $handler->display->display_options['fields']['field_ol_alert_category']['field'] = 'field_ol_alert_category';
  $handler->display->display_options['fields']['field_ol_alert_category']['label'] = '';
  $handler->display->display_options['fields']['field_ol_alert_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ol_alert_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_ol_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['openlocal_alert'] = $view;

  return $export;
}
