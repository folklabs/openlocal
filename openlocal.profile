<?php
/**
 * @file
 * Enables modules and site configuration for installing OpenCivic.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
// function opencivic_form_install_configure_form_alter(&$form, $form_state) {
//   // Pre-populate the site name with the server name.
//   $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
// }


/**
* Implements hook_install_tasks_alter()
*/
function openlocal_install_tasks_alter(&$tasks, $install_state) {

  // Magically go one level deeper in solving years of dependency problems
  require_once(drupal_get_path('module', 'panopoly_core') . '/panopoly_core.profile.inc');
  $tasks['install_load_profile']['function'] = 'panopoly_core_install_load_profile';
}


/**
* Implements hook_install_tasks().
*/
function openlocal_install_tasks($install_state) {
  $tasks = array();

  // Add the Panopoly App Server to the Installation Process
  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');
  $tasks = $tasks + apps_profile_install_tasks($install_state, array('machine name' => 'panopoly', 'default apps' => array('panopoly_demo')));

  return $tasks;
}


