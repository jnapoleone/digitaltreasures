<?php
/**
 * @file
 * site_template_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function site_template_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site template Articles button';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'site_tmpl_articles_button';
  $fe_block_boxes->body = '<div class="articles-menu__link">Articles</div>';

  $export['site_tmpl_articles_button'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site template footer menu';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'site_tmpl_footer_menu';
  $fe_block_boxes->body = '<nav class="footer--menu">
  <ul class="menu">
    <li class="menu--list-item leaf odd first">
      <a href="/video-digital-service-toronto-gta" class="footer-menu__link video-to-digital__link">
      </a>
      <h3 class="menu--title"><a href="/video-digital-service-toronto-gta" class="menu__link" title="Video to Digital">Video to Digital</a></h3>
    </li>
    <li class="menu--list-item leaf even">
      <a href="/film-digital-service-toronto-gta" class="footer-menu__link film-to-digital__link"></a>
      <h3 class="menu--title"><a href="/film-digital-service-toronto-gta" class="menu__link" title="Film to Digital">Film to Digital</a></h3>
    </li>
    <li class="menu--list-item leaf odd">
      <a href="/photos-album-scanning" class="footer-menu__link photo-album-scanning__link"></a>
      <h3 class="menu--title"><a href="/photos-album-scanning" class="menu__link" title="Photo &amp; Album Scanning">Photo &amp; Album Scanning</a></h3>
    </li>
    <li class="menu--list-item leaf even">
      <a href="/slide-scanning-service-toronto-gta" class="footer-menu__link slide-scanning__link"></a>
      <h3 class="menu--title"><a href="/slide-scanning-service-toronto-gta" class="menu__link" title="Slide Scanning">Slide Scanning</a></h3>
    </li>
    <li class="menu--list-item leaf odd">
      <a href="/need-know" class="footer-menu__link need-to-know__link"></a>
      <h3 class="menu--title"><a href="/need-know" class="menu__link" title="Need to Know">Need to Know</a></h3>
    </li>
    <li class="menu--list-item leaf even last">
      <a href="/contact-us" class="footer-menu__link contact-us__link"></a>
      <h3 class="menu--title"><a href="/contact-us" class="menu__link" title="Contact Us">Contact Us</a></h3>
    </li>
  </ul>
</nav>';

  $export['site_tmpl_footer_menu'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site template main menu button';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'site_tmpl_main_menu_button';
  $fe_block_boxes->body = '<div class="main-menu__link">Menu</div>';

  $export['site_tmpl_main_menu_button'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site template Service menu button';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'site_tmpl_services_button';
  $fe_block_boxes->body = '<div class="services-menu__link">Services</div>';

  $export['site_tmpl_services_button'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site template site logo';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'site_tmpl_site_logo';
  $fe_block_boxes->body = '<a href="/" rel="home" id="logo" title="Home">
<picture>
<!--[if IE 9]><video style="display: none;"><![endif]-->
<source srcset="/sites/default/files/logo.svg" media="(min-width: 1024px)"/>
<!--[if IE 9]></video><![endif]-->
<img srcset="/sites/default/files/logo-small.svg" />
</picture>
</a>';

  $export['site_tmpl_site_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site template social networking branding';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'site_tmpl_social_branding';
  $fe_block_boxes->body = '<div class="social-networking-badges--block">
  <ul class="social-networking-badges">
    <li class="list--item">
      <a href="https://www.facebook.com/pages/Digital-Treasures/452170761501447" rel="nofollow" target="_blank" class="social-networking-badges__link interface-images-facebook"></a>
    </li>
    <li class="list--item">
      <a href="https://twitter.com/Dig_Treasures" rel="nofollow" target="_blank" class="social-networking-badges__link interface-images-twitter"></a>
    </li>
    <li class="list--item">
      <a href="http://pinterest.com/DigitalTreasur/pins/" rel="nofollow" target="_blank" class="social-networking-badges__link interface-images-pinterest"></a>
    </li>
  </ul>
  <p class="tel"><a class="local-tel__link" href="tel:4164790903">416.479.0903</a>
  </p>
</div>';

  $export['site_tmpl_social_branding'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site template social networking badges';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'site_tmpl_social_header';
  $fe_block_boxes->body = '<div class="social-networking-badges--block">
  <ul class="social-networking-badges">
    <li class="list--item">
      <a href="https://www.facebook.com/pages/Digital-Treasures/452170761501447" rel="nofollow" target="_blank" class="social-networking-badges__link interface-images-facebook"></a>
    </li>
    <li class="list--item">
      <a href="https://twitter.com/Dig_Treasures" rel="nofollow" target="_blank" class="social-networking-badges__link interface-images-twitter"></a>
    </li>
    <li class="list--item">
      <a href="http://pinterest.com/DigitalTreasur/pins/" rel="nofollow" target="_blank" class="social-networking-badges__link interface-images-pinterest"></a>
    </li>
  </ul>
  <p class="tel">
    <a class="local-tel__link" href="tel:416-735-3411">416.479.0903</a></p>
</div>';

  $export['site_tmpl_social_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site template vendor logos';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'site_tmpl_vendor_logos';
  $fe_block_boxes->body = '<p>Digital Treasures is powered by...</p>
<ul class="vendor-logos--list">
  <li class="list--item first interface-images-adobe"></li>
  <li class="list--item interface-images-apple"></li>
  <li class="list--item interface-images-dell"></li>
  <li class="list--item interface-images-epson"></li>
  <li class="list--item interface-images-sandisk"></li>
  <li class="list--item interface-images-verbatim"></li>
  <li class="list--item interface-images-western-digital"></li>
  <li class="list--item last interface-images-blackmagic"></li>
</ul>';

  $export['site_tmpl_vendor_logos'] = $fe_block_boxes;

  return $export;
}
