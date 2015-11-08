<?php
/**
 * @file
 * pph_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pph_profile_taxonomy_default_vocabularies() {
  return array(
    'specialty' => array(
      'name' => 'Specialty',
      'machine_name' => 'specialty',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
