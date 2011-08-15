<?php
/**
 * @file
 * ckeditor_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ckeditor_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format manager
  $permissions['use text format manager'] = array(
    'name' => 'use text format manager',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
