<?php
/**
 * @file
 * debut_wysiwyg.features.filter.inc
 */

/**
 * Implementation of hook_filter_default_formats().
 */
function debut_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Manager CK Editor profile

  $formats['manager'] = array(
    'format' => 'manager',
    'name' => 'Manager',
    'cache' => '1',
    'status' => '1',
    'weight' => '-8',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br> <u> <h2> <h3> <h4><img><div><table><td><tr><th>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
    ),
  );

  return $formats;
}
