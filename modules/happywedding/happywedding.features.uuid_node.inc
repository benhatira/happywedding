<?php
/**
 * @file
 * happywedding.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function happywedding_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Contact us',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'webform',
  'language' => 'en',
  'created' => 1424069210,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '75c8778b-fe2d-4bec-b7d3-01f34045e14c',
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
  'translations' => array(
    'original' => NULL,
    'data' => array(),
  ),
  'webform' => array(
    'nid' => 107,
    'next_serial' => 4,
    'confirmation' => '<p>Your message has been submitted.</p>',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => '<none>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'filtered_html',
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 2,
      1 => 6,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 107,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 107,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '[current-user:mail]',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 107,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'message',
        'name' => 'Message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 107,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'type_of_question',
        'name' => 'Type of question',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'general|General inquiries
ads|About advertisement
website|Website issue',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 1,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'comment_count' => 0,
  'date' => '2015-02-16 13:46:50 +0700',
  'user_uuid' => '095ea6d2-23ae-434b-9a04-ad8004aa52b3',
);
  return $nodes;
}
