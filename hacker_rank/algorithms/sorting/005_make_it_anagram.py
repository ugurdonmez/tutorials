str1 = list(raw_input()) 
str2 = list(raw_input())

list1 = []
list2 = []

for i in range(0, ord('z') + 1):
	list1.append(0)
	list2.append(0)

for i in range(0, len(str1)):
	list1[ord(str1[i])] += 1
	
for i in range(0, len(str2)):
	list2[ord(str2[i])] += 1
	
n = 0



for i in range(0, len(list1)):
	n += abs(list1[i] - list2[i])
	
print n