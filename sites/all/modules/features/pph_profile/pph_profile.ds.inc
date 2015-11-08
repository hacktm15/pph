<?php
/**
 * @file
 * pph_profile.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pph_profile_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_profile_gallery|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_profile_gallery';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_gallery_photos' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['field_collection_item|field_profile_gallery|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'profile2|profile|default';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'profile';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_profile_gallery' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_name_first' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_name_last' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => ' ',
        ),
      ),
    ),
  );
  $export['profile2|profile|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'profile2|profile|teaser';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'profile';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_user_photo' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_name_first' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_name_last' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => ' ',
        ),
      ),
    ),
  );
  $export['profile2|profile|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pph_profile_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_profile_gallery|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_profile_gallery';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_specialty_single_ref',
        1 => 'field_gallery_photos',
      ),
    ),
    'fields' => array(
      'field_specialty_single_ref' => 'ds_content',
      'field_gallery_photos' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_profile_gallery|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|profile|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'profile';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-radix_moscone';
  $ds_layout->settings = array(
    'regions' => array(
      'sidebar' => array(
        0 => 'field_user_photo',
        1 => 'field_specialty_ref',
      ),
      'contentmain' => array(
        2 => 'field_name_first',
        3 => 'group_name',
        4 => 'field_name_last',
        5 => 'field_profile_location',
        6 => 'field_profile_about',
        7 => 'group_contact',
        9 => 'field_email',
        10 => 'field_phone',
      ),
      'footer' => array(
        8 => 'field_profile_gallery',
      ),
    ),
    'fields' => array(
      'field_user_photo' => 'sidebar',
      'field_specialty_ref' => 'sidebar',
      'field_name_first' => 'contentmain',
      'group_name' => 'contentmain',
      'field_name_last' => 'contentmain',
      'field_profile_location' => 'contentmain',
      'field_profile_about' => 'contentmain',
      'group_contact' => 'contentmain',
      'field_profile_gallery' => 'footer',
      'field_email' => 'contentmain',
      'field_phone' => 'contentmain',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'sidebar' => 'div',
      'contentmain' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['profile2|profile|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|profile|teaser';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'profile';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-radix_bryant';
  $ds_layout->settings = array(
    'regions' => array(
      'sidebar' => array(
        0 => 'field_user_photo',
      ),
      'contentmain' => array(
        1 => 'group_name',
        2 => 'field_name_first',
        3 => 'field_name_last',
        4 => 'field_specialty_ref',
        5 => 'field_profile_location',
      ),
    ),
    'fields' => array(
      'field_user_photo' => 'sidebar',
      'group_name' => 'contentmain',
      'field_name_first' => 'contentmain',
      'field_name_last' => 'contentmain',
      'field_specialty_ref' => 'contentmain',
      'field_profile_location' => 'contentmain',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar' => 'div',
      'contentmain' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['profile2|profile|teaser'] = $ds_layout;

  return $export;
}
