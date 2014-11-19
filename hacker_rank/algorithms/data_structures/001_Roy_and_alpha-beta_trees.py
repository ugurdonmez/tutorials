import math

def alpha_beta_tree(array,level,alpha,beta):
   if (len(array)) == 0:
      return 0
   elif (len(array)) == 1:
      if level %2 == 0:
         return array[0] * alpha
      else:
         return array[0] * beta * -1
   else:
      total = 0
      for i in range(len(array)):
         small = list(filter((lambda x: x < array[i]), array))
         big   = list(filter((lambda x: x > array[i]), array))
         total += (alpha_beta_tree(small, level+1, alpha, beta) + alpha_beta_tree(big, level+1, alpha, beta))
         small_size = 0
         big_size = 0
         
         if len(small) > 0 :
            small_size = math.factorial(2 * len(small) ) / ( math.factorial( len(small) + 1 ) * math.factorial(len(small) ) )
         
         if len(big) > 0 :
            big_size = math.factorial(2 * len(big) ) / ( math.factorial( len(big) + 1 ) * math.factorial(len(big) ) )
         
         
         
         if level % 2 == 0:
            total += (array[i] * alpha) * (small_size + big_size)
         else:
            total += (array[i] * beta * -1) * (small_size + big_size)
      return total

t = int(raw_input())

for i in range(t):
   n = int(raw_input())
   alpha, beta = map(int, raw_input().split())
   array = map(int, raw_input().split())
   print alpha_beta_tree(array, 0, alpha, beta)
   