(function ($) {
	$(document).ready(function(){
		//alert('will be stickey');
		// stickey_header();
        change_font();
		var paneheight = $('div.pane-views-our-portfolio-block').height();
		var wheight = $(window).height();
		var logoheight = $('.l-branding').height();
		var topnavheight = $('.l-top-nav').height();
		// alert(topnavheight);
		$(window).scroll(function () {
			var top = $(window).scrollTop();
    		var div_top =  (wheight - logoheight) + topnavheight;
    		var services_top = div_top + paneheight;
/*
    		 if (top >= div_top) {// height of float header
    		 	$('.pane-views-our-portfolio-block .pane-title').addClass("header-stickey");
    		 }
    		 else {
    		 	$('.pane-views-our-portfolio-block .pane-title').removeClass("header-stickey");
    		 }

    		 if (top >= services_top) {// height of float header
    		 	$('.pane-views-our-services-services-content .pane-title').addClass("header-stickey");
                $('.pane-views-our-portfolio-block .pane-title').removeClass("header-stickey");
    		 }
    		 else {
    		 	$('.pane-views-our-services-services-content .pane-title').removeClass("header-stickey");
    		 }
*/
    	});


$(window).resize(function() {
  $('.views-slideshow-cycle-main-frame').each(function(){
    var heightImgNow = '';
    $(this).find('.views-slideshow-cycle-main-frame-row').each(function(){
    //  var thisDisplay = $(this).prop("style").display;
      var thisDisplay = $(this).css('display');
      var thisImgHeight = $(this).find('img').height();
      if(thisDisplay == 'block') {
        heightImgNow = thisImgHeight;
      }
    });

    if(heightImgNow != '') {
       // set div height    = now image height.
       $(this).height(heightImgNow);
     }

       change_font();
  });
});

function change_font() {
  var window_width = $(window).width();
  if ( window_width >= 769) {
    var window_ratio = window_width / 1000;
    window_ratio = window_ratio * 100;
    window_ratio = window_ratio > 100 ? 100 : window_ratio;
    window_ratio = window_ratio + "%";
    $('body').css('font-size', window_ratio );
    }
  }

	});
}(jQuery));
