n = int(raw_input())
k = int(raw_input())
candies = [int(raw_input()) for i in range(0,n)]
candies.sort()

min_value = candies[k-1] - candies[0]

for i in range(k,n):
   #print "i " + str(i) + " " + str(i-k)
   if min_value > candies[i] - candies[i-k+1]:
      min_value = candies[i] - candies[i-k+1]

min_diff = min_value

print min_diff
