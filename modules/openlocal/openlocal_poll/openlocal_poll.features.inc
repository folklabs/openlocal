<?php
/**
 * @file
 * openlocal_poll.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_poll_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
