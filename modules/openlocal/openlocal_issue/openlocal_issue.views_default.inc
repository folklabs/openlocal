<?php
/**
 * @file
 * openlocal_issue.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openlocal_issue_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openlocal_issue';
  $view->description = '';
  $view->tag = 'openlocal';
  $view->base_table = 'node';
  $view->human_name = 'OpenLocal Issue';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ol_issue_status' => 'field_ol_issue_status',
    'field_ol_issue_type' => 'field_ol_issue_type',
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
    'field_ol_issue_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ol_issue_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_ol_issue_status']['id'] = 'field_ol_issue_status';
  $handler->display->display_options['fields']['field_ol_issue_status']['table'] = 'field_data_field_ol_issue_status';
  $handler->display->display_options['fields']['field_ol_issue_status']['field'] = 'field_ol_issue_status';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_ol_issue_type']['id'] = 'field_ol_issue_type';
  $handler->display->display_options['fields']['field_ol_issue_type']['table'] = 'field_data_field_ol_issue_type';
  $handler->display->display_options['fields']['field_ol_issue_type']['field'] = 'field_ol_issue_type';
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
    'ol_issue' => 'ol_issue',
  );
  /* Filter criterion: Content: Status (field_ol_issue_status) */
  $handler->display->display_options['filters']['field_ol_issue_status_value']['id'] = 'field_ol_issue_status_value';
  $handler->display->display_options['filters']['field_ol_issue_status_value']['table'] = 'field_data_field_ol_issue_status';
  $handler->display->display_options['filters']['field_ol_issue_status_value']['field'] = 'field_ol_issue_status_value';
  $handler->display->display_options['filters']['field_ol_issue_status_value']['value'] = array(
    'open' => 'open',
    'need_more_info' => 'need_more_info',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['openlocal_issue'] = $view;

  return $export;
}
