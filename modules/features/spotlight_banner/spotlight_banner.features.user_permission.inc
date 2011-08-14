<?php
/**
 * @file
 * spotlight_banner.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function spotlight_banner_user_default_permissions() {
  $permissions = array();

  // Exported permission: create spotlight content
  $permissions['create spotlight content'] = array(
    'name' => 'create spotlight content',
    'roles' => array(),
  );

  // Exported permission: delete any spotlight content
  $permissions['delete any spotlight content'] = array(
    'name' => 'delete any spotlight content',
    'roles' => array(),
  );

  // Exported permission: delete own spotlight content
  $permissions['delete own spotlight content'] = array(
    'name' => 'delete own spotlight content',
    'roles' => array(),
  );

  // Exported permission: edit any spotlight content
  $permissions['edit any spotlight content'] = array(
    'name' => 'edit any spotlight content',
    'roles' => array(),
  );

  // Exported permission: edit own spotlight content
  $permissions['edit own spotlight content'] = array(
    'name' => 'edit own spotlight content',
    'roles' => array(),
  );

  return $permissions;
}
