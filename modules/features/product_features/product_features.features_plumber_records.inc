<?php
/**
 * @file
 * product_features.features_plumber_records.inc
 */

/**
 * Implementation of hook_features_plumber_defaults().
 */
function product_features_features_plumber_defaults() {
  $export = array();

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'product_features__dependencies__debut_media';
  $features_plumber_record->feature = 'product_features';
  $features_plumber_record->component = 'dependencies';
  $features_plumber_record->component_val = 'debut_media';
  $export['product_features__dependencies__debut_media'] = $features_plumber_record;

  return $export;
}
