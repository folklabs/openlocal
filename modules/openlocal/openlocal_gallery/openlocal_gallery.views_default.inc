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
  $view->tag = 'openlocal';
  $view->base_table = 'node';
  $view->human_name = 'OpenLocal Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Galleries';
  $handler->display->display_options['css_class'] = 'ol-item-grid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ol_gallery_ref_node']['id'] = 'reverse_field_ol_gallery_ref_node';
  $handler->display->display_options['relationships']['reverse_field_ol_gallery_ref_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ol_gallery_ref_node']['field'] = 'reverse_field_ol_gallery_ref_node';
  $handler->display->display_options['relationships']['reverse_field_ol_gallery_ref_node']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: MIN(Content: Images) */
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['id'] = 'field_ol_gallery_images_1';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['table'] = 'field_data_field_ol_gallery_images';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['field'] = 'field_ol_gallery_images';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['relationship'] = 'reverse_field_ol_gallery_ref_node';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['group_type'] = 'min';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['settings'] = array(
    'image_style' => 'openlocal_panel_deep',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ol_gallery_images_1']['separator'] = '';
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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['openlocal_gallery'] = $view;

  $view = new view();
  $view->name = 'openlocal_photo_album';
  $view->description = 'Views for Photo albums.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OpenLocal Photo album';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo albums';
  $handler->display->display_options['use_more'] = TRUE;
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
  $handler->display->display_options['fields']['field_ol_gallery_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ol_gallery_images']['settings'] = array(
    'colorbox_node_style' => 'openlocal_panel_deep',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ol_gallery_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ol_gallery_images']['separator'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
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
    'ol_photo_album' => 'ol_photo_album',
  );

  /* Display: List by user */
  $handler = $view->new_display('panel_pane', 'List by user', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'A list of albums filtered by the author.';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: List by gallery */
  $handler = $view->new_display('panel_pane', 'List by gallery', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'A list of albums filtered by the associated gallery.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_ol_gallery_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ol_gallery_images']['settings'] = array(
    'colorbox_node_style' => 'openlocal_panel_deep',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ol_gallery_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ol_gallery_images']['separator'] = '';
  /* Field: Content: Credits */
  $handler->display->display_options['fields']['field_ol_credits']['id'] = 'field_ol_credits';
  $handler->display->display_options['fields']['field_ol_credits']['table'] = 'field_data_field_ol_credits';
  $handler->display->display_options['fields']['field_ol_credits']['field'] = 'field_ol_credits';
  $handler->display->display_options['fields']['field_ol_credits']['element_type'] = 'span';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Gallery (field_ol_gallery_ref) */
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['id'] = 'field_ol_gallery_ref_target_id';
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['table'] = 'field_data_field_ol_gallery_ref';
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['field'] = 'field_ol_gallery_ref_target_id';
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_ol_gallery_ref_target_id']['validate_options']['types'] = array(
    'ol_gallery' => 'ol_gallery',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['openlocal_photo_album'] = $view;

  return $export;
}
