jQuery(function($){
  $(document).ready(function(){
      
    //superFish
    $(function() { 
      $("#main-menu > ul.menu").superfish({
        delay: 100,
        autoArrows: false,
        dropShadows: false,
        animation: {opacity:'show', height:'show'},
        speed: 'fast'
      });
    });
    

  
  }); // end doc ready
  
  $('.panel-col-last').on('click', '.cat-nav.left', function(){
    var $parent = $(this).parents('.pane-content').eq(0);
    var $catNav = $parent.find('.views-exposed-widgets');
    var page = +$catNav.attr('page') || 0;
    if(page>0) $catNav.attr('page', page-1);
  });
  $('.panel-col-last').on('click', '.cat-nav.right', function(){
    var $parent = $(this).parents('.pane-content').eq(0);
    var $catNav = $parent.find('.views-exposed-widgets');
    var page = +$catNav.attr('page') || 0;
    if(page<2) $catNav.attr('page', page+1);
  });
}); // end function