t = int(raw_input())

max_value = 0
indexes = []

for i in range(0,t):
   n = int(raw_input())
   indexes.append(n)
   if n > max_value:
      max_value = n
   

size = 1

sizes = [1]

for i in range(0,max_value):
   if i % 2 == 0:
      size *= 2
   else:
      size += 1
   sizes.append(size)
      
for i in indexes:
   print sizes[i]