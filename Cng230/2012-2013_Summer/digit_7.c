#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);

	int count = 0;
	
	do {
		if (n%10 == 7) {
			++count;
		}
		n /= 10;
	} while(n != 0);

	printf("%d\n",count);
	
	return 0;
}