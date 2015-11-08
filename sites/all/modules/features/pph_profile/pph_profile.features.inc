<?php
/**
 * @file
 * pph_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pph_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pph_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function pph_profile_default_profile2_type() {
  $items = array();
  $items['profile'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "profile",
    "label" : "Profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  return $items;
}
