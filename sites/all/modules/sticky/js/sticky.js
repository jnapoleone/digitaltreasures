
(function ($) {

  Drupal.behaviors.dtSticky =  {

    attach: function ( context, settings ) {

      var stickPromoBanner = function () {
        var promoBanner = $('.promo-banner__sticky');

        if($(window).width() >= 768) {

          if(!promoBanner.parent().hasClass('is-sticky')) {

            promoBanner.sticky({
              topSpacing: 0,
              getWidthFrom: '.promo-banner--container',
              responsiveWidth: true
            });
          }
        } else {

          promoBanner.unstick();
        }
      };

      stickPromoBanner();

      $(window).resize( function () {

        stickPromoBanner();
      })
    }
  };
})(jQuery);