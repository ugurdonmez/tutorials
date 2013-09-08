<html>
    <head>
        <title>Testing</title>
		<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.4.4/jquery.min.js"></script>
    </head>
    <body>
		
		
		
        <h1><u>Demo jQuery Replace</u></h1>
        Hello, anonim is a test replacing -9o0-9909 with <b>The new string</b>.
        <br/><br/>
        If I wrote -1o9-2202 and -1o9-2202 again but really wanted it to be <b>The ALL new string</b>.
        <br/><br/>
        This 12345-6789 wants to be <b>abcde-fghi</b>.
		
		<script>
			//var replaced = $("body").html().replace('anonim','<b>ugur</b>');
			//$("body").html(replaced);

			var replaced = $("body").html().replace(/-1o9-2202/g,'<b>The ALL new string</b>');
			$("body").html(replaced);

			$("body").html($("body").html().replace(/12345-6789/g,'<b>abcde-fghi</b>'));
			
			var innerHTML = document.body.innerHTML;
			innerHTML.replace("anonim","ugur");
			document.body.innerHTML = innerHTML;
			
		</script>
    </body>
</html> 
    