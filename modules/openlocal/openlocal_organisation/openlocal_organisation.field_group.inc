<?php
/**
 * @file
 * openlocal_organisation.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function openlocal_organisation_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|node|ol_organisation|form';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_organisation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Basic info',
    'weight' => '3',
    'children' => array(
      0 => 'field_ol_description',
      1 => 'field_ol_details',
      2 => 'field_ol_organisation_type',
      3 => 'field_ol_telephone',
      4 => 'field_featured_image',
      5 => 'group_group',
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
  $export['group_basic_info|node|ol_organisation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_classification|node|ol_organisation|form';
  $field_group->group_name = 'group_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_organisation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '4',
    'children' => array(
      0 => 'field_ol_tags',
      1 => 'field_featured_categories',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_classification|node|ol_organisation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internet|node|ol_organisation|form';
  $field_group->group_name = 'group_internet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_organisation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Internet',
    'weight' => '5',
    'children' => array(
      0 => 'field_ol_email',
      1 => 'field_ol_facebook_page',
      2 => 'field_ol_link',
      3 => 'field_ol_twitter',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_internet|node|ol_organisation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_locations|node|ol_organisation|form';
  $field_group->group_name = 'group_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_organisation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Locations',
    'weight' => '6',
    'children' => array(
      0 => 'field_ol_locations_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_locations|node|ol_organisation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|ol_organisation|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ol_organisation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '1',
    'children' => array(
      0 => 'group_basic_info',
      1 => 'group_internet',
      2 => 'group_locations',
      3 => 'group_classification',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-main field-group-htabs',
      ),
    ),
  );
  $export['group_main|node|ol_organisation|form'] = $field_group;

  return $export;
}
