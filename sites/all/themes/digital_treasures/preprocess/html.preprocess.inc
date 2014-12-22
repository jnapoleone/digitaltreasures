<?php

function digital_treasures_preprocess_html( &$variables ) {

	drupal_add_js("//ajax.googleapis.com/ajax/libs/webfont/1.5.6/webfont.js",array('type'=>'external', 'every_page'=>TRUE,));
	drupal_add_js(" WebFont.load({ google: { families: ['Open Sans:normal,italic,bold,bolditalic', 'Cinzel:700'] } });", array( 'type' => 'inline', 'every_page' => TRUE, 'preprocess' => TRUE ));
}
