
$(document).ready(function () {
	$(document).ready(function () {
		var replaced = $("body").html().replace('anonim','<div class="editor-field">' +
															'<span class="help">ugur</span>' +
															'<div style="display: none" class="tooltip">' +
															'	<div class="close"><a href="#">close</a></div><br class="clear">' +
															'	<div>ugur tooltip</div>' +
															'</div> ' +         
															'</div>');
		$("body").html(replaced);
		});
});


$(window).load(function(){
	$('.help').tooltip({ position: "bottom right", effect: 'slide', offset: [10, 2], relative: true, events: { def: 'click, none', tooltip: 'click, none'} });

	$('.help').click(function () {
		$(this).data('tooltip').getTip().show();
	});

	$('.tooltip .close').click(function () {
		$(this).parent('.tooltip').prev('span.help').data('tooltip').getTip().hide();
	});

});