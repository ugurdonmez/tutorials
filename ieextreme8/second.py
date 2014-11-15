def nekops_nu(array):
   return_array = []
   prev = array[0]
   size = 1
   for i in range(1,len(array)):
      if array[i] == prev:
         size += 1
      else:
         return_array.append(size)
         return_array.append(prev)
         size = 1
         prev = array[i]

   return_array.append(size)
   return_array.append(prev)

   return return_array

array = map(int, raw_input().split())
n = array[0]

array = array[1:]

size_array = []

output = []
output.append(array)
size_array.append(len(array))

for i in range(n):
   a = nekops_nu(output[len(output)-1])
   output.append(a)
   size_array.append(len(a))

last_line = len(output[len(output)-1])

x = map( lambda x: ' '.join(map(str,x)), output)
y = map( lambda a: len(a), x )

max_char = max(y)





for a in x:
   diff = max_char-len(a)
   left = (diff+1) / 2
   right = diff / 2
   for i in range(left):
      a = "." + a
   for i in range(right):
      a += "."
   print a
   
print last_line