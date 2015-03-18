<?php
/**
 * @file
 * openlocal_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function openlocal_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-ol_personal_info-field_ol_address'
  $field_instances['profile2-ol_personal_info-field_ol_address'] = array(
    'bundle' => 'ol_personal_info',
    'default_value' => array(
      0 => array(
        'element_key' => 'profile2|ol_personal_info|field_ol_personal_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => 'Greater London',
        'postal_code' => '',
        'country' => 'GB',
      ),
    ),
    'deleted' => 0,
    'description' => 'Why are we asking for this? It allows the web site to show the approximate area you live (or work) and enables you to receive area specific communications about events or issues. Only enter as much as you wish. Please note that the post code does not identify your specific address, we always respect your privacy so do not ask for any more specific information. If you are unsure then just leave it blank, no problems.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_ol_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'GB' => 'GB',
        ),
        'default_country' => '',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-ol_personal_info-field_ol_personal_type_of_user'
  $field_instances['profile2-ol_personal_info-field_ol_personal_type_of_user'] = array(
    'bundle' => 'ol_personal_info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_ol_personal_type_of_user',
    'label' => 'Type of user',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Type of user');
  t('Why are we asking for this? It allows the web site to show the approximate area you live (or work) and enables you to receive area specific communications about events or issues. Only enter as much as you wish. Please note that the post code does not identify your specific address, we always respect your privacy so do not ask for any more specific information. If you are unsure then just leave it blank, no problems.');

  return $field_instances;
}
