<?php
/**
 * @file
 * openlocal_core.radioactivity_decay_profile.inc
 */

/**
 * Implements hook_default_radioactivity_decay_profile().
 */
function openlocal_core_default_radioactivity_decay_profile() {
  $export = array();

  $radioactivity_decay_profile = new stdClass();
  $radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
  $radioactivity_decay_profile->api_version = 1;
  $radioactivity_decay_profile->machine_name = 'openlocal_profile';
  $radioactivity_decay_profile->name = 'OpenLocal Profile';
  $radioactivity_decay_profile->description = '';
  $radioactivity_decay_profile->enable_decay = 2;
  $radioactivity_decay_profile->granularity = '60';
  $radioactivity_decay_profile->half_life = 21600;
  $radioactivity_decay_profile->cut_off = '0.1';
  $radioactivity_decay_profile->storage = 'Live';
  $export['openlocal_profile'] = $radioactivity_decay_profile;

  return $export;
}
