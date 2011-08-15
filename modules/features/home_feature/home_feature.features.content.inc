<?php
/**
 * @file
 * home_feature.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function home_feature_content_defaults() {
$content = array();
$content['page_home'] = (object)array(
  'exported_path' => 'home',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/donotdelete_home',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'identifier' => 'main-menu:node-name/donotdelete_home',
  ),
  'title' => 'Home',
  'status' => '1',
  'promote' => '1',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1312520180',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'donotdelete_home',
  'body' => array(),
);
return $content;
}
