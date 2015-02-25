def max_subarray(A):
   max_ending_here = max_so_far = 0
   for x in A:
      max_ending_here = max(0, max_ending_here + x)
      max_so_far = max(max_so_far, max_ending_here)
   return max_so_far

def max_subarray_noncontinuous(A):
   m = 0
   for x in A:
      if x > 0:
         m = m + x
   return m

test = int(raw_input())

for i in range(test):
   size = int(raw_input())
   array = map(int, raw_input().split())
   print str(max_subarray(array)) + ' ' + str(max_subarray_noncontinuous(array))


