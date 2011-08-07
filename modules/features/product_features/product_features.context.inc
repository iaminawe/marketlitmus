<?php
/**
 * @file
 * feature_product_features.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function feature_product_features_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Product Features Home';
  $context->description = 'A listing page of all the features';
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
  t('A listing page of all the features');
  t('Features');
  $export['Product Features Home'] = $context;

  return $export;
}
