(function ($) {

Drupal.behaviors.happywedding = {
  attach: function (context, settings) {
    $(".form-item-field-vendor-category-und").hide()
    $("input[id^=edit-field-vendor-tags]:not([id*=children])").on('change', function(){
      //console.log("change")
      
      $("input[id^=edit-field-vendor-tags]:not([id*=children])").each(function(i, item){  
        if($(item).is(':checked') ){
          $("#edit-field-vendor-category-und-" + (i+1)).prop("checked",true) 
        } else {
          var id = $(item).attr('id');
          $("input[id^="+id+"]").prop("checked",false);
          $("#edit-field-vendor-category-und-" + (i+1)).prop("checked",false)  
        } 
      });
    });
    //console.log("happywedding active");
    
    $("input[id^=edit-field-vendor-tags][id*=children]").on('change', function(){
      //edit-field-vendor-tags-und-0-9-9-children-18-18
      var id = $(this).attr('id');
      var parentId = id.replace(/-children.*/, '');
      //console.log("parent = " + parentId); 
      if($(this).is(':checked') ){
        $("input[id="+parentId+"]").prop("checked",true).trigger("change");
      }
    });
  }
};

})(jQuery);