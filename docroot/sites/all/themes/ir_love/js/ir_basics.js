(function ($) {
	$(document).ready(function(){
		//alert('will be stickey');
		// stickey_header();
		var paneheight = $('div.pane-views-our-portfolio-block').height();
		var wheight = $(window).height();
		var logoheight = $('.l-branding').height();
		var topnavheight = $('.l-top-nav').height();
		// alert(topnavheight);
		$(window).scroll(function () {
			var top = $(window).scrollTop();
    		var div_top =  (wheight - logoheight) + topnavheight;
    		var services_top = div_top + paneheight;
    		// alert(services_top);
    		 if (top >= div_top) {// height of float header
    		 	$('.pane-views-our-portfolio-block .pane-title').addClass("header-stickey");
    		 }
    		 else {
    		 	$('.pane-views-our-portfolio-block .pane-title').removeClass("header-stickey");	
    		 }
    		 if (top >= services_top) {// height of float header
    		 	$('.pane-views-our-services-services-content .pane-title').addClass("header-stickey");
    		 }
    		 else {
    		 	$('.pane-views-our-services-services-content .pane-title').removeClass("header-stickey");	
    		 }
    	});

		
	});
	function stickey_header() {
		//alert(wheight);
		$(window).scroll(function () {
    	   	var top = $(window).scrollTop();
    		var div_top =  $('.pane-views-our-portfolio-block .pane-title').offset().top;
    	 	 //alert(top);
    		 if (top >= 400) {// height of float header
    		 	$('.pane-views-our-portfolio-block .pane-title').addClass("header-stickey");
    		 }
    		 else {
    		 	$('.pane-views-our-portfolio-block .pane-title').removeClass("header-stickey");	
    		 }
    		 if (top >= 1500) {// height of float header
    		 	$('.pane-views-our-services-services-content .pane-title').addClass("header-stickey");
    		 }
    		 else {
    		 	$('.pane-views-our-services-services-content .pane-title').removeClass("header-stickey");	
    		 }
    	});
	}
}(jQuery));