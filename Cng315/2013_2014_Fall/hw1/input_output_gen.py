import random
import string

def random_char(y):
   return ''.join(random.choice(string.ascii_uppercase) for x in range(y))

input = open('input.txt', 'w')
output = open('output.txt', 'w')



n = 100
k = 10
r = 26
list = []

input.write(str(n))
input.write('\n')
input.write(str(k))
input.write('\n')
input.write(str(r))
input.write('\n')

for i in range(0,n):
   list.append(random_char(k))

for i in range(0,len(list)):
   input.write(str(list[i]))
   input.write('\n')

list.sort()

for i in range(0,len(list)):
   output.write(str(list[i]))
   output.write('\n')
