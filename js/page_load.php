<html>
    <head>
        <title>Testing</title>
		<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.4.4/jquery.min.js">
		</script>
		
		<script>

		
		$(document).ready(function () {
			alert("ugur");
			var replaced = $("body").html().replace('anonim','<b>ugur</b>');
			$("body").html(replaced);
		});
		
		
		</script>
		
    </head>
    <body>
		
		
		
        <h1><u>Demo jQuery Replace</u></h1>
        Hello, anonim is a test replacing -9o0-9909 with <b>The new string</b>.
        
		
		

		
    </body>
</html> 
    