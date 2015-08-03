<?php
/**
 * @file
 * digital_treasures_blog.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function digital_treasures_blog_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H1';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onerow_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8af88bc1-0c80-43f9-ba9e-548f65999e82';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-44ef48a6-4f2f-4b88-95c1-95e1813217a7';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '44ef48a6-4f2f-4b88-95c1-95e1813217a7';
    $display->content['new-44ef48a6-4f2f-4b88-95c1-95e1813217a7'] = $pane;
    $display->panels['left'][0] = 'new-44ef48a6-4f2f-4b88-95c1-95e1813217a7';
    $pane = new stdClass();
    $pane->pid = 'new-20a27e35-e72b-4799-a005-294407d70d72';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '20a27e35-e72b-4799-a005-294407d70d72';
    $display->content['new-20a27e35-e72b-4799-a005-294407d70d72'] = $pane;
    $display->panels['left'][1] = 'new-20a27e35-e72b-4799-a005-294407d70d72';
    $pane = new stdClass();
    $pane->pid = 'new-9cf45d66-6020-4cea-b2c6-0a6801856bc1';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9cf45d66-6020-4cea-b2c6-0a6801856bc1';
    $display->content['new-9cf45d66-6020-4cea-b2c6-0a6801856bc1'] = $pane;
    $display->panels['left'][2] = 'new-9cf45d66-6020-4cea-b2c6-0a6801856bc1';
    $pane = new stdClass();
    $pane->pid = 'new-c494115b-4d44-4ec9-a026-1ff044a8b836';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c494115b-4d44-4ec9-a026-1ff044a8b836';
    $display->content['new-c494115b-4d44-4ec9-a026-1ff044a8b836'] = $pane;
    $display->panels['left'][3] = 'new-c494115b-4d44-4ec9-a026-1ff044a8b836';
    $pane = new stdClass();
    $pane->pid = 'new-ff58a080-1a17-44e2-86f4-fa58918cc1b5';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ff58a080-1a17-44e2-86f4-fa58918cc1b5';
    $display->content['new-ff58a080-1a17-44e2-86f4-fa58918cc1b5'] = $pane;
    $display->panels['left'][4] = 'new-ff58a080-1a17-44e2-86f4-fa58918cc1b5';
    $pane = new stdClass();
    $pane->pid = 'new-6bfd6ee6-cf6d-4ff8-aa07-bd24d5ceac3e';
    $pane->panel = 'left';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6bfd6ee6-cf6d-4ff8-aa07-bd24d5ceac3e';
    $display->content['new-6bfd6ee6-cf6d-4ff8-aa07-bd24d5ceac3e'] = $pane;
    $display->panels['left'][5] = 'new-6bfd6ee6-cf6d-4ff8-aa07-bd24d5ceac3e';
    $pane = new stdClass();
    $pane->pid = 'new-fe548dd2-9207-4766-a897-53dd29915ee1';
    $pane->panel = 'right';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-articles',
      'parent_mlid' => 0,
      'parent' => 'menu-articles:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fe548dd2-9207-4766-a897-53dd29915ee1';
    $display->content['new-fe548dd2-9207-4766-a897-53dd29915ee1'] = $pane;
    $display->panels['right'][0] = 'new-fe548dd2-9207-4766-a897-53dd29915ee1';
    $pane = new stdClass();
    $pane->pid = 'new-f90f22cd-6731-4728-bc5a-a2c654e30955';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'ancestry_ca_banner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f90f22cd-6731-4728-bc5a-a2c654e30955';
    $display->content['new-f90f22cd-6731-4728-bc5a-a2c654e30955'] = $pane;
    $display->panels['right'][1] = 'new-f90f22cd-6731-4728-bc5a-a2c654e30955';
    $pane = new stdClass();
    $pane->pid = 'new-61270666-966b-4a61-9579-18f4094fe0ea';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-19';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'promo-banner--container',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61270666-966b-4a61-9579-18f4094fe0ea';
    $display->content['new-61270666-966b-4a61-9579-18f4094fe0ea'] = $pane;
    $display->panels['top'][0] = 'new-61270666-966b-4a61-9579-18f4094fe0ea';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-20a27e35-e72b-4799-a005-294407d70d72';
  $panelizer->display = $display;
  $export['node:article:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:one_row_two_columns';
  $panelizer->title = 'One Row, Two Columns';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H1';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onerow_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '192b7cf6-4d5b-4784-bfe2-a9a6eb4313f4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2aef76b5-5ab0-44d1-b812-902091fd60be';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2aef76b5-5ab0-44d1-b812-902091fd60be';
    $display->content['new-2aef76b5-5ab0-44d1-b812-902091fd60be'] = $pane;
    $display->panels['left'][0] = 'new-2aef76b5-5ab0-44d1-b812-902091fd60be';
    $pane = new stdClass();
    $pane->pid = 'new-669afc9c-db4b-4028-8775-185e2b0757b9';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '669afc9c-db4b-4028-8775-185e2b0757b9';
    $display->content['new-669afc9c-db4b-4028-8775-185e2b0757b9'] = $pane;
    $display->panels['left'][1] = 'new-669afc9c-db4b-4028-8775-185e2b0757b9';
    $pane = new stdClass();
    $pane->pid = 'new-99faa3a4-a7e0-48f6-ac19-f503870befd8';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '99faa3a4-a7e0-48f6-ac19-f503870befd8';
    $display->content['new-99faa3a4-a7e0-48f6-ac19-f503870befd8'] = $pane;
    $display->panels['left'][2] = 'new-99faa3a4-a7e0-48f6-ac19-f503870befd8';
    $pane = new stdClass();
    $pane->pid = 'new-9da3364d-978c-41b0-907a-9489f05cc799';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9da3364d-978c-41b0-907a-9489f05cc799';
    $display->content['new-9da3364d-978c-41b0-907a-9489f05cc799'] = $pane;
    $display->panels['left'][3] = 'new-9da3364d-978c-41b0-907a-9489f05cc799';
    $pane = new stdClass();
    $pane->pid = 'new-50b15d10-5de9-4294-a048-a7db5568ff78';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '50b15d10-5de9-4294-a048-a7db5568ff78';
    $display->content['new-50b15d10-5de9-4294-a048-a7db5568ff78'] = $pane;
    $display->panels['left'][4] = 'new-50b15d10-5de9-4294-a048-a7db5568ff78';
    $pane = new stdClass();
    $pane->pid = 'new-d8fd7cdf-c52a-496a-8880-105efe24ccc3';
    $pane->panel = 'left';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd8fd7cdf-c52a-496a-8880-105efe24ccc3';
    $display->content['new-d8fd7cdf-c52a-496a-8880-105efe24ccc3'] = $pane;
    $display->panels['left'][5] = 'new-d8fd7cdf-c52a-496a-8880-105efe24ccc3';
    $pane = new stdClass();
    $pane->pid = 'new-60f04784-0e18-4086-86f6-7c1fea56bc8c';
    $pane->panel = 'right';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-articles',
      'parent_mlid' => 0,
      'parent' => 'menu-articles:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '60f04784-0e18-4086-86f6-7c1fea56bc8c';
    $display->content['new-60f04784-0e18-4086-86f6-7c1fea56bc8c'] = $pane;
    $display->panels['right'][0] = 'new-60f04784-0e18-4086-86f6-7c1fea56bc8c';
    $pane = new stdClass();
    $pane->pid = 'new-e9cc725a-8fe9-474b-b2ff-04eb9e81ac8d';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'ancestry_ca_banner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e9cc725a-8fe9-474b-b2ff-04eb9e81ac8d';
    $display->content['new-e9cc725a-8fe9-474b-b2ff-04eb9e81ac8d'] = $pane;
    $display->panels['right'][1] = 'new-e9cc725a-8fe9-474b-b2ff-04eb9e81ac8d';
    $pane = new stdClass();
    $pane->pid = 'new-c87b85dc-c17d-4483-be11-a30d0e5d1e47';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-19';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'promo-banner--container',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c87b85dc-c17d-4483-be11-a30d0e5d1e47';
    $display->content['new-c87b85dc-c17d-4483-be11-a30d0e5d1e47'] = $pane;
    $display->panels['top'][0] = 'new-c87b85dc-c17d-4483-be11-a30d0e5d1e47';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-669afc9c-db4b-4028-8775-185e2b0757b9';
  $panelizer->display = $display;
  $export['node:article:one_row_two_columns'] = $panelizer;

  return $export;
}
