<?php
/**
 * @file
 * pph_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pph_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|profile2|profile|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '5',
    'children' => array(
      0 => 'field_email',
      1 => 'field_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact|profile2|profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|profile2|profile|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '2',
    'children' => array(
      0 => 'field_email',
      1 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact|profile2|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|profile2|profile|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_about',
      1 => 'field_specialty_ref',
      2 => 'field_user_photo',
      3 => 'field_name_first',
      4 => 'field_name_last',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-general field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_general|profile2|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|profile2|profile|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '12',
    'children' => array(
      0 => 'field_profile_gallery',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-media field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_media|profile2|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|profile2|profile|default';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '2',
    'children' => array(
      0 => 'field_name_first',
      1 => 'field_name_last',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'classes' => 'page-title full-name',
        'element' => 'h1',
        'show_label' => '0',
        'label_element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_name|profile2|profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|profile2|profile|teaser';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '1',
    'children' => array(
      0 => 'field_name_first',
      1 => 'field_name_last',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'classes' => 'user-name',
        'element' => 'h3',
        'show_label' => '0',
        'label_element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_name|profile2|profile|teaser'] = $field_group;

  return $export;
}
