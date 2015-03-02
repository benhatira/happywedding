jQuery(document).ready(function($){
  $(window).load(function() {
    if($("#single-post-slider .slide").length>0)
    $("#single-post-slider").flexslider({
      animation: 'slide',
      slideshow: true,
      controlNav: false,
      prevText: '<',
      nextText: '>',
      smoothHeight: true,
      start: function(slider) {
        slider.container.click(function(e) {
          if( !slider.animating ) {
            slider.flexAnimate( slider.getTarget('next') );
          }
        });
      }
    });
  });
});