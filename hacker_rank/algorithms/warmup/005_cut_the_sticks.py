size = int(raw_input())

line = raw_input()

integers = line.split(" ")

int_list = sorted([int(i) for i in integers])

while len(int_list) > 0:
	print len(int_list)
	int_list = filter( lambda a: a != 0, map( lambda x: x - int_list[0], int_list) )