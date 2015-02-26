<?php
/**
 * @file
 * happywedding.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function happywedding_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 4,
  );

  // Exported role: operator.
  $roles['operator'] = array(
    'name' => 'operator',
    'weight' => 5,
  );

  // Exported role: unverified user.
  $roles['unverified user'] = array(
    'name' => 'unverified user',
    'weight' => 1,
  );

  // Exported role: vendor.
  $roles['vendor'] = array(
    'name' => 'vendor',
    'weight' => 6,
  );

  return $roles;
}
