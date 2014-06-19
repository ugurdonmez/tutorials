t = int(raw_input())

for i in range(0,t):
   n, c, m = [int(x) for x in raw_input().split()]
   left = n / c
   left_sum = left
   while left >= m:
      left_sum += left  / m
      left = left / m + left  % m
   print left_sum