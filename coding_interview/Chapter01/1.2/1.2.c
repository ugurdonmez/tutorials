// implement a function void reverse(char * str)

#include <stdio.h>

void reverse(char * str ) {
	
	char * reverse;
	
	int i = 0;
	
	while ( str[i] != '\0' ) {
		i++;
	}
	
	reverse = (char *) malloc ( i * sizeof(char)+1);
	
	int j;
	
	for ( j = 0 ; j < i ; j++ ) {
		reverse[j] = str[i-j-1];
	}
	
	reverse[j] = '\0';
		
	for ( i = 0 ; i < j ; i++ ) {
		str[i] = reverse[i];
	}
}

int main() {
	
	char first[10] = "asdfghjklq";
	
	char second[10] = "asdfghjkll";
	
	printf("%s reverse ", first );
	reverse(first);
	printf("%s\n",first);
	
	printf("%s reverse ", second );
	reverse(second);
	printf("%s\n",second);
	
	return 0;
	
}