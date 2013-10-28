n = raw_input()

m = n.split(',')

x = int(m[0])

y = int(m[1])

i = 0

for a in xrange(x,y+1):
	if "{0:b}".format(a) == "{0:b}".format(a)[::-1]:
		i = i + 1


print(i)