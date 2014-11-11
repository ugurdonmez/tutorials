w, h = map(int, raw_input().split())

shops = []

for i in range(h):
   shops.append( map (str,raw_input().split('*') ) )

shops = sum(shops, [])

prices = []
price = []

raw_input()

for i in range(h):
   prices.append( map (int,raw_input().split('*') ) )

prices = sum(prices, [])

for i in range(6):
   raw_input()
   price = []
   for j in range(h):
      price.append( map (int,raw_input().split('*') ) )
      # print price
   price = sum(price, [])
   prices = map( lambda x,y: x+y, price,prices )

cost = []

for i in range(w):
   for j in range(h):
      value = prices[i * w + j];
      
      if shops[i * w + j] == 'H':
         value /= 4
      if shops[i * w + j] == 'M':
         value /= 3
      if shops[i * w + j] == 'L':
         value /= 2
      
      #neigboor
      if i > 0:
         if prices[(i-1) * w + j ] > 5 and shops[ (i-1) * w + j ] == 'H':
            value += 1
      if j > 0:
         if prices[i * w + j - 1] > 5 and shops[ i * w + j - 1] == 'H':
            value += 1
      if i < w-1:
         if prices[(i+1) * w + j - 1] > 5 and shops[(i+1) * w + j - 1] == 'H':
            value += 1
      if j < h-1:
         if prices[i * w + j + 1] > 5 and shops[ i * w + j + 1] == 'H':
            value += 1
      
      cost.append(value)

max = 0
max_i = 0
max_j = 0

for i in range(w):
   for j in range(h):
      if cost[i * w + j] > max and shops[i * w + j] != 'H':
         max = cost[i * w + j]
         max_i = i
         max_j = j

print str(max_i+1) + " " + str(max_j+1)