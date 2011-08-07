<?php
/**
 * @file
 * product_features.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function product_features_menu_default_menu_links() {
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
