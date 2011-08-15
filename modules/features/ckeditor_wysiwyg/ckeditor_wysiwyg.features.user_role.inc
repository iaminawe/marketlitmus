<?php
/**
 * @file
 * ckeditor_wysiwyg.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ckeditor_wysiwyg_user_default_roles() {
  $roles = array();

  // Exported role: manager
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => '5',
    'uuid' => '35cd43d9-0c24-ae74-7516-f1d96947915d',
  );

  return $roles;
}
