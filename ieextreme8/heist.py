class element:
   name
   load
   value
   ratio


n, cap = map(int, raw_input().split())

name = []
load = []
value = []
ratio = []

line = raw_input()

while line != "END":
   inp = line.split(',')
   name.append(inp[0])
   load.append(inp[1])
   value.append(inp[2])
   ratio.append(float(inp[2])/float(inp[1]))
   line = raw_input()


print name
print load
print value
print ratio
      