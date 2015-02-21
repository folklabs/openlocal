<?php
/**
 * @file
 * openlocal_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openlocal_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:openlocal_news_article:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'openlocal_news_article';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = 'openlocal-news';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'User from Node (on node.node_author)',
      'keyword' => 'user',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'panelizer',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'Multiple terms from node',
      'keyword' => 'terms',
      'name' => 'terms_from_node',
      'vocabulary' => array(
        'panopoly_categories' => 'panopoly_categories',
      ),
      'concatenator' => '+',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News
%node:title',
    'panels_breadcrumbs_paths' => 'news',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_taylor';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'half' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '389f9d2d-a830-48bf-9f09-8b7c561779fe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bdcfbcc0-f349-45c3-b5f9-8a2ae2f77e79';
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
        'colorbox_node_style' => '',
        'colorbox_image_style' => '',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
        'image_style' => 'openlocal_news_main',
        'image_link' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bdcfbcc0-f349-45c3-b5f9-8a2ae2f77e79';
    $display->content['new-bdcfbcc0-f349-45c3-b5f9-8a2ae2f77e79'] = $pane;
    $display->panels['half'][0] = 'new-bdcfbcc0-f349-45c3-b5f9-8a2ae2f77e79';
    $pane = new stdClass();
    $pane->pid = 'new-75eebaf2-5a53-4255-af8a-814d46e9bf49';
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
    $pane->uuid = '75eebaf2-5a53-4255-af8a-814d46e9bf49';
    $display->content['new-75eebaf2-5a53-4255-af8a-814d46e9bf49'] = $pane;
    $display->panels['half'][1] = 'new-75eebaf2-5a53-4255-af8a-814d46e9bf49';
    $pane = new stdClass();
    $pane->pid = 'new-f738fccc-0612-47ad-8174-d3a45c7a36ce';
    $pane->panel = 'half';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f738fccc-0612-47ad-8174-d3a45c7a36ce';
    $display->content['new-f738fccc-0612-47ad-8174-d3a45c7a36ce'] = $pane;
    $display->panels['half'][2] = 'new-f738fccc-0612-47ad-8174-d3a45c7a36ce';
    $pane = new stdClass();
    $pane->pid = 'new-e5d26a28-1bda-4d75-9838-1320f6941f14';
    $pane->panel = 'half';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->uuid = 'e5d26a28-1bda-4d75-9838-1320f6941f14';
    $display->content['new-e5d26a28-1bda-4d75-9838-1320f6941f14'] = $pane;
    $display->panels['half'][3] = 'new-e5d26a28-1bda-4d75-9838-1320f6941f14';
    $pane = new stdClass();
    $pane->pid = 'new-9d8d6158-c30d-485c-b518-087ead0c2d96';
    $pane->panel = 'half';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9d8d6158-c30d-485c-b518-087ead0c2d96';
    $display->content['new-9d8d6158-c30d-485c-b518-087ead0c2d96'] = $pane;
    $display->panels['half'][4] = 'new-9d8d6158-c30d-485c-b518-087ead0c2d96';
    $pane = new stdClass();
    $pane->pid = 'new-7c1d57f7-e644-4612-bd46-1c3a8f67928e';
    $pane->panel = 'quarter1';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'featured',
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c1d57f7-e644-4612-bd46-1c3a8f67928e';
    $display->content['new-7c1d57f7-e644-4612-bd46-1c3a8f67928e'] = $pane;
    $display->panels['quarter1'][0] = 'new-7c1d57f7-e644-4612-bd46-1c3a8f67928e';
    $pane = new stdClass();
    $pane->pid = 'new-0051cfdc-85e1-47d1-8566-73bbf991e3ce';
    $pane->panel = 'quarter1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Meta data',
      'title' => '',
      'body' => '<div class="ol-name-date"><p class="ol-username">%user:name</p><p>%node:created</p></div>',
      'format' => 'panopoly_html_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ol-meta-data',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0051cfdc-85e1-47d1-8566-73bbf991e3ce';
    $display->content['new-0051cfdc-85e1-47d1-8566-73bbf991e3ce'] = $pane;
    $display->panels['quarter1'][1] = 'new-0051cfdc-85e1-47d1-8566-73bbf991e3ce';
    $pane = new stdClass();
    $pane->pid = 'new-1558d55a-437b-4619-903e-9616ba66615d';
    $pane->panel = 'quarter1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OL News comments',
      'title' => '',
      'body' => '<div class="ol-comments"><span class="ol-comment-count">%node:comment-count</span> Comments</div>',
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
    $pane->uuid = '1558d55a-437b-4619-903e-9616ba66615d';
    $display->content['new-1558d55a-437b-4619-903e-9616ba66615d'] = $pane;
    $display->panels['quarter1'][2] = 'new-1558d55a-437b-4619-903e-9616ba66615d';
    $pane = new stdClass();
    $pane->pid = 'new-928fb91c-4241-4889-b94e-cf08b1eccb63';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_categories';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '928fb91c-4241-4889-b94e-cf08b1eccb63';
    $display->content['new-928fb91c-4241-4889-b94e-cf08b1eccb63'] = $pane;
    $display->panels['quarter1'][3] = 'new-928fb91c-4241-4889-b94e-cf08b1eccb63';
    $pane = new stdClass();
    $pane->pid = 'new-f723f105-4352-4dea-a0bf-016e82cc02bb';
    $pane->panel = 'quarter1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ol_tags';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f723f105-4352-4dea-a0bf-016e82cc02bb';
    $display->content['new-f723f105-4352-4dea-a0bf-016e82cc02bb'] = $pane;
    $display->panels['quarter1'][4] = 'new-f723f105-4352-4dea-a0bf-016e82cc02bb';
    $pane = new stdClass();
    $pane->pid = 'new-1ea5f660-72f8-4956-bbe2-a7c132cf212d';
    $pane->panel = 'quarter1';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_news-related_news_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'body' => 1,
        'created' => 1,
      ),
      'exposed' => array(
        'widget_title' => 'Related news articles',
        'sort_by' => 'created',
        'sort_order' => 'DESC',
      ),
      'context' => array(
        0 => 'panelizer',
        1 => 'relationship_terms_from_node_1',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => 'Related news articles',
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
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '1ea5f660-72f8-4956-bbe2-a7c132cf212d';
    $display->content['new-1ea5f660-72f8-4956-bbe2-a7c132cf212d'] = $pane;
    $display->panels['quarter1'][5] = 'new-1ea5f660-72f8-4956-bbe2-a7c132cf212d';
    $pane = new stdClass();
    $pane->pid = 'new-ad351811-ea55-451e-bc58-28e3fca6bce9';
    $pane->panel = 'quarter1';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_news-related_news_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '6',
      'fields_override' => array(
        'field_featured_image' => 0,
        'title' => 1,
        'body' => 0,
        'created' => 0,
      ),
      'exposed' => array(
        'widget_title' => '',
        'sort_by' => 'random',
        'sort_order' => 'DESC',
      ),
      'context' => array(
        0 => 'panelizer',
        1 => 'relationship_terms_from_node_1',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'ad351811-ea55-451e-bc58-28e3fca6bce9';
    $display->content['new-ad351811-ea55-451e-bc58-28e3fca6bce9'] = $pane;
    $display->panels['quarter1'][6] = 'new-ad351811-ea55-451e-bc58-28e3fca6bce9';
    $pane = new stdClass();
    $pane->pid = 'new-43894070-9668-4760-8386-04209426499d';
    $pane->panel = 'quarter2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'OpenLocal News actions',
      'title' => '',
      'body' => '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/openlocal-news-article"><span class="ol-action-span"><i class="fa fa-plus"></i> add news article</span></a>
</div>

<div>
<a href="/contextual_help/how-create-news-article" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating articles</a>
</div>
</div>',
      'format' => 'panopoly_html_text',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '43894070-9668-4760-8386-04209426499d';
    $display->content['new-43894070-9668-4760-8386-04209426499d'] = $pane;
    $display->panels['quarter2'][0] = 'new-43894070-9668-4760-8386-04209426499d';
    $pane = new stdClass();
    $pane->pid = 'new-fbcf0251-76e7-4631-b556-acae94cfe255';
    $pane->panel = 'quarter2';
    $pane->type = 'views_panes';
    $pane->subtype = 'openlocal_news-articles_by_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'fields_override' => array(
        'field_featured_image' => 0,
        'title' => 1,
        'body' => 0,
        'created' => 0,
      ),
      'exposed' => array(
        'sort_by' => 'created',
        'sort_order' => 'DESC',
        'widget_title' => 'More By This Author',
        'items_per_page' => '10',
      ),
      'context' => array(
        0 => 'panelizer',
        1 => 'relationship_entity_from_schema:uid-node-user_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => 'More By This Author',
      'items_per_page' => '10',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fbcf0251-76e7-4631-b556-acae94cfe255';
    $display->content['new-fbcf0251-76e7-4631-b556-acae94cfe255'] = $pane;
    $display->panels['quarter2'][1] = 'new-fbcf0251-76e7-4631-b556-acae94cfe255';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:openlocal_news_article:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:openlocal_news_article:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'openlocal_news_article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'News Article Author',
      'keyword' => 'user',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = 'panopoly-news-default';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'fd5e29ee-ced5-47f0-b99a-3aba2a304090';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-60214e67-c836-4bb2-94cb-f4a76a94afa3';
    $pane->panel = 'contentmain';
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
        'image_style' => 'panopoly_image_half',
        'image_link' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '60214e67-c836-4bb2-94cb-f4a76a94afa3';
    $display->content['new-60214e67-c836-4bb2-94cb-f4a76a94afa3'] = $pane;
    $display->panels['contentmain'][0] = 'new-60214e67-c836-4bb2-94cb-f4a76a94afa3';
    $pane = new stdClass();
    $pane->pid = 'new-52761cfb-6c2a-4db6-b3f6-5c2db079d581';
    $pane->panel = 'contentmain';
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
      'override_title' => 1,
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
    $pane->uuid = '52761cfb-6c2a-4db6-b3f6-5c2db079d581';
    $display->content['new-52761cfb-6c2a-4db6-b3f6-5c2db079d581'] = $pane;
    $display->panels['contentmain'][1] = 'new-52761cfb-6c2a-4db6-b3f6-5c2db079d581';
    $pane = new stdClass();
    $pane->pid = 'new-c7ec3108-dd14-4641-b536-298a21f2525d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '5',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c7ec3108-dd14-4641-b536-298a21f2525d';
    $display->content['new-c7ec3108-dd14-4641-b536-298a21f2525d'] = $pane;
    $display->panels['contentmain'][2] = 'new-c7ec3108-dd14-4641-b536-298a21f2525d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-60214e67-c836-4bb2-94cb-f4a76a94afa3';
  $panelizer->display = $display;
  $export['node:openlocal_news_article:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:openlocal_news_article:default:featured';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'openlocal_news_article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->css_class = 'panopoly-news-featured';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f260be68-c6dc-48b3-a06c-5988ecc880f0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2268f994-689c-42b5-99cd-f9bafc585d61';
    $pane->panel = 'contentmain';
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
        'image_link' => 'content',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
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
    $pane->uuid = '2268f994-689c-42b5-99cd-f9bafc585d61';
    $display->content['new-2268f994-689c-42b5-99cd-f9bafc585d61'] = $pane;
    $display->panels['contentmain'][0] = 'new-2268f994-689c-42b5-99cd-f9bafc585d61';
    $pane = new stdClass();
    $pane->pid = 'new-a664acfd-7fc8-454d-ba7c-9410e01dfaa7';
    $pane->panel = 'contentmain';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
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
    $pane->uuid = 'a664acfd-7fc8-454d-ba7c-9410e01dfaa7';
    $display->content['new-a664acfd-7fc8-454d-ba7c-9410e01dfaa7'] = $pane;
    $display->panels['contentmain'][1] = 'new-a664acfd-7fc8-454d-ba7c-9410e01dfaa7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:openlocal_news_article:default:featured'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:openlocal_news_article:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'openlocal_news_article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = 'panopoly-news-teaser';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
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
  $display->uuid = '5a488ee6-3a8d-4d26-b663-66db54a44a17';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b349c4bd-9c03-48e4-97e3-018153ca4117';
    $pane->panel = 'center';
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
        'image_link' => 'content',
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
    $pane->uuid = 'b349c4bd-9c03-48e4-97e3-018153ca4117';
    $display->content['new-b349c4bd-9c03-48e4-97e3-018153ca4117'] = $pane;
    $display->panels['center'][0] = 'new-b349c4bd-9c03-48e4-97e3-018153ca4117';
    $pane = new stdClass();
    $pane->pid = 'new-ff324b62-57cb-4781-a1f6-43d33cb8d948';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => 600,
      ),
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
    $pane->uuid = 'ff324b62-57cb-4781-a1f6-43d33cb8d948';
    $display->content['new-ff324b62-57cb-4781-a1f6-43d33cb8d948'] = $pane;
    $display->panels['center'][1] = 'new-ff324b62-57cb-4781-a1f6-43d33cb8d948';
    $pane = new stdClass();
    $pane->pid = 'new-ed0827e8-bc7e-4a62-9afa-6a4ce55d3002';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
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
    $pane->uuid = 'ed0827e8-bc7e-4a62-9afa-6a4ce55d3002';
    $display->content['new-ed0827e8-bc7e-4a62-9afa-6a4ce55d3002'] = $pane;
    $display->panels['center'][2] = 'new-ed0827e8-bc7e-4a62-9afa-6a4ce55d3002';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ed0827e8-bc7e-4a62-9afa-6a4ce55d3002';
  $panelizer->display = $display;
  $export['node:openlocal_news_article:default:teaser'] = $panelizer;

  return $export;
}
