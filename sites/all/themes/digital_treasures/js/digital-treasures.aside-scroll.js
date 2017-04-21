(function ($) {

  Drupal.behaviors.digitalTreasuresAsideScroll = {

    attach: function (context, settings) {

      var aside = $('.l-sidebar-second');
      var regionContent = $('.l-region--content');
      var servicesMenu = $('.services--menu .menu');
      var articlesMenu = $('.articles--menu .menu');
      var menuSwipeUp = $('.menu--swipe-up');
      var menuSwipeDown = $('.menu--swipe-down');

      var getMenu = function () {

        if (articlesMenu.length > 0) {

          return articlesMenu;

        } else if (servicesMenu.length > 0) {

          return servicesMenu;
        }
      };
      var getAsideHeight = function () {

        if (aside.length  > 0) {

          return aside.height();
        }
      };

      var getMenuHeight = function () {

        if (articlesMenu.length > 0) {

          return articlesMenu.height();

        } else if (servicesMenu.length > 0) {

          return servicesMenu.height();
        }
      };

      var getRegionContentHeight = function () {

        if (regionContent.length > 0) {

          return regionContent.innerHeight();
        }
      };

      var setAside = function () {

        if (Modernizr.mq('(max-width: 1024px)')) {

          var menu = getMenu();
          var regionContentHeight = getRegionContentHeight();
          var asideHeight = getAsideHeight();
          var menuHeight = getMenuHeight();
          var menuSwipeUpHeight = menuSwipeUp.height();
          var menuSwipeDownHeight = menuSwipeDown.height();

          if (asideHeight >= regionContentHeight) {

            aside.height(regionContentHeight);
            aside.addClass('aside__overflow-hidden');
            menu.height(regionContentHeight - ((asideHeight - menuHeight) + (menuSwipeUpHeight + menuSwipeDownHeight)));
            menu.addClass('menu__scroll');
            menuSwipeUp.addClass('menu-swipe__visible');
            menuSwipeDown.addClass('menu-swipe__visible');
          }

          if ((asideHeight < regionContentHeight) && aside.hasClass('aside__overflow-hidden')) {

            aside.css('height', 'auto');
            aside.removeClass('aside__overflow-hidden');
            menu.css('height', 'auto');
            menu.removeClass('menu__scroll');
            menuSwipeUp.removeClass('menu-swipe__visible');
            menuSwipeDown.removeClass('menu-swipe__visible');
          }
        } else {

          var menu = getMenu();
          if (aside.hasClass('aside__overflow-hidden')) {

            aside.css('height', 'auto');
            aside.removeClass('aside__overflow-hidden');
          }

          if (menu.hasClass('menu__scroll')) {

            menu.css('height', 'auto');
            menu.removeClass('menu__scroll');
            menuSwipeUp.removeClass('menu-swipe__visible');
            menuSwipeDown.removeClass('menu-swipe__visible');
          }
        }
      };

      setAside();

      $(window).resize(function () {

        setAside();
      });
    }
  };
})(jQuery);
