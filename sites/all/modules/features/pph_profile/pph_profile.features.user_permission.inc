<?php
/**
 * @file
 * pph_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pph_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any profile profile'.
  $permissions['edit any profile profile'] = array(
    'name' => 'edit any profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own profile profile'.
  $permissions['edit own profile profile'] = array(
    'name' => 'edit own profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'photographer' => 'photographer',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any profile profile'.
  $permissions['view any profile profile'] = array(
    'name' => 'view any profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own profile profile'.
  $permissions['view own profile profile'] = array(
    'name' => 'view own profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
