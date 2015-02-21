<?php
/**
 * @file
 * openlocal_business.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function openlocal_business_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|node|ol_business|form';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_business';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Basic info',
    'weight' => '3',
    'children' => array(
      0 => 'field_ol_business_category',
      1 => 'field_ol_business_tags',
      2 => 'field_ol_business_telephone',
      3 => 'field_ol_description',
      4 => 'field_ol_details',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-basic-info field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic_info|node|ol_business|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internet|node|ol_business|form';
  $field_group->group_name = 'group_internet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_business';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Internet',
    'weight' => '4',
    'children' => array(
      0 => 'field_ol_business_email',
      1 => 'field_ol_business_website',
      2 => 'field_ol_business_twitter',
      3 => 'field_ol_business_facebook',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-internet field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_internet|node|ol_business|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_details|node|ol_business|form';
  $field_group->group_name = 'group_location_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_business';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Location details',
    'weight' => '5',
    'children' => array(
      0 => 'field_ol_address',
      1 => 'field_ol_event_venue',
      2 => 'field_ol_geolocation',
      3 => 'field_ol_location_properties',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-location-details field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location_details|node|ol_business|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|ol_business|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_business';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '2',
    'children' => array(
      0 => 'group_basic_info',
      1 => 'group_internet',
      2 => 'group_location_details',
      3 => 'group_opening_hours',
      4 => 'group_promotions',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-main field-group-htabs',
      ),
    ),
  );
  $export['group_main|node|ol_business|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_opening_hours|node|ol_business|form';
  $field_group->group_name = 'group_opening_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_business';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Opening hours',
    'weight' => '6',
    'children' => array(
      0 => 'field_ol_business_opening_hours',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-opening-hours field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_opening_hours|node|ol_business|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promotions|node|ol_business|form';
  $field_group->group_name = 'group_promotions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_business';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Promotions',
    'weight' => '7',
    'children' => array(
      0 => 'field_ol_business_promotions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-promotions field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_promotions|node|ol_business|form'] = $field_group;

  return $export;
}
