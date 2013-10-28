#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k, i, j, temp, a[1000];
    
    FILE *in = fopen("input.txt","r");
    FILE *out = fopen("output.txt","wt");
    fscanf(in,"%d",&n);
    fscanf(in,"%d",&k);
    //printf("n = %d\n", n);
    //printf("k = %d\n", k);

    for(i = 0; i < n; i++) {
      fscanf(in,"%d",&a[i]);
      //printf("a[%d] = %d\n",i, a[i]);
    }

    if (k <= (n/2)) {
       for(i = 0; i < n; i++) {
             for(j = i + 1; j < n; j++) {
                   if(a[i] > a[j]) {
                           temp = a[i];
                           a[i] = a[j];
                           a[j] = temp;
			   if(a[k] == a[j]) {
			     fprintf(out,"%d\n", a[k]);
			     return 0;
			   }
                   }      
             }
       }
    } else if (k > (n/2)) {
           for(i = n-2; i > 0; i--) {
             for(j = 0; j <= i; j++) {
                   if(a[j] > a[j+1]) {
                           temp = a[j];
                           a[j] = a[j+1];
                           a[j+1] = temp;
			   if(a[k] == a[j]) {
			     fprintf(out,"%d\n", a[k]);
			     return 0;
			   }
                   }      
             }
       }
    } else {
           printf("INVALID PARAMETERS");
           return 0;
    }
    return 0;    
}
