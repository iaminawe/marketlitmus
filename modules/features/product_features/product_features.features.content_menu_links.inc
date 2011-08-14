<?php
/**
 * @file
 * product_features.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function product_features_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:features
  $menu_links['main-menu:features'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'features',
    'router_path' => 'features',
    'link_title' => 'Features',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Features');


  return $menu_links;
}
