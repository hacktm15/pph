<?php
/**
 * @file
 * pph_profile.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pph_profile_user_default_roles() {
  $roles = array();

  // Exported role: photographer.
  $roles['photographer'] = array(
    'name' => 'photographer',
    'weight' => 4,
  );

  return $roles;
}
