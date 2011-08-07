<?php
/**
 * @file
 * product_features.features.uuid_node.inc
 */

/**
 * Implementation of hook_uuid_features_default_content().
 */
function product_features_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Amazing Feature #2',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => 'a7b6210a-8933-8174-fd3a-409732aebb84',
  'type' => 'product_feature',
  'language' => 'und',
  'created' => '1312180086',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '110abf98-5728-26b4-d939-bb8ab084aa8c',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Phosfluorescently supply extensible relationships rather than optimal paradigms. Globally syndicate enterprise benefits via maintainable communities. Interactively whiteboard intermandated vortals rather than turnkey functionalities. Energistically e-enable real-time platforms and magnetic ideas. Distinctively pursue seamless outsourcing through functionalized action items. Dramatically redefine economically sound value rather than error-free &quot;outside the box&quot; thinking. Globally optimize value-added materials and client-centered action items. Continually e-enable dynamic services without sticky relationships. Globally procrastinate future-proof expertise through error-free technology.</p>
',
        'summary' => '<p>
	Phosfluorescently supply extensible relationships rather than optimal paradigms. Globally syndicate enterprise benefits via maintainable communities. Interactively whiteboard intermandated vortals rather than turnkey functionalities.</p>
',
        'format' => 'wysiwyg_editor',
        'safe_value' => ' <p>
	Phosfluorescently supply extensible relationships rather than optimal paradigms. Globally syndicate enterprise benefits via maintainable communities. Interactively whiteboard intermandated vortals rather than turnkey functionalities. Energistically e-enable real-time platforms and magnetic ideas. Distinctively pursue seamless outsourcing through functionalized action items. Dramatically redefine economically sound value rather than error-free &quot;outside the box&quot; thinking. Globally optimize value-added materials and client-centered action items. Continually e-enable dynamic services without sticky relationships. Globally procrastinate future-proof expertise through error-free technology.</p>
 ',
        'safe_summary' => ' <p>
	Phosfluorescently supply extensible relationships rather than optimal paradigms. Globally syndicate enterprise benefits via maintainable communities. Interactively whiteboard intermandated vortals rather than turnkey functionalities.</p>
 ',
      ),
    ),
  ),
  'field_feature_icon' => array(
    'und' => array(
      0 => array(
        'fid' => '6',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'down.png',
        'uri' => 'public://icons/down.png',
        'filemime' => 'image/png',
        'filesize' => '4992',
        'status' => '1',
        'timestamp' => '1312227296',
        'type' => 'image',
        'uuid' => 'fb616db6-ab1c-5ba4-5131-1ed617c21883',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_feature_screenshots' => array(
    'und' => array(
      0 => array(
        'fid' => '7',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'Screen Shot 2011-08-01 at 12.13.27 PM.png',
        'uri' => 'public://Screen Shot 2011-08-01 at 12.13.27 PM.png',
        'filemime' => 'image/png',
        'filesize' => '130617',
        'status' => '1',
        'timestamp' => '1312227296',
        'type' => 'image',
        'uuid' => 'f2e6a7c2-5eed-6f54-6921-52816e6303e0',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_feature_benefit1' => array(
    'und' => array(
      0 => array(
        'value' => 'Dramatically unleash bricks-and-clicks e-tailers via scalable deliverables. Distinctively expedite optimal deliverables before parallel expertise. Competently deliver client-based systems via top-line leadership skills. ',
        'format' => NULL,
        'safe_value' => 'Dramatically unleash bricks-and-clicks e-tailers via scalable deliverables. Distinctively expedite optimal deliverables before parallel expertise. Competently deliver client-based systems via top-line leadership skills. ',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1312180086',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-07-31 23:28:06 -0700',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Amazing Feature #4',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => 'f04142bf-fdc6-56e4-3d4a-cfdaffba596a',
  'type' => 'product_feature',
  'language' => 'und',
  'created' => '1312180150',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '3cbfda51-1289-56e4-45fe-5c5037fbb8b8',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Rapidiously communicate performance based potentialities and multimedia based functionalities. Assertively matrix B2B schemas through enabled infrastructures. Distinctively productize exceptional users whereas cost effective services. Conveniently communicate web-enabled total linkage rather than collaborative resources. Phosfluorescently engage high-payoff innovation and adaptive imperatives. Proactively integrate vertical convergence before functional metrics. Appropriately e-enable client-centric imperatives before exceptional applications. Conveniently transform cost effective ideas vis-a-vis multimedia based e-commerce. Quickly reinvent stand-alone infomediaries vis-a-vis client-centered schemas.</p>
',
        'summary' => '<p>
	Rapidiously communicate performance based potentialities and multimedia based functionalities. Assertively matrix B2B schemas through enabled infrastructures. Distinctively productize exceptional users whereas cost effective services.</p>
',
        'format' => 'wysiwyg_editor',
        'safe_value' => ' <p>
	Rapidiously communicate performance based potentialities and multimedia based functionalities. Assertively matrix B2B schemas through enabled infrastructures. Distinctively productize exceptional users whereas cost effective services. Conveniently communicate web-enabled total linkage rather than collaborative resources. Phosfluorescently engage high-payoff innovation and adaptive imperatives. Proactively integrate vertical convergence before functional metrics. Appropriately e-enable client-centric imperatives before exceptional applications. Conveniently transform cost effective ideas vis-a-vis multimedia based e-commerce. Quickly reinvent stand-alone infomediaries vis-a-vis client-centered schemas.</p>
 ',
        'safe_summary' => ' <p>
	Rapidiously communicate performance based potentialities and multimedia based functionalities. Assertively matrix B2B schemas through enabled infrastructures. Distinctively productize exceptional users whereas cost effective services.</p>
 ',
      ),
    ),
  ),
  'field_feature_icon' => array(
    'und' => array(
      0 => array(
        'fid' => '10',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'folder.png',
        'uri' => 'public://icons/folder.png',
        'filemime' => 'image/png',
        'filesize' => '4923',
        'status' => '1',
        'timestamp' => '1312227471',
        'type' => 'image',
        'uuid' => '144ddb94-fe14-3d74-a92f-8d49b16d98fa',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_feature_screenshots' => array(
    'und' => array(
      0 => array(
        'fid' => '11',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'Screen Shot 2011-08-01 at 12.13.27 PM.png',
        'uri' => 'public://Screen Shot 2011-08-01 at 12.13.27 PM_0.png',
        'filemime' => 'image/png',
        'filesize' => '130617',
        'status' => '1',
        'timestamp' => '1312227471',
        'type' => 'image',
        'uuid' => '092b6e82-9845-b244-9d8e-52c1266c7dd0',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_feature_benefit1' => array(
    'und' => array(
      0 => array(
        'value' => 'Quickly create flexible ideas for visionary systems. Competently build turnkey testing procedures through next-generation internal or "organic" sources. Objectively fashion best-of-breed e-business before an expanded array of action items.',
        'format' => NULL,
        'safe_value' => 'Quickly create flexible ideas for visionary systems. Competently build turnkey testing procedures through next-generation internal or &quot;organic&quot; sources. Objectively fashion best-of-breed e-business before an expanded array of action items.',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1312180150',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-07-31 23:29:10 -0700',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Amazing Feature #3',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '9dc03090-b50a-bd04-45d5-1c2b98ae10b3',
  'type' => 'product_feature',
  'language' => 'und',
  'created' => '1312181307',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '6ea8a8f9-5c7a-65e4-9156-b17e8ab40903',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets. Credibly maximize interdependent architectures for synergistic e-markets. Monotonectally create team building benefits via multimedia based sources. Dramatically supply end-to-end &quot;outside the box&quot; thinking vis-a-vis excellent processes. Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets. Credibly maximize interdependent architectures for synergistic e-markets. Monotonectally create team building benefits via multimedia based sources. Dramatically supply end-to-end &quot;outside the box&quot; thinking vis-a-vis excellent processes.</p>
',
        'summary' => '<p>
	Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets.</p>
',
        'format' => 'wysiwyg_editor',
        'safe_value' => ' <p>
	Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets. Credibly maximize interdependent architectures for synergistic e-markets. Monotonectally create team building benefits via multimedia based sources. Dramatically supply end-to-end &quot;outside the box&quot; thinking vis-a-vis excellent processes. Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets. Credibly maximize interdependent architectures for synergistic e-markets. Monotonectally create team building benefits via multimedia based sources. Dramatically supply end-to-end &quot;outside the box&quot; thinking vis-a-vis excellent processes.</p>
 ',
        'safe_summary' => ' <p>
	Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets.</p>
 ',
      ),
    ),
  ),
  'field_feature_icon' => array(
    'und' => array(
      0 => array(
        'fid' => '8',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'mail_accept.png',
        'uri' => 'public://icons/mail_accept.png',
        'filemime' => 'image/png',
        'filesize' => '2070',
        'status' => '1',
        'timestamp' => '1312227357',
        'type' => 'image',
        'uuid' => '4ab61d12-8377-a5f4-7dc9-c475a717f56f',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_feature_screenshots' => array(
    'und' => array(
      0 => array(
        'fid' => '9',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'Screen Shot 2011-08-01 at 12.10.15 PM.png',
        'uri' => 'public://Screen Shot 2011-08-01 at 12.10.15 PM_1.png',
        'filemime' => 'image/png',
        'filesize' => '90366',
        'status' => '1',
        'timestamp' => '1312227357',
        'type' => 'image',
        'uuid' => 'bfcd3c3f-b7e7-4db4-6117-d38b5905e3fe',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_feature_benefit1' => array(
    'und' => array(
      0 => array(
        'value' => 'Appropriately maintain value-added sources and customized methods of empowerment. Conveniently plagiarize unique products via cross-unit schemas.',
        'format' => NULL,
        'safe_value' => 'Appropriately maintain value-added sources and customized methods of empowerment. Conveniently plagiarize unique products via cross-unit schemas.',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1312181307',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-07-31 23:48:27 -0700',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Amazing Feature #1',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '6a9255dc-640d-4564-9127-8ecf76f2188e',
  'type' => 'product_feature',
  'language' => 'und',
  'created' => '1312178946',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '6fcc3b74-42f7-53b4-bdb6-b3a8d2a48a81',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets. Credibly maximize interdependent architectures for synergistic e-markets. Monotonectally create team building benefits via multimedia based sources. Dramatically supply end-to-end &quot;outside the box&quot; thinking vis-a-vis excellent processes. Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets. Credibly maximize interdependent architectures for synergistic e-markets. Monotonectally create team building benefits via multimedia based sources. Dramatically supply end-to-end &quot;outside the box&quot; thinking vis-a-vis excellent processes.</p>
',
        'summary' => '<p>
	Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets.</p>
',
        'format' => 'wysiwyg_editor',
        'safe_value' => ' <p>
	Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets. Credibly maximize interdependent architectures for synergistic e-markets. Monotonectally create team building benefits via multimedia based sources. Dramatically supply end-to-end &quot;outside the box&quot; thinking vis-a-vis excellent processes. Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets. Credibly maximize interdependent architectures for synergistic e-markets. Monotonectally create team building benefits via multimedia based sources. Dramatically supply end-to-end &quot;outside the box&quot; thinking vis-a-vis excellent processes.</p>
 ',
        'safe_summary' => ' <p>
	Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets.</p>
 ',
      ),
    ),
  ),
  'field_feature_icon' => array(),
  'field_feature_screenshots' => array(
    'und' => array(
      0 => array(
        'fid' => '4',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'Screen Shot 2011-08-01 at 12.10.15 PM.png',
        'uri' => 'public://Screen Shot 2011-08-01 at 12.10.15 PM.png',
        'filemime' => 'image/png',
        'filesize' => '90366',
        'status' => '1',
        'timestamp' => '1312225856',
        'type' => 'image',
        'uuid' => 'c4c63a16-9cf8-a754-0123-2dd6304083bf',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_feature_benefit1' => array(
    'und' => array(
      0 => array(
        'value' => 'Appropriately maintain value-added sources and customized methods of empowerment. Conveniently plagiarize unique products via cross-unit schemas.',
        'format' => NULL,
        'safe_value' => 'Appropriately maintain value-added sources and customized methods of empowerment. Conveniently plagiarize unique products via cross-unit schemas.',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1312178946',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-07-31 23:09:06 -0700',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Amazing Feature #5',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '5c8ccce5-658a-6cc4-c18e-7fb615e96254',
  'type' => 'product_feature',
  'language' => 'und',
  'created' => '1312180202',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'eef30193-dca8-e7a4-ed59-1ea42d438c76',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Quickly redefine user friendly relationships and sticky collaboration and idea-sharing. Intrinsicly architect top-line imperatives vis-a-vis cooperative communities. Synergistically exploit exceptional paradigms for enterprise metrics. Collaboratively deliver impactful results and state of the art scenarios. Globally mesh superior leadership skills after flexible e-markets. Rapidiously supply resource-leveling strategic theme areas vis-a-vis robust internal or &quot;organic&quot; sources. Phosfluorescently enhance sticky methods of empowerment for equity invested models. Completely evolve revolutionary intellectual capital for client-centered products. Competently disseminate top-line intellectual capital whereas cross functional metrics. Globally unleash exceptional technologies vis-a-vis high-quality portals. Progressively network 24/7 e-commerce and ubiquitous quality vectors. Efficiently e-enable world-class convergence before extensible customer service.</p>
',
        'summary' => '<p>
	Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets.</p>
',
        'format' => 'wysiwyg_editor',
        'safe_value' => ' <p>
	Quickly redefine user friendly relationships and sticky collaboration and idea-sharing. Intrinsicly architect top-line imperatives vis-a-vis cooperative communities. Synergistically exploit exceptional paradigms for enterprise metrics. Collaboratively deliver impactful results and state of the art scenarios. Globally mesh superior leadership skills after flexible e-markets. Rapidiously supply resource-leveling strategic theme areas vis-a-vis robust internal or &quot;organic&quot; sources. Phosfluorescently enhance sticky methods of empowerment for equity invested models. Completely evolve revolutionary intellectual capital for client-centered products. Competently disseminate top-line intellectual capital whereas cross functional metrics. Globally unleash exceptional technologies vis-a-vis high-quality portals. Progressively network 24/7 e-commerce and ubiquitous quality vectors. Efficiently e-enable world-class convergence before extensible customer service.</p>
 ',
        'safe_summary' => ' <p>
	Credibly revolutionize mission-critical niches vis-a-vis real-time relationships. Seamlessly cultivate accurate paradigms via state of the art mindshare. Appropriately target future-proof infrastructures without proactive e-markets.</p>
 ',
      ),
    ),
  ),
  'field_feature_icon' => array(
    'und' => array(
      0 => array(
        'fid' => '12',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'info.png',
        'uri' => 'public://icons/info.png',
        'filemime' => 'image/png',
        'filesize' => '1561',
        'status' => '1',
        'timestamp' => '1312227749',
        'type' => 'image',
        'uuid' => 'a188085c-4604-71a4-410a-2609ecb2d539',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_feature_screenshots' => array(
    'und' => array(
      0 => array(
        'fid' => '13',
        'alt' => '',
        'title' => '',
        'uid' => '1',
        'filename' => 'Screen Shot 2011-08-01 at 12.13.27 PM.png',
        'uri' => 'public://Screen Shot 2011-08-01 at 12.13.27 PM_1.png',
        'filemime' => 'image/png',
        'filesize' => '130617',
        'status' => '1',
        'timestamp' => '1312227749',
        'type' => 'image',
        'uuid' => 'd94a6e1f-7679-0394-e177-2e0edded6613',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_feature_benefit1' => array(
    'und' => array(
      0 => array(
        'value' => 'Proactively promote worldwide communities for unique quality vectors. Enthusiastically strategize functionalized quality vectors and ubiquitous bandwidth. Competently envisioneer exceptional data without just in time action items. ',
        'format' => NULL,
        'safe_value' => 'Proactively promote worldwide communities for unique quality vectors. Enthusiastically strategize functionalized quality vectors and ubiquitous bandwidth. Competently envisioneer exceptional data without just in time action items. ',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1312180202',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-07-31 23:30:02 -0700',
);
  return $nodes;
}
