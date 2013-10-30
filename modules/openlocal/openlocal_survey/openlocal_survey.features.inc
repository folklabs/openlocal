<?php
/**
 * @file
 * openlocal_survey.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlocal_survey_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
