<?php
/**
 * @file
 * product_features.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function product_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: create product_feature content
  $permissions['create product_feature content'] = array(
    'name' => 'create product_feature content',
    'roles' => array(),
  );

  // Exported permission: delete any product_feature content
  $permissions['delete any product_feature content'] = array(
    'name' => 'delete any product_feature content',
    'roles' => array(),
  );

  // Exported permission: delete own product_feature content
  $permissions['delete own product_feature content'] = array(
    'name' => 'delete own product_feature content',
    'roles' => array(),
  );

  // Exported permission: edit any product_feature content
  $permissions['edit any product_feature content'] = array(
    'name' => 'edit any product_feature content',
    'roles' => array(),
  );

  // Exported permission: edit own product_feature content
  $permissions['edit own product_feature content'] = array(
    'name' => 'edit own product_feature content',
    'roles' => array(),
  );

  return $permissions;
}
