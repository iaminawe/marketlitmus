<?php
/**
 * @file
 * wysiwyg_feature.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function wysiwyg_feature_user_default_permissions() {
  $permissions = array();


  // Exported permission: use text format wysiwyg_editor
  $permissions['use text format wysiwyg_manager'] = array(
    'name' => 'use text format wysiwyg_manager',
    'roles' => array(
      1 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'filter',
  );
  return $permissions;
}
