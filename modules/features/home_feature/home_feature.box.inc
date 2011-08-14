<?php
/**
 * @file
 * home_feature.box.inc
 */

/**
 * Implements hook_default_box().
 */
function home_feature_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_introtext';
  $box->plugin_key = 'simple';
  $box->title = 'Welcome';
  $box->description = 'Intro text';
  $box->options = array(
    'body' => array(
      'value' => 'Use this introductory paragraph to introduce your product or service. Try keep this compact and to the point and focus on highlighting your products unique value proposition.',
      'format' => 'plain_text',
    ),
  );
  $export['home_introtext'] = $box;

  return $export;
}
