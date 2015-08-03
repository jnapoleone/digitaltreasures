<?php
/**
 * @file
 * digital_treasures_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function digital_treasures_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = 'A page that displays the Blog view of <em>Article</em> teasers and a sidebar menu of article titles.';
  $page->path = 'blog';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => 'no-sidebars one-sidebar',
    'body_classes_to_add' => 'sidebar-second',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'The Digital Treasures Blog | Digital Treasures Toronto | Digital Treasures',
        ),
        'description' => array(
          'value' => 'Find out the latest tips and advice from the Digital Treasures Blog.  Lots of great information on our blog.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'naked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '80c0f489-4652-45e9-a3da-e0446e2ae2d8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-832d2295-35a4-40ee-bf33-33b2808e713a';
    $pane->panel = 'content';
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
    $pane->uuid = '832d2295-35a4-40ee-bf33-33b2808e713a';
    $display->content['new-832d2295-35a4-40ee-bf33-33b2808e713a'] = $pane;
    $display->panels['content'][0] = 'new-832d2295-35a4-40ee-bf33-33b2808e713a';
    $pane = new stdClass();
    $pane->pid = 'new-43f4f24a-ce1e-467b-a0f8-45c406a72a21';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '43f4f24a-ce1e-467b-a0f8-45c406a72a21';
    $display->content['new-43f4f24a-ce1e-467b-a0f8-45c406a72a21'] = $pane;
    $display->panels['content'][1] = 'new-43f4f24a-ce1e-467b-a0f8-45c406a72a21';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-43f4f24a-ce1e-467b-a0f8-45c406a72a21';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  return $pages;

}
