<?php
/**
 * @file
 * digital_treasures_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function digital_treasures_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_source|node|article|form';
  $field_group->group_name = 'group_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Source',
    'weight' => '1',
    'children' => array(
      0 => 'field_source',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-source field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_source|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_url|node|article|form';
  $field_group->group_name = 'group_url';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'URL',
    'weight' => '2',
    'children' => array(
      0 => 'field_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-url field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_url|node|article|form'] = $field_group;

  return $export;
}
