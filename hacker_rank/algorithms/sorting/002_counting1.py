n = int(raw_input())

numbers = [int(x) for x in raw_input().split()]

counts = [0] * 100

output = ""

for i in numbers:
   counts[i] += 1
   
for i in range(0,100):
   while counts[i] > 0:
      output += str(i) + " "
      counts[i] -= 1
      
print output
