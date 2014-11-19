n, m = map(int, raw_input().split())

matrix = {}

for i in range(n):
	for j in range(n):
		matrix[i,j] = 0

for i in range(m):
	a, b =  map(int, raw_input().split())	
	matrix[a,b] = 1
	matrix[b,a] = 1
	

for i in range(n):
	for j in range(n):
		print matrix[i,j]
	print "\n"