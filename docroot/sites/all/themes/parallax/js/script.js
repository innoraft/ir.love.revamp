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
      // Animation delay for intro features
      $( '.intro .content-wrap' ).css( 'height', $( window ).height() );
      $('.column.c-left').css( 'height', $( window ).height() );
      $('.column.c-middle').css( 'height', $( window ).height() );
      $('.column.c-right').css( 'height', $( window ).height() );
      
      $( '.intro-features .icon-block' ).each( function () {
        var transDelay = $( this ).data( 'transition-delay' );
        $( this ).css( { 'transition-delay': transDelay + 'ms' } );
      });

        var $stickyElement = $( '.header-wrap' );
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

    // Place your code here.
 }
};

})(jQuery, Drupal, this, this.document);