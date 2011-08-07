<?php

/**
 * Implementation of hook_default_box().
 */
function simple_config_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'welcome';
  $box->plugin_key = 'simple';
  $box->title = 'Welcome to Market Litmus';
  $box->description = 'Welcome box';
  $box->options = array(
    'body' => array(
      'value' => 'Congratulations on launching your new site using market litmus. Please make sure to read some of our helpful support guides to undestand how to get the most out of your mini-sales site',
      'format' => 'markdown',
    ),
  );
  $export['welcome'] = $box;

  return $export;
}
