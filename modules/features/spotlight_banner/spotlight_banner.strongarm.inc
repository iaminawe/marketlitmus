<?php
/**
 * @file
 * spotlight_banner.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function spotlight_banner_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_spotlight';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_spotlight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_spotlight';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_spotlight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_spotlight';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_spotlight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_spotlight';
  $strongarm->value = '0';
  $export['node_preview_spotlight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_spotlight';
  $strongarm->value = 0;
  $export['node_submitted_spotlight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_spotlight';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_spotlight'] = $strongarm;

  return $export;
}
