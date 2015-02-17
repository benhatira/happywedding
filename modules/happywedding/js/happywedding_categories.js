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
          $("#edit-field-vendor-category-und-" + (i+1)).prop("checked",false)  
        } 
      });
    });
    //console.log("happywedding active");
    $("input[id^=edit-field-vendor-tags]").on('change', function(item){
      var $this = $(this);
      //console.log($this, $(item))
      var $button = $this.parent().prev();
      if($this.is(':checked') ){
        if($button.hasClass('term-reference-tree-collapsed')) $button.click();
      } else{
        if(!$button.hasClass('term-reference-tree-collapsed')) $button.click();
        //console.log(' check the ' + $this.id);
        $("input[id^=" + $this.attr("id") + "]").prop("checked", false);
      }
        
    
    });
    
    
    $("input[id^=edit-field-vendor-tags][id*=children]").on('change', function(){
      //edit-field-vendor-tags-und-0-9-9-children-18-18
      var id = $(this).attr('id');
      //console.log(id);
      var parentId = id.replace(/(.*)-children.+$/, "$1")
      //console.log("parent = " + parentId); 
      if($(this).is(':checked') ){
        $("input[id="+parentId+"]").prop("checked",true).trigger("change");
        if(parentId.match(/children/)) {
          var superParentId = parentId.replace(/(.*)-children.+$/, "$1")
          $("input[id="+superParentId+"]").prop("checked",true).trigger("change");
        }
      }
    });
    
    //search vendors   auto post
    $('.view-id-vendors_block .views-exposed-form').remove();
    $('#search-vendors select').change(function(){
      $('#search-vendors').submit();
    });
    
    
    var category = $('#edit-category').val();
    $('a.gallery-detail').each(function(i, item){
      item.href = item.href + '&category=' + category;
      
    });
  }
}


  

  

})(jQuery);