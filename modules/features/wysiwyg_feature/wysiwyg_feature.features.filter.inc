<?php
/**
 * @file
 * wysiwyg_feature.features.filter.inc
 */

/**
 * Implementation of hook_filter_default_formats().
 */
function wysiwyg_feature_filter_default_formats() {
  $formats = array();

  
  // Exported format: Wysiwyg editor
  $formats['wysiwyg_manager'] = array(
    'format' => 'wysiwyg_manager',
    'name' => 'Site Content',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br> <u> <h2> <h3> <h4> <table> <thead> <tbody> <tr> <td><img>',
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
      'media_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
