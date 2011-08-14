<?php
/**
 * @file
 * spotlight_banner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spotlight_banner_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'spotlight';
  $view->description = 'A views slideshow for the home page product spotlight area';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotlight';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Spotlight Image */
  $handler->display->display_options['fields']['field_spotlight_image']['id'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['table'] = 'field_data_field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['field'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_spotlight_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotlight_image']['settings'] = array(
    'image_style' => 'spotlight_imagestyle',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_spotlight_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_spotlight_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_spotlight_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_spotlight_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_spotlight_caption']['id'] = 'field_spotlight_caption';
  $handler->display->display_options['fields']['field_spotlight_caption']['table'] = 'field_data_field_spotlight_caption';
  $handler->display->display_options['fields']['field_spotlight_caption']['field'] = 'field_spotlight_caption';
  $handler->display->display_options['fields']['field_spotlight_caption']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_caption']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_spotlight_caption']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['field_spotlight_caption']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_spotlight_caption']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_spotlight_caption']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['field_spotlight_caption']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'spotlight' => 'spotlight',
  );

  /* Display: Spotlight Slideshow */
  $handler = $view->new_display('block', 'Spotlight Slideshow', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'slideshowtest';
  $export['spotlight'] = $view;

  return $export;
}
