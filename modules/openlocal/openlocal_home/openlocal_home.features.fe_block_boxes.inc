<?php
/**
 * @file
 * openlocal_home.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function openlocal_home_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'OpenLocal Home actions';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'ol_home_actions';
  $fe_block_boxes->body = '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/openlocal-news-article"><span class="ol-action-span"><i class="fa fa-plus"></i> add news article</span></a>
</div>

<div>
<a href="/contextual_help/how-create-news-article" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating articles</a>
</div>

<div class="ol-action-button">
<a href="/node/add/ol-alert"><span class="ol-action-span"><i class="fa fa-plus"></i> create alert</span></a>
</div>

<div>
<a href="/contextual_help/how-create-alert" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating alerts</a>
</div>
</div>';

  $export['ol_home_actions'] = $fe_block_boxes;

  return $export;
}
