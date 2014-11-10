<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Digital Treasures theme.
 */

function digital_treasures_html_head_alter( &$head_elements ) {

  $head_elements['omega-viewport']['#attributes'] = array (
    'name'          => 'viewport',
    'content'       => 'width=device-width',
    'initial-scale' => '1.0',
    'minimum-scale' => '1.0',
  );
}