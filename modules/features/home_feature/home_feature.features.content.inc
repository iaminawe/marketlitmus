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
