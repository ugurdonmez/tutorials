test_case = int(raw_input())

for i in range(0, test_case):
	n, k = map(int, raw_input().split())
	array1 = sorted(map(int, raw_input().split()))
	array2 = sorted(map(int, raw_input().split()), reverse=True)	
	
	if len (filter( lambda a: a < k, map(lambda x,y:x+y, array1, array2))) > 0:
		print "NO"
	else:
		print "YES"
