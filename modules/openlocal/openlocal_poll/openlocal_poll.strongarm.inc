<?php
/**
 * @file
 * openlocal_poll.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openlocal_poll_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apps_allow_voting';
  $strongarm->value = 0;
  $export['apps_allow_voting'] = $strongarm;

  return $export;
}
