n = int(raw_input())

numbers = [int(x) for x in raw_input().split()]

counts = [0] * 100

for i in numbers:
   counts[i] += 1
   
print ' '.join(map(str, counts))
