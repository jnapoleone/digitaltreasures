<?php
/**
 * @file
 * site_template_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function site_template_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-site_tmpl_articles_button'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'site_tmpl_articles_button',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'digital_treasures' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'digital_treasures',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-site_tmpl_footer_menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'site_tmpl_footer_menu',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'digital_treasures' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'digital_treasures',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-site_tmpl_main_menu_button'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'site_tmpl_main_menu_button',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'digital_treasures' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'digital_treasures',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-site_tmpl_services_button'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'site_tmpl_services_button',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'digital_treasures' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'digital_treasures',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-site_tmpl_site_logo'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'site_tmpl_site_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'digital_treasures' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'digital_treasures',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-site_tmpl_social_branding'] = array(
    'cache' => -1,
    'css_class' => 'social-networking-badges',
    'custom' => 0,
    'machine_name' => 'site_tmpl_social_branding',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'digital_treasures' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'digital_treasures',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-site_tmpl_social_header'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'site_tmpl_social_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'digital_treasures' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'digital_treasures',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-site_tmpl_vendor_logos'] = array(
    'cache' => -1,
    'css_class' => 'vendor-logos',
    'custom' => 0,
    'machine_name' => 'site_tmpl_vendor_logos',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'digital_treasures' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'digital_treasures',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
