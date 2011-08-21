<?php
/**
 * @file
 * home_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function home_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Sitewide';
  $context->description = 'A set of sitewide consistent elements like navigation and footer blocks defined in a context';
  $context->tag = 'All';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A set of sitewide consistent elements like navigation and footer blocks defined in a context');
  t('All');
  $export['Sitewide'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'The homepage context';
  $context->tag = 'Home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-spotlight-block' => array(
          'module' => 'views',
          'delta' => 'spotlight-block',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'boxes-home_introtext' => array(
          'module' => 'boxes',
          'delta' => 'home_introtext',
          'region' => 'preface',
          'weight' => '-10',
        ),
        'webform-client-block-12' => array(
          'module' => 'webform',
          'delta' => 'client-block-12',
          'region' => 'preface',
          'weight' => '-9',
        ),
        'views-features-block_1' => array(
          'module' => 'views',
          'delta' => 'features-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'node/12',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('The homepage context');
  $export['home'] = $context;

  return $export;
}
