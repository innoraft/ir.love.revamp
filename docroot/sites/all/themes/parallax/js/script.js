/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

	$(document).ready(function($) {
    // Cashing variables
    var intro = $( '.intro' );
    var content = $( '.content-wrap' );
    var second_section = $('.second-sections');
    
    // Window load event
    $( window ).load( function () {
      // Get Window Height and set
      $( '.intro .content-wrap' ).css( 'height', $( window ).height() );
      $('.column.c-left').css( 'height', $( window ).height() );
      $('.column.c-middle').css( 'height', $( window ).height() );
      $('.column.c-right').css( 'height', $( window ).height() );
      // Animation delay for intro features
      $( '.intro-features .icon-block' ).each( function () {
        var transDelay = $( this ).data( 'transition-delay' );
        $( this ).css( { 'transition-delay': transDelay + 'ms' } );
      });
      $( ".listing-list-right" ).wrapInner( "<div class='merge-content'></div>");
      var $stickyElement = $( '.header-wrap' );
      var $view_headerSticky = $('.block-title');
      var $header_div = $('.testimonial-content');
      //wrap-sticy header
      if ( $stickyElement.length > 0 ) {
        var waypoint = new Waypoint.Sticky({

          element: $stickyElement[ 0 ],

          handler: function ( direction ) {
            
            if ( direction == 'down' ) {
              
              intro.addClass( 'transparent' );
            } else {
              
              intro.removeClass( 'transparent' );
            }
          }
        });
      }

      if ($view_headerSticky.length < $header_div.height() ) {
        var sticky = new Waypoint.Sticky({
          element: $view_headerSticky[0],
          //offset: '45%',
        });
      }
    });
     

    //Animating Intro Section
    $( window ).scroll( function () {
      if ( $( window ).scrollTop() > 15 ) {
        intro.addClass( 'transformed' );
        
      } else {
        intro.removeClass( 'transformed' );
      }

    });

    
    jQuery(".navbar-toggle").click(function(e){
      //$('.navbar').show();
      //$('.navbar-collapse').removeClass('collapse');
      jQuery(".main-navigations").addClass("front-navbar-collapse-new");
      e.stopPropagation();
    });

    jQuery(document).click( function(e){
      $element = jQuery(".main-navigations");
      if ( $element.hasClass('front-navbar-collapse-new') ){
        $element.removeClass('front-navbar-collapse-new');
      }
    });

    

    /** Pushing Content down to the height equal to Intro height + height necessary to finish animation **/
    if ( intro.length > 0 ) {
        second_section.css( 'margin-top', intro.height() * 1.5 );
    }
  
});

// Testimonial Animations
jQuery(function() {
  var $sidescroll = (function() {
    // the row elements
    var $rows     = jQuery('.view-our-portfolio div.views-row'),
    // we will cache the inviewport rows and the outside viewport rows
    $rowsViewport, $rowsOutViewport,
    // navigation menu links
    //$links      = $('#ss-links > a'),
    // the window element
    $win      = jQuery(window),
    // we will store the window sizes here
    winSize     = {},
    // used in the scroll setTimeout function
    anim      = false,
    // page scroll speed
    scollPageSpeed  = 2000 ,
    // page scroll easing
    scollPageEasing = 'easeInOutExpo',
    // perspective?
    hasPerspective  = false,
      
    perspective   = hasPerspective && Modernizr.csstransforms3d,
    // initialize function
    init      = function() {
      
      // get window sizes
      getWinSize();
      // initialize events
      initEvents();
      // define the inviewport selector
      defineViewport();
      // gets the elements that match the previous selector
      setViewportRows();
      // if perspective add css
      if( perspective ) {
        $rows.css({
          '-webkit-perspective'     : 600,
          '-webkit-perspective-origin'  : '50% 0%'
        });
      }
      // show the pointers for the inviewport rows
      $rowsViewport.find('div.views-field').addClass('ss-circle-deco');
      // set positions for each row
      placeRows();          
            },
    // defines a selector that gathers the row elems that are initially visible.
    // the element is visible if its top is less than the window's height.
    // these elements will not be affected when scrolling the page.
    defineViewport  = function() {
        jQuery.extend( jQuery.expr[':'], {
         inviewport : function ( el ) {
          if ( jQuery(el).offset().top < winSize.height ) {
          return true;
        }
        return false;
      }
        });
       },
      // checks which rows are initially visible 
      setViewportRows = function() {
        
        $rowsViewport     = $rows.filter(':inviewport');
        $rowsOutViewport  = $rows.not( $rowsViewport )
        
      },
      // get window sizes
      getWinSize    = function() {
      
        winSize.width = $win.width();
        winSize.height  = $win.height();
      
      },
      // initialize some events
      initEvents    = function() {
        
        // navigation menu links.
        // scroll to the respective section.
       /* $links.on( 'click.Scrolling', function( event ) {
          
          // scroll to the element that has id = menu's href
          jQuery('html, body').stop().animate({
            scrollTop: jQuery( jQuery(this).attr('href') ).offset().top
          }, scollPageSpeed, scollPageEasing );
          
          return false;
        
        });
        */
        jQuery(window).on({
          // on window resize we need to redefine which rows are initially visible (this ones we will not animate).
          'resize.Scrolling' : function( event ) {
            
            // get the window sizes again
            getWinSize();
            // redefine which rows are initially visible (:inviewport)
            setViewportRows();
            // remove pointers for every row
            $rows.find('div.views-field').removeClass('ss-circle-deco');
            // show inviewport rows and respective pointers
            $rowsViewport.each( function() {
            
              jQuery(this).find('div.listing-list-left')
                   .css({ left   : '0%' })
                   .end()
                   .find('div.listing-list-right')
                   .css({ right  : '0%' })
                   .end()
                   .find('div.views-field')
                   .addClass('ss-circle-deco');
            });
          
          },
          // when scrolling the page change the position of each row  
          'scroll.Scrolling' : function( event ) {
            
            // set a timeout to avoid that the 
            // placeRows function gets called on every scroll trigger
            if( anim ) return false;
            anim = true;
            setTimeout( function() {
              
              placeRows();
              anim = false;
              
            }, 10 );
          
          }
        });
      
      },
      // sets the position of the rows (left and right row elements).
      // Both of these elements will start with -50% for the left/right (not visible)
      // and this value should be 0% (final position) when the element is on the
      // center of the window.
      placeRows   = function() {
        
          // how much we scrolled so far
        var winscroll = $win.scrollTop(),
          // the y value for the center of the screen
          winCenter = winSize.height / 2 + winscroll;
        
        // for every row that is not inviewport
        $rowsOutViewport.each( function(i) {

          var $row  = jQuery(this),
            // the left side element
            $rowL = $row.find('div.listing-list-left'),
            // the right side element
            $rowR = $row.find('div.listing-list-right'),
            // top value
            rowT  = $row.offset().top;
          // hide the row if it is under the viewport
          if( rowT > winSize.height + winscroll ) {
            if( perspective ) {
              $rowL.css({
                '-webkit-transform' : 'translate3d(-75%, 0, 0) rotateY(-90deg) translate3d(-75%, 0, 0)',
                'opacity'     : 0
              });
              $rowR.css({
                '-webkit-transform' : 'translate3d(75%, 0, 0) rotateY(90deg) translate3d(75%, 0, 0)',
                'opacity'     : 0
              });
            }
            else {
              $rowL.css({ left    : '-10%' });
              $rowR.css({ right     : '-10%' });
            }
          }
          // if not, the row should become visible (0% of left/right) as it gets closer to the center of the screen.
          else {  
              // row's height
            var rowH  = $row.height(),
              // the value on each scrolling step will be proporcional to the distance from the center of the screen to its height
              factor  = ( ( ( rowT + rowH / 2 ) - winCenter ) / ( winSize.height / 2 + rowH / 2 ) ),
              // value for the left / right of each side of the row.
              // 0% is the limit
              val   = Math.max( factor * 8, 0 );
              
            if( val <= 0 ) {
              // when 0% is reached show the pointer for that row
              if( !$row.data('pointer') ) {
                $row.data( 'pointer', true );
                $row.find('.views-field').addClass('ss-circle-deco');
              }
            }
            else {
              // the pointer should not be shown
              if( $row.data('pointer') ) {
                $row.data( 'pointer', false );
                $row.find('.views-field').removeClass('ss-circle-deco');
              }
            }
            
            // set calculated values
            if( perspective ) { 
              var t   = Math.max( factor * 75, 0 ),
                r   = Math.max( factor * 90, 0 ),
                o   = Math.min( Math.abs( factor - 1 ), 1 );
              
              $rowL.css({
                '-webkit-transform' : 'translate3d(-' + t + '%, 0, 0) rotateY(-' + r + 'deg) translate3d(-' + t + '%, 0, 0)',
                'opacity'     : o
              });
              $rowR.css({
                '-webkit-transform' : 'translate3d(' + t + '%, 0, 0) rotateY(' + r + 'deg) translate3d(' + t + '%, 0, 0)',
                'opacity'     : o
              });
            }
            else {
              $rowL.css({ left  : - val + '%' });
              $rowR.css({ right   : - val + '%' }); 
            }
          } 
        });
      };
    return { init : init };
  })();
  $sidescroll.init();
});
    // Place your code here.
 }
};

})(jQuery, Drupal, this, this.document);