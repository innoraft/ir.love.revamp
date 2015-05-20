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
    
    // Window load event
    $( window ).load( function () {
      $( '.intro .column-wrap' ).css( 'height', $( window ).height() );

        //Pushing Content down to the height equal to Intro height + height necessary to finish animation
       if ( intro.length > 0 ) {
        content.css( 'margin-top', intro.height() * 1.5 );
      }
      // Animation delay for intro features
      $( '.intro-features .icon-block' ).each( function () {
        var transDelay = $( this ).data( 'transition-delay' );
        $( this ).css( { 'transition-delay': transDelay + 'ms' } );
      });
    });

    // Window resize event
    $( window ).resize( function () {
      //Keeping Logo and Other-Logo at the bottom of teh page.
      $( '.intro .column-wrap' ).css( 'height', $( window ).height() );
      //Pushing Content down to the height equal to Intro section height + height necessary to finish animation.
      if ( intro.length > 0 ) {
        content.css( 'margin-top', intro.height() * 1.5 );
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

    jQuery(".navbar-toggle").click(function(){
      $('.navbar').show();
      $('.navbar-collapse').removeClass('collapse');
      jQuery(".navbar").toggleClass("front-navbar-collapse-new");
    }); 
});

    // Place your code here.
 }
};

})(jQuery, Drupal, this, this.document);