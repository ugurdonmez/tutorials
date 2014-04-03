string = str(raw_input())
substring = str(raw_input())

size = 0

for i in range( 0 , len(string) - len(substring) + 1 ):
   if substring == string[ i : i + len(substring)] :
      size = size + 1 
      

print size