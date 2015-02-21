<?php
/**
 * @file
 * openlocal_news.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function openlocal_news_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'OpenLocal News actions';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'ol_news_actions';
  $fe_block_boxes->body = '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/openlocal-news-article"><span class="ol-action-span"><i class="fa fa-plus"></i> add news article</span></a>
</div>

<div>
<a href="/contextual_help/how-create-news-article" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating articles</a>
</div>
</div>';

  $export['ol_news_actions'] = $fe_block_boxes;

  return $export;
}
