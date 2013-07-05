def array_product(array):
	product = 1
	for i in array:
		product = product * i
	
	for i in range(0,len(array)):
		array[i] = product / array[i]
	
	return array

my_array = [1,2,3,4,5,6,7,8,9,10]

print array_product(my_array)