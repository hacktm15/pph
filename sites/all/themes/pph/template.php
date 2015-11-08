<?php
/**
 * @file
 * Primary pre/preprocess functions and alterations.
 */

/**
 * Theme preprocess function for a location.
 */
function pph_preprocess_location(&$variables) {
  $location = array();
  if (!empty($variables['city'])) {
    $location[] = $variables['city'];
  }
  if (!empty($variables['province'])) {
    $location[] = $variables['province'];
  }
  if (!empty($variables['country_name'])) {
    $location[] = $variables['country_name'];
  }
  if (!empty($location)) {
    $variables['location_processed'] = implode(', ', $location);
  }
}
