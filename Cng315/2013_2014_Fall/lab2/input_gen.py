import random

n = 50000;
k = random.randint(10000000,300000000);

print k

list = random.sample(range(100000000), 50000)



unsorted_file = open('unsorted.txt', 'w')

unsorted_file.write(str(n))
unsorted_file.write("\n")
unsorted_file.write(str(k))
unsorted_file.write("\n")

for x in list:
   unsorted_file.write(str(x))
   unsorted_file.write("\n")

list.sort()

sorted_file = open('sorted.txt', 'w')

sorted_file.write(str(n))
sorted_file.write("\n")
sorted_file.write(str(k))
sorted_file.write("\n")

for x in list:
   sorted_file.write(str(x))
   sorted_file.write("\n")

# print( list )