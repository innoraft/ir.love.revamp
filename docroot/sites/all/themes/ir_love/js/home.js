(function ($) {
	$(document).ready(function(){
		front_main_idea_pane_height();
		if (($(window).width()) < ($(window).height())) {
			portrait_image_resize();
		}
	});

	$(window).resize(function(){
		front_main_idea_pane_height();
		if (($(window).width()) < ($(window).height())) {
			portrait_image_resize();
		}
		// var window_height = $(window).height();
		// var window_width = $(window).width();
		// if (window_width < window_height) {
		// 	//alert("PORTRAIT");
		// 	var cal_height_1 = (20/100) * window_height;
		// 	var image_height = window_height - Math.round((2 * cal_height_1), 2);
		// 	$('.main-idea-image-inner img').css({'height': image_height + 'px'});
		// }
	});

	function portrait_image_resize() {
		//alert('portrait');
		var window_height = $(window).height();
		var window_width = $(window).width();
		// if (window_width < 598) {
		// 	var cal_height_1 = (25/100) * window_height;
		// 	var cal_width_1 = (20/100) * window_width;
		// 	var cal_height_2 = 2 * cal_height_1;
		// 	var cal_width_2 = 2 * cal_width_1;
		// 	var image_height = window_height - Math.round(cal_height_2, 2);
		// 	var image_width = window_width - Math.round(cal_height_1, 2);
		// 	$('.main-idea-image-inner img').css({'height': image_height + 'px'});
		// 	$('.main-idea-image-inner img').css({'width': image_width + 'px'});
		// }
		// else {
		// 	var cal_height_1 = (30/100) * window_height;
		// 	var cal_width_1 = (25/100) * window_width;
		// }
		var cal_height_1 = (25/100) * window_height;
		var cal_width_1 = (20/100) * window_width;
		var cal_height_2 = 2 * cal_height_1;
		var cal_width_2 = 2 * cal_width_1;
		var image_height = window_height - Math.round(cal_height_2, 2);
		var image_width = window_width - Math.round(cal_height_1, 2);
		$('.main-idea-image-inner img').css({'height': image_height + 'px'});
		$('.main-idea-image-inner img').css({'width': image_width + 'px'});
	}

	/* Seta front main idea panes text line-height to screen size*/
	function front_main_idea_pane_height() {
		var window_height = $(window).height();
		var window_width = $(window).width();
		//alert(window_height);
		$('.ir-main-idea').css({'height': window_height + 'px'});
		if (window_width < window_height) {
			//alert("PORTRAIT");
			
		}
		else {
			//alert("LANDSCAPE");
		}
		//$('.ir-main-idea').height($(window).height());
	}

}(jQuery));