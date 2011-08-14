<?php
/**
 * @file
 * product_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function product_features_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'features';
  $view->description = 'A listing of product features as a carousel, a page list and a block';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Features';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = '';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['auto'] = '5';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_feature' => 'product_feature',
  );

  /* Display: Product Features Page */
  $handler = $view->new_display('page', 'Product Features Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Product Features';
  $handler->display->display_options['display_description'] = 'A listing of product features';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'feature-item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'features';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Features';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Product Features grid */
  $handler = $view->new_display('block', 'Product Features grid', 'block');
  $handler->display->display_options['display_description'] = 'A grid block of  6 features for the home page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: FeaturesCarousel */
  $handler = $view->new_display('block', 'FeaturesCarousel', 'block_1');
  $handler->display->display_options['display_description'] = 'A carousel block of 4 features';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_feature_icon']['id'] = 'field_feature_icon';
  $handler->display->display_options['fields']['field_feature_icon']['table'] = 'field_data_field_feature_icon';
  $handler->display->display_options['fields']['field_feature_icon']['field'] = 'field_feature_icon';
  $handler->display->display_options['fields']['field_feature_icon']['label'] = '';
  $handler->display->display_options['fields']['field_feature_icon']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_feature_icon']['element_class'] = 'feature-icon';
  $handler->display->display_options['fields']['field_feature_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_icon']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_feature_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_feature_icon']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $export['features'] = $view;

  return $export;
}
