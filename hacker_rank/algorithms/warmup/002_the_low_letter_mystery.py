def isPalindrome(string):
	if string == string[::-1]:
		return 1
	else:
		return 0
		
def reduce(char1, char2):
	n = 0
	
	if ord(char1) < ord(char2):
		while char1 != char2:
			char2 = chr(ord(char2) - 1)
			n = n + 1
	else :
		while char1 != char2:
			char1 = chr(ord(char1) - 1)
			n = n + 1
	return n

def make_reduce(string):
	n = 0
	for i in range(0, len(string)  / 2 ):
		n = n + int (reduce(string[i], string[len(string) - 1 - i]))
	return n	
	
size = int(raw_input())

for i in range(0,size):
	string = raw_input()
	print make_reduce(string)