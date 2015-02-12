<?php
/**
 * @file
 * happywedding.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function happywedding_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'operator',
  'mail' => 'operator@happywedding.life',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'filtered_html',
  'created' => 1422599621,
  'access' => 1423715669,
  'login' => 1423473327,
  'status' => 1,
  'timezone' => 'Asia/Bangkok',
  'language' => 'en',
  'picture' => NULL,
  'init' => 'operator@happywedding.life',
  'data' => FALSE,
  'uuid' => '61821618-8aae-4207-b2aa-b39a90932a43',
  'roles' => array(
    2 => 'authenticated user',
    5 => 'operator',
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  ),
  'date' => '2015-01-30 13:33:41 +0700',
);
  $users[] = array(
  'name' => 'editor',
  'mail' => 'editor@happywedding.life',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'filtered_html',
  'created' => 1422348781,
  'access' => 1423470259,
  'login' => 1423470259,
  'status' => 1,
  'timezone' => 'Asia/Bangkok',
  'language' => 'en',
  'picture' => NULL,
  'init' => 'editor@happywedding.life',
  'data' => FALSE,
  'uuid' => 'cc58125d-0d09-493a-b27d-e0c6857fd2ac',
  'roles' => array(
    2 => 'authenticated user',
    4 => 'editor',
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  ),
  'date' => '2015-01-27 15:53:01 +0700',
);
  return $users;
}
