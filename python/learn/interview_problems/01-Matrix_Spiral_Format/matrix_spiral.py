def display(matrix, index, size ):
   if size < 0:
      return
   elif size == 1:
      print matrix[index][index]
   else:
      for i in range(0,size):
	 print matrix[index][index+i]
      for i in range(1,size):
	 print matrix[index+i][index+size-1]
      for i in range(size-2,-1,-1):
	 print matrix[index+size-1][index+i]
      for i in range(size-2,0,-1):
	 print matrix[index+i][index]
      display(matrix,index+1,size-2)


ex_matrix = [[0,1,2,3],[4,5,6,7],[8,9,10,11],[12,13,14,15]]

display(ex_matrix, 0, 4)