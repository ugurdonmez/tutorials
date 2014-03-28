size = int(raw_input())

a = []
inner = []

grade = 1.0
name = ""

for i in range(0,size):
   name = str(raw_input())
   grade = float(raw_input())
   inner.append(name)
   inner.append(grade)
   a.append(inner)
   inner = []
   

max1 = 1000.0
max2 = 0.0


for i in range(0,size):
   if max1 > a[i][1]:
      max2 = max1
      max1 = a[i][1]

max2_name = []

for i in range(0,size):
   if max2 == a[i][1]:
      max2_name.append(a[i][0])
     
max2_name.sort()

for i in range(0, len(max2_name)):
   print max2_name[i]