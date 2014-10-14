list = []

gems = []

for i in range(0, ord('z') + 1):
	list.append(0)
	gems.append(0)

size = int(raw_input())

for i in range(0, size):
	string = raw_input()
	
	for j in range(0, len(gems)):
		gems[j] = 0
	
	for j in range (0, len(string)):
		index = ord( string[j] )
		gems[index] = gems[index] + 1
	
	for j in range(0, len(gems)):
		if gems[j] != 0:
			list[j] = list[j] + 1

output = 0

for i in range(0, len(list)):
	if list[i] == size:
		output = output + 1

print output