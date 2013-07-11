#include <stdio.h>

int main() {
	
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;
	int fCount = 0;
	
	int grade = 0;
	
	float avg;
	
	while( grade != -1 ) {
		printf("Enter the grade (-1 for exit)");
		scanf("%d",&grade);
		
		if (grade >= 90 && grade <= 100 ) {
			printf("A\n");
			aCount++;
		}
		else if (grade >= 80 ) {
			printf("B\n");
			bCount++;
		}
		else if (grade >= 70 ) {
			printf("C\n");
			cCount++;
		}
		else if (grade >= 50 ) {
			printf("D\n");
			dCount++;
		}
		else if (grade >= 0 ) {
			printf("F\n");
			fCount++;
		}
		else if (grade != -1) {
			printf("Invalid grade\n");
		}
	}
	
	avg = (float) (aCount * 4 + bCount * 3 + cCount * 2 + dCount) / (aCount + bCount + cCount + dCount + fCount);
	printf("Average is %.2f\n",avg);
	
	return 0;
	
}