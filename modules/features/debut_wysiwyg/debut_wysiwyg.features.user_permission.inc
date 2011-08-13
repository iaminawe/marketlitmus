<?php
/**
 * @file
 * debut_wysiwyg.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function debut_wysiwyg_user_default_permissions() {
  $permissions = array();


  // Exported permission: use text format manager
  $permissions['use text format manager'] = array(
    'name' => 'use text format manager',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
