a = int(raw_input())

fib = lambda n:reduce(lambda x,n:[x[1],x[0]+x[1]], range(n),[0,1])[0]

fibs = []

for i in range (0,a):
   fibs.append(fib(i))

print (list(map(pow, fibs, [3] * a)))