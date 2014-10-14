string = raw_input()

list = []

for i in range(0, ord('z') + 1):
	list.append(0)
	
for i in range(0, len(string)):
	list[ ord( string[i] ) ] = list[ ord( string[i] ) ] + 1
	
number_of_odd = 0

for i in range(0, len(list) ):
	if list[i] % 2 == 1:
		number_of_odd = number_of_odd + 1

if number_of_odd > 1:
	print "NO"
else:
	print "YES"