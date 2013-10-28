#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	
	FILE *input = fopen("input.txt","w");
	
	srand(time(NULL));
	int n = rand() % 10000;
	
	int k = rand() % n;
	
	fprintf(input,"%d\n",n);
	fprintf(input,"%d\n",k);
	
	int i;
	
	for ( i = 0 ; i < n ; i++ ) {
		fprintf(input,"%d\n",rand());
	}
	
	fclose(input);
	
}