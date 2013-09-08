
$(document).ready(function () {
	var replaced = $("body").html().replace('anonim','<a href="#" title="That s what this widget is">Tooltips</a>');
	$("body").html(replaced);
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