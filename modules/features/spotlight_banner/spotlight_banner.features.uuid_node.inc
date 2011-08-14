<?php
/**
 * @file
 * spotlight_banner.features.uuid_node.inc
 */

/**
 * Implementation of hook_uuid_features_default_content().
 */
function spotlight_banner_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'The easiest fastest way to set up a site',
  'log' => '',
  'status' => '1',
  'comment' => '0',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '900282f5-26c5-5b84-b99d-6fcdc95bd8aa',
  'type' => 'spotlight',
  'language' => 'und',
  'created' => '1312522546',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '7f132bdd-61b8-fa34-0d22-21901fae0c87',
  'revision_uid' => '1',
  'field_spotlight_image' => array(
    'und' => array(
      0 => array(
        'fid' => '21',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'Screen Shot 2011-08-01 at 1.11.51 PM.png',
        'uri' => 'public://images/spotlight_images/Screen Shot 2011-08-01 at 1.11.51 PM.png',
        'filemime' => 'image/png',
        'filesize' => '263767',
        'status' => '1',
        'timestamp' => '1312522546',
        'type' => 'image',
      ),
    ),
  ),
  'field_spotlight_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.google.com',
        'title' => 'Find out more',
        'attributes' => array(),
      ),
    ),
  ),
  'field_spotlight_caption' => array(
    'und' => array(
      0 => array(
        'value' => 'In a matter of minutes you can be real world testing this amazing way to test if ideas have audiences',
        'format' => NULL,
        'safe_value' => 'In a matter of minutes you can be real world testing this amazing way to test if ideas have audiences',
      ),
    ),
  ),
  'machine_name' => 'samplecontent_spotlight1',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-08-04 22:35:46 -0700',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Manage multiple sites from the control panel',
  'log' => '',
  'status' => '1',
  'comment' => '0',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '80e70803-2f1f-b4c4-6169-16d074adf1a5',
  'type' => 'spotlight',
  'language' => 'und',
  'created' => '1312522697',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '849a7571-d9e5-4d74-9572-576e07e6be71',
  'revision_uid' => '1',
  'field_spotlight_image' => array(
    'und' => array(
      0 => array(
        'fid' => '22',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'Screen Shot 2011-08-01 at 12.10.15 PM.png',
        'uri' => 'public://images/spotlight_images/Screen Shot 2011-08-01 at 12.10.15 PM.png',
        'filemime' => 'image/png',
        'filesize' => '90366',
        'status' => '1',
        'timestamp' => '1312522697',
        'type' => 'image',
      ),
    ),
  ),
  'field_spotlight_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.facebook.com',
        'title' => 'Check it one two',
        'attributes' => array(),
      ),
    ),
  ),
  'field_spotlight_caption' => array(
    'und' => array(
      0 => array(
        'value' => 'Its easy to disable, delete, backup and export all sites on our platform',
        'format' => NULL,
        'safe_value' => 'Its easy to disable, delete, backup and export all sites on our platform',
      ),
    ),
  ),
  'machine_name' => 'samplecontent_spotlight2',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-08-04 22:38:17 -0700',
);
  return $nodes;
}
