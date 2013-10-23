// Implement an algorithm to determine if a string has all unique characters.

// I assumed that string contains only ASCII characters.

#include <stdio.h>

int check_unique(char * str, int length) {
	
	if (length > 256) {
		return 0;
	}
	
	char control[256];
	
	int i;
	
	
	for (i = 0 ; i < 256 ; i++ ) {
		control[i] = 0;
	}
	
	for (i = 0 ; i < length ; i++ ) {
		if( control[str[i]] == 1 ) {
			return 0;
		}
		else {
			control[str[i]] = 1;
		}
	}
	
	
	return 1;
	
}

int main() {
	
	char first[10] = "asdfghjklq";
	
	char second[10] = "asdfghjkll";
		
	if (check_unique(first,10)) {
		printf("%s has all unique characters\n",first);
	}
	else {
		printf("%s has not all unique characters\n",first);
	}
	
	if (check_unique(second,10)) {
		printf("%s has all unique characters\n",second);
	}
	else {
		printf("%s has not all unique characters\n",second);
	}
	
	return 0;
	
}