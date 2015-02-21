<?php
/**
 * @file
 * openlocal_group.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function openlocal_group_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'OpenLocal Group actions';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'ol_group_actions';
  $fe_block_boxes->body = '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/ol-group"><span class="ol-action-span"><i class="fa fa-plus"></i> add group</span></a>
</div>

<div>
<a href="/contextual_help/how-create-group" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating groups</a>
</div>
</div>';

  $export['ol_group_actions'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'OpenLocal Group content actions';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'ol_group_content_actions';
  $fe_block_boxes->body = '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/ol-event"><span class="ol-action-span"><i class="fa fa-plus"></i> add event</span></a>
</div>
<div class="ol-action-button">
<a href="/node/add/ol-group-post"><span class="ol-action-span"><i class="fa fa-plus"></i> add group post</span></a>
</div>
<div class="ol-action-button">
<a href="/node/add/ol-gallery"><span class="ol-action-span"><i class="fa fa-plus"></i> add gallery</span></a>
</div>

<div>
<a href="/contextual_help/about-groups" class="ol-action-help"><i class="fa fa-question-circle"></i> About groups</a>
</div>
</div>';

  $export['ol_group_content_actions'] = $fe_block_boxes;

  return $export;
}
