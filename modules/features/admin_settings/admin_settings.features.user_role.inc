<?php
/**
 * @file
 * admin_settings.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function admin_settings_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: contributor
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => '3',
  );

  return $roles;
}
