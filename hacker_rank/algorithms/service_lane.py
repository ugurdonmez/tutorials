n, t = [int(x) for x in raw_input().split()]

width = [int(x) for x in raw_input().split()]

for i in range(0,t):
   first, last = [int(x) for x in raw_input().split()]
   segment = 3
   for j in range(first,last+1):
      if segment > width[j]:
         segment = width[j]
   print segment