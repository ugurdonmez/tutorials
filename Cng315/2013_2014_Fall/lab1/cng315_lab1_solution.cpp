// ugur donmez

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n,k;
	
	int *list;
	
	FILE *input = fopen("input.txt","r");
	
	fscanf(input,"%d",&n);
	fscanf(input,"%d",&k);
	
	list = (int *) malloc(n * sizeof(int));
	
	int i,j;
	
	for ( i = 0 ; i < n ; i++ ) {
		fscanf(input,"%d",list+i);
	}
	
	fclose(input);
	
	int swap,position;
	
	if ( k > n / 2 ) {
		// bubble sort
		for (i = 0 ; i < k+1; i++) {
			for (j = 0 ; j < n - i - 1; j++) {
				if (list[j] > list[j+1]) {
					swap = list[j];
					list[j] = list[j+1];
					list[j+1] = swap;
				}
			}
		}
	}
	else {
		// selection sort
		for ( i = 0 ; i < ( n - 1 ) ; i++ ) {
			position = i;
 
			for ( j = i + 1 ; j < n ; j++ ) {
				if ( list[position] > list[j] ) {
					position = j;
				}
			}
			if ( position != i ) {
				swap = list[i];
				list[i] = list[position];
				list[position] = swap;
			}
		}
	}
	
	FILE * output = fopen("output.txt","w");
	
	fprintf(output,"%d",list[k-1]);
	fclose(output);
	
	return 0;
}