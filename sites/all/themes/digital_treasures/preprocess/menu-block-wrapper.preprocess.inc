<?php

/**
 * Implements theme_preprocess_menu_block_wrapper
 *
 * @param $variables
 */
function digital_treasures_preprocess_menu_block_wrapper( &$variables ) {

  if ( $variables['delta'] == 'ctools-menu-video-formats-1') {
    $variables['classes_array'][] = 'services--menu';
    $theme_path = drupal_get_path( 'theme', 'digital_treasures' );
    drupal_add_js( $theme_path . '/js/digital-treasures.aside-scroll.js', array(
      'type'  => 'file',
      'scope' => 'footer'
    ));
  }

  if ( $variables['delta'] == 'ctools-main-menu-1') {

    $variables['classes_array'][] = 'main--menu';
  }

  if ( $variables['delta'] == 'ctools-menu-footer-menu-1') {

    $variables['classes_array'][] = 'footer--menu';
  }

  if ( $variables['delta'] == 'ctools-menu-articles-1') {

    $variables['classes_array'][] = 'articles--menu';
    $theme_path = drupal_get_path( 'theme', 'digital_treasures' );
    drupal_add_js( $theme_path . '/js/digital-treasures.aside-scroll.js', array(
      'type'  => 'file',
      'scope' => 'footer'
    ));
  }
}