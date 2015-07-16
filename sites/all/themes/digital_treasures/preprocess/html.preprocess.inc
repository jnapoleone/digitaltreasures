<?php

function digital_treasures_preprocess_html( &$variables ) {

	drupal_add_js("//ajax.googleapis.com/ajax/libs/webfont/1.5.6/webfont.js",array('type'=>'external', 'every_page'=>TRUE,));
	drupal_add_js(" WebFont.load({ google: { families: ['Open Sans:normal,italic,bold,bolditalic', 'Cinzel:700'] } });", array( 'type' => 'inline', 'every_page' => TRUE, 'preprocess' => TRUE ));
  drupal_add_css('https://fonts.googleapis.com/icon?family=Material+Icons', array('type' => 'external', 'every_page' => TRUE));

  if($variables['is_admin'] === FALSE) {

    $google_webmaster_tools = array(

      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'google-site-verification',
        'content' => 'ZS-Ek9tx455368AiFbez-stOyIbrKiSSbg8_UpSfhj8',
      ),
    );
    drupal_add_html_head($google_webmaster_tools, 'google_webmaster_tools');
  }
}
