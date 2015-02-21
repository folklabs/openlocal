<?php
/**
 * @file
 * openlocal_highlight.features.inc
 */

/**
 * Implements hook_views_api().
 */
function openlocal_highlight_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function openlocal_highlight_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: ol_highlights
  $nodequeues['ol_highlights'] = array(
    'name' => 'ol_highlights',
    'title' => 'Highlights',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Add to highlights',
    'link_remove' => 'Remove from highlights',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'openlocal_news_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
