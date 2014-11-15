x = int(raw_input())
y = int(raw_input())
z = int(raw_input())

n = int(raw_input())

result = []

for a in range(x+1):
   for b in range(y+1):
      for c in range(z+1):
         if a + b + c != n:
            result.append([a,b,c])

print result