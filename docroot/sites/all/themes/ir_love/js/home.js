(function ($) {
	$(document).ready(function(){
		front_main_idea_pane_height();
	});

	$(window).resize(function(){
		front_main_idea_pane_height();
	});

	/* Seta front main idea panes text line-height to screen size*/
	function front_main_idea_pane_height() {
		var window_height = $(window).height();
		//alert(window_height);
		$('.ir-main-idea').css({'height': window_height + 'px'});
		//$('.ir-main-idea').height($(window).height());
	}

}(jQuery));