n ,m, k = map(int, raw_input().split())

array = map(int, raw_input().split())

array.extend(array[:m-1])

min1 = sorted(array[0:m])[k-1]

for i in range(1,len(array)-m+1):
   if array[i+m-1] < min1:
      new = sorted(array[i:i+m])[k-1]
      if new < min1:
         min1 = new
      
print min1