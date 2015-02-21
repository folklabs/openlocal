<?php
/**
 * @file
 * openlocal_home.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openlocal_home_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openlocal_what_s_hot';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OpenLocal What\'s hot';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'What\'s hot!';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Radioactivity */
  $handler->display->display_options['fields']['field_ol_radioactivity']['id'] = 'field_ol_radioactivity';
  $handler->display->display_options['fields']['field_ol_radioactivity']['table'] = 'field_data_field_ol_radioactivity';
  $handler->display->display_options['fields']['field_ol_radioactivity']['field'] = 'field_ol_radioactivity';
  $handler->display->display_options['fields']['field_ol_radioactivity']['label'] = '';
  $handler->display->display_options['fields']['field_ol_radioactivity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ol_radioactivity']['click_sort_column'] = 'radioactivity_energy';
  $handler->display->display_options['fields']['field_ol_radioactivity']['settings'] = array(
    'energy' => '0',
    'type' => 'popularity',
    'accuracy' => '100',
  );
  /* Sort criterion: Content: Radioactivity (field_ol_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_ol_radioactivity_radioactivity_energy']['id'] = 'field_ol_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_ol_radioactivity_radioactivity_energy']['table'] = 'field_data_field_ol_radioactivity';
  $handler->display->display_options['sorts']['field_ol_radioactivity_radioactivity_energy']['field'] = 'field_ol_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_ol_radioactivity_radioactivity_energy']['order'] = 'DESC';
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
    'ol_news_article' => 'ol_news_article',
  );

  /* Display: Sidebar */
  $handler = $view->new_display('panel_pane', 'Sidebar', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['openlocal_what_s_hot'] = $view;

  return $export;
}
