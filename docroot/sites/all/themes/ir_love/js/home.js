(function ($) {
	$(document).ready(function(){
		if (screen.width > 769) {
			ir_logo_effect();
			var slide_out = $('.ir-idea-font-icon');
			var slide_in = $('.ir-idea-text');

			$('.ir-main-idea').height(slide_in.height());
			//$('.ir-idea-text').hide();
		}
	});
	function ir_logo_effect() {
			$('.ir-logo').mouseenter(function(){
				//alert("site logo");
				$('.ir-idea-font-icon').toggle("drop", 1000);
				$('.ir-idea-text').toggle("drop", 1000);
			});
			$('.ir-logo').mouseleave(function(){
				$('.ir-idea-font-icon').toggle("drop", 1000);
				$('.ir-idea-text').toggle("drop", 1000);
			});
		}

	

}(jQuery));