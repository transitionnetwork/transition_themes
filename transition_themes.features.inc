<?php

/**
 * Implementation of hook_node_info().
 */
function transition_themes_node_info() {
  module_load_include('inc', 'transition_themes', 'transition_themes.features.node');
  $args = func_get_args();
  return call_user_func_array('_transition_themes_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function transition_themes_user_default_permissions() {
  module_load_include('inc', 'transition_themes', 'transition_themes.defaults');
  $args = func_get_args();
  return call_user_func_array('_transition_themes_user_default_permissions', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function transition_themes_views_default_views() {
  module_load_include('inc', 'transition_themes', 'transition_themes.features.views');
  $args = func_get_args();
  return call_user_func_array('_transition_themes_views_default_views', $args);
}
