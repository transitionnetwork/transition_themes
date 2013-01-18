<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _transition_themes_node_info() {
  $items = array(
    'topic' => array(
      'name' => t('Theme'),
      'module' => 'features',
      'description' => t('A Transition Town <em>theme</em> that holds related information and is referred from all over the site.'),
      'has_title' => '1',
      'title_label' => t('Theme Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
