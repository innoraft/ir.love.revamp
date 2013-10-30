(function ($) {
	$(document).ready(function(){
		if (screen.width > 769) {
			var slide_out = $('.ir-idea-font-icon');
			var slide_in = $('.ir-idea-text');

			$('.ir-main-idea').height(slide_in.height());
			//$('.ir-idea-text').hide();
		}
	});
}(jQuery));