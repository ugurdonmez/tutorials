test_case = int(raw_input())

for i in range(0, test_case):
	n = int(raw_input())
	array = sorted(map(int, raw_input().split()))
	pair = 0
	prev = 0
	size = 1
	
	for j in range(0, len(array)):
		if prev == array[j]:
			size += 1
		else:
			if size > 1:
				pair += size * (size - 1)
			size = 1
			prev = array[j]
			
	if size > 1:
		pair += size * (size - 1)
		
	print pair
			