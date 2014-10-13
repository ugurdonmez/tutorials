a = int(raw_input())
b = int(raw_input())

max = 0

for i in range(a,b+1):
	for j in range(i,b+1):
		print i
		print j
		xor = i ^ j
		if xor > max:
			max = xor
			
print max