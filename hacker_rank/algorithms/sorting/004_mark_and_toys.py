n, k = map(int, raw_input().split())
prices = sorted(map(int, raw_input().split()))

size = 0
total_price = 0

for i in range(0, len(prices)):
	size = size + 1
	total_price = total_price + prices[i]
	if total_price > k:
		size = size - 1
		total_price = total_price - prices[i]
		break
		
print size

