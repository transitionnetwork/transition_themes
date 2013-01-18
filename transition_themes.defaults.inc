<?php

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _transition_themes_user_default_permissions() {
  $permissions = array();

  // Exported permission: create topic content
  $permissions[] = array(
    'name' => 'create topic content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete any topic content
  $permissions[] = array(
    'name' => 'delete any topic content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: delete own topic content
  $permissions[] = array(
    'name' => 'delete own topic content',
    'roles' => array(
      '0' => 'site editor',
    ),
  );

  // Exported permission: edit any topic content
  $permissions[] = array(
    'name' => 'edit any topic content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit field_themes
  $permissions[] = array(
    'name' => 'edit field_themes',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'developer',
      '2' => 'site administrator',
      '3' => 'site editor',
    ),
  );

  // Exported permission: edit own topic content
  $permissions[] = array(
    'name' => 'edit own topic content',
    'roles' => array(
      '0' => 'site editor',
    ),
  );

  // Exported permission: view field_themes
  $permissions[] = array(
    'name' => 'view field_themes',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'group admin',
      '4' => 'pre-authorised',
      '5' => 'site administrator',
      '6' => 'site editor',
      '7' => 'voices blogger',
    ),
  );

  return $permissions;
}
