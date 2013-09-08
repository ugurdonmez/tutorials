<html>
    <head>
		<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.4.4/jquery.min.js"></script>
		<script type='text/javascript' src='http://code.jquery.com/jquery-1.7.1.js'></script>
		<script type='text/javascript' src="http://cdn.jquerytools.org/1.2.6/all/jquery.tools.min.js"></script>
        <title>Testing</title>
		<script>
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
		</script>
		
		
		
		
		
		
		
		
		
		  <style type='text/css'>
			.close { float: right; }
			.clear { clear: both; }
			.help { color: #fff; background-color: #22f; padding: 0px 5px;
				text-align: center; cursor: pointer; }
			.tooltip { border: 1px solid #22f; padding: 2px; width: 20%; position: absolute; background: #ddd;}

			


		</style>
  


<script type='text/javascript'>
	$(window).load(function(){
		$('.help').tooltip({ position: "bottom right", effect: 'slide', offset: [10, 2], relative: true, events: { def: 'click, none', tooltip: 'click, none'} });

		$('.help').click(function () {
			$(this).data('tooltip').getTip().show();
		});

		$('.tooltip .close').click(function () {
			$(this).parent('.tooltip').prev('span.help').data('tooltip').getTip().hide();
		});



	});

</script>
		
		
		
		
		
		
		
		
		
    </head>
    <body>
		
		
		
        <h1><u>Demo jQuery Replace</u></h1>
        Hello, anonim is a test replacing -9o0-9909 with <b>The new string</b>.
		
		
		
		<div id="placeholder">
			Input1:
			<div class="editor-field"> 
				<span class="help">H</span>
				<div style="display: none" class="tooltip">
					<div class="close"><a href="#">close</a></div><br class="clear">
					<div>This is help for input1</div>
				</div>          
			</div>
			Input2:
			<div class="editor-field">
				<span class="help">H</span>
				<div style="display: none" class="tooltip">
					<div class="close"><a href="#">close</a></div><br class="clear">
					<div>This is help for input2</div>
				</div>  
				
		</div>
	</div>
		
    </body>
</html> 
    