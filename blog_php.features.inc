<?php
/**
 * @file
 * blog_php.features.inc
 */

/**
 * Implements hook_node_info().
 */
function blog_php_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Blog'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
