<?php
/**
 * @file
 * wysiwyg_feature.features.inc
 */

/**
 * Implementation of hook_default_wysiwyg_profile().
 */
function wysiwyg_feature_default_wysiwyg_profile() {
  $items = array();
  $items['wysiwyg_manager'] = entity_import('wysiwyg_profile', '{
    "format" : "wysiwyg_manager",
    "editor" : "ckeditor",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 1,
      "theme" : "advanced",
      "language" : "en",
      "buttons" : {
        "default" : {
          "Bold" : 1,
          "Italic" : 1,
          "Underline" : 1,
          "BulletedList" : 1,
          "NumberedList" : 1,
          "Outdent" : 1,
          "Indent" : 1,
          "Link" : 1,
          "Unlink" : 1,
          "PasteText" : 1,
          "Format" : 1,
          "Table" : 1
        },
        "drupal" : { "media" : 1 }
      },
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "bottom",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 1,
      "apply_source_formatting" : 0,
      "paste_auto_cleanup_on_paste" : 0,
      "block_formats" : "h2,h3,h4,",
      "css_setting" : "theme",
      "css_path" : "",
      "css_classes" : ""
    },
    "rdf_mapping" : []
  }');
    return $items;
}
