size = int(raw_input())

a = {}

inp = ""
inps = []

for i in range(size):
   inp = str(raw_input())
   inps = inp.split()
   a[inps[0]] = (float(inps[1]) + float(inps[2]) + float(inps[3])) / 3
   
name = str(raw_input())

print("%.2f" % a[name])
