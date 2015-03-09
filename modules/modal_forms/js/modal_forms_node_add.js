(function ($) {

Drupal.behaviors.initModalFormsNodeAdd = {
  attach: function (context, settings) {
    $("a[href*='/node/add/inquiry'], a[href*='?q=node/add/inquiry']", context).once('init-modal-forms-node-add', function () {
      this.href = this.href.replace('/node/add/inquiry','/modal_forms/nojs/node/add/inquiry');
    }).addClass('ctools-use-modal ctools-modal-modal-popup-medium');
  }
};

})(jQuery);
