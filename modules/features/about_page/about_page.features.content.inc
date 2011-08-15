<?php
/**
 * @file
 * about_page.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function about_page_content_defaults() {
$content = array();
$content['samplecontent_about'] = (object)array(
  'exported_path' => 'about',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/samplecontent_about',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'identifier' => 'main-menu:node-name/samplecontent_about',
  ),
  'title' => 'About',
  'status' => '1',
  'promote' => '1',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1312518468',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'samplecontent_about',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>
	Who?</h2>
<p>
	Assertively maintain innovative communities through extensive methodologies. Authoritatively create interactive benefits before ethical strategic theme areas. Distinctively productivate front-end paradigms without performance based methods of empowerment.</p>
<h2>
	How?</h2>
<p>
	Rapidiously coordinate error-free potentialities and extensive technologies. Continually cultivate efficient catalysts for change before pandemic web services. Seamlessly visualize state of the art manufactured products with end-to-end best practices.</p>
<h2>
	Why?</h2>
<p>
	Completely grow bleeding-edge resources vis-a-vis timely internal or &quot;organic&quot; sources. Distinctively leverage other&#39;s bleeding-edge methods of empowerment vis-a-vis leading-edge outsourcing. Assertively harness quality experiences via interoperable web-readiness.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_editor',
        'safe_value' => ' <h2>
	Who?</h2>
<p>
	Assertively maintain innovative communities through extensive methodologies. Authoritatively create interactive benefits before ethical strategic theme areas. Distinctively productivate front-end paradigms without performance based methods of empowerment.</p>
<h2>
	How?</h2>
<p>
	Rapidiously coordinate error-free potentialities and extensive technologies. Continually cultivate efficient catalysts for change before pandemic web services. Seamlessly visualize state of the art manufactured products with end-to-end best practices.</p>
<h2>
	Why?</h2>
<p>
	Completely grow bleeding-edge resources vis-a-vis timely internal or &quot;organic&quot; sources. Distinctively leverage other&#39;s bleeding-edge methods of empowerment vis-a-vis leading-edge outsourcing. Assertively harness quality experiences via interoperable web-readiness.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
);
return $content;
}
