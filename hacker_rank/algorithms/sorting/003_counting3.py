n = int(raw_input())

numbers = []

for i in range(0,n):
   line = raw_input().split()
   numbers.append(int(line[0]))

counts = [0] * 100

for i in numbers:
   counts[i] += 1
   
for i in range(1,100):
   counts[i] = counts[i] + counts[i-1]
   
print ' '.join(map(str, counts))