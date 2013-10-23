// given two string, write a method to decide if one is a permutation of the other

// assume case sensitive and the length of string are same

#include <stdio.h>

int check_permutation(char * str1, char * str2,int length) {
	
	char control1[256];
	char control2[256];
	
	int i;
	
	
	for (i = 0 ; i < 256 ; i++ ) {
		control1[i] = control2[i] = 0;
	}
	
	for (i = 0 ; i < length ; i++ ) {
		control1[str1[i]]++;
		control2[str2[i]]++;
	}
	
	// if control1 is equal to control2 one is permutation of the other
	for ( i = 0 ; i < 256 ; i++ ){
		if ( control1[i] != control2[i] ) {
			return 0;
		}
	}
	
	return 1;
	
}

int main() {
	
	char first[10] = "asdfghjklq";
	
	char second[10] = "asdfghjkll";
	
	char third[10] = "asdgfhjklq";
		
	if (check_permutation(first,second,10)) {
		printf("%s is permutation of %s\n",first,second);
	}
	else {
		printf("%s is not permutation of %s\n",first,second);
	}
	
	if (check_permutation(first,third,10)) {
		printf("%s is permutation of %s\n",first,third);
	}
	else {
		printf("%s is not permutation of %s\n",first,third);
	}
	
	return 0;
	
}