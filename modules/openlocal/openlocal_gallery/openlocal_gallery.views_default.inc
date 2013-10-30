<?php
/**
 * @file
 * openlocal_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openlocal_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openlocal_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OpenLocal Gallery';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ol_gallery_images']['id'] = 'field_ol_gallery_images';
  $handler->display->display_options['fields']['field_ol_gallery_images']['table'] = 'field_data_field_ol_gallery_images';
  $handler->display->display_options['fields']['field_ol_gallery_images']['field'] = 'field_ol_gallery_images';
  $handler->display->display_options['fields']['field_ol_gallery_images']['label'] = '';
  $handler->display->display_options['fields']['field_ol_gallery_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ol_gallery_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ol_gallery_images']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ol_gallery_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ol_gallery_images']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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
    'ol_gallery' => 'ol_gallery',
  );

  /* Display: Group: Galleries */
  $handler = $view->new_display('panel_pane', 'Group: Galleries', 'panel_pane_1');
  $export['openlocal_gallery'] = $view;

  return $export;
}
