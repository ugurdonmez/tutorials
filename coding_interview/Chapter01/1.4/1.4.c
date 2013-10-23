// write a method to replace all spaces in a string with %20

#include <stdio.h>

void replace(char * str) {
	
	int i = 0;
	int length = 0;
	int space = 0;
	
	while ( str[length] ) {
		length++;
		if ( str[length] == ' ' ) {
			space++;
		}
	}
	
	int new_length = length + 2 * space;
	
	str[new_length] = '\0';
	
	for ( i = length - 1 ; i >=0 ; i-- ) {
		if ( str[i] == ' ' ) {
			str[new_length - 1 ] = '0';
			str[new_length - 2 ] = '2';
			str[new_length - 3 ] = '%';
			new_length -= 3;
		}
		else {
			str[new_length - 1] = str[i];
			--new_length;
		}
	}
	
}

int main() {
	
	char first[18] = "Mr John Smith";
	
	printf("%s replaced ", first );
	replace(first);
	printf("%s\n",first);
	
	return 0;
}