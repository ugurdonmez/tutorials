def check_single(a):
   for i in range(1,a):
      for j in range(1,a):
         if a * a == i * i + j * j:
            return 1
   return 0
   

def check(a,b):
   if a == 1 and b == 1:
      print 'FALSE'
   if check_single(a) == 1 and check_single(b) == 1:
      print 'TRUE'
   else:
      print 'FALSE'
      


size = int(raw_input())

for i in range(size):
   m, k = map(int, raw_input().split())
   check(m,k)