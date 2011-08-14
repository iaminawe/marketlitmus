<?php
/**
 * @file
 * home_feature.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function home_feature_content_defaults() {
$content = array();
$content['ctaemailaddress'] = (object)array(
  'exported_path' => 'e-mail-call-action',
  'webform' => array(
    'confirmation' => '<p>Thank you for submitting your e-mail.</p><p>We will be in touch as soon as we are ready to send out some more invitations</p>',
    'confirmation_format' => 'wysiwyg_editor',
    'redirect_url' => '<confirmation>',
    'status' => '1',
    'block' => '1',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '0',
    'submit_text' => 'Submit E-mail',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(),
    'components' => array(
      0 => array(
        'pid' => '0',
        'form_key' => 'first_name',
        'name' => 'First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'width' => '10',
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '1',
        'page_num' => 1,
      ),
      1 => array(
        'pid' => '0',
        'form_key' => 'last_name',
        'name' => 'Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'width' => '10',
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '2',
        'page_num' => 1,
      ),
      2 => array(
        'pid' => '0',
        'form_key' => 'e_mail_address',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'width' => '30',
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '3',
        'page_num' => 1,
      ),
    ),
  ),
  'title' => 'Leave your e-mail',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'webform',
  'language' => 'und',
  'created' => '1313091115',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'ctaemailaddress',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Please leave your e-mail address if you are interested in being invited to our private beta</p>
',
        'summary' => '',
        'format' => 'wysiwyg_editor',
        'safe_value' => ' <p>
	Please leave your e-mail address if you are interested in being invited to our private beta</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
);
$content['donotdelete_home'] = (object)array(
  'exported_path' => 'home',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/donotdelete_home',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'identifier' => 'main-menu:node-name/donotdelete_home',
  ),
  'title' => 'Home',
  'status' => '1',
  'promote' => '1',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1312520180',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'donotdelete_home',
  'body' => array(),
);
$content['samplecontent_home'] = (object)array(
  'exported_path' => 'home',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/donotdelete_home',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'identifier' => 'main-menu:node-name/donotdelete_home',
  ),
  'title' => 'Home',
  'status' => '1',
  'promote' => '1',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1312520180',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'donotdelete_home',
  'body' => array(),
);
return $content;
}
