<?php
/**
 * @file
 * product_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function product_features_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_features';
  $context->description = 'A context for the main product features page';
  $context->tag = 'Features';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'features:page' => 'features:page',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'features',
    'menu' => 'features',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context for the main product features page');
  t('Features');
  $export['product_features'] = $context;

  return $export;
}
