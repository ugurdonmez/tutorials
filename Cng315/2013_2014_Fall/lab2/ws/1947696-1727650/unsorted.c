#include <stdio.h>
#include <stdlib.h>

int main() {
  int n,k,i,j;

  FILE *in = fopen("unsorted.txt","r");
  FILE *out = fopen("output.txt","wt");

  fscanf(in,"%d", &n);
  fscanf(in,"%d",&k);
  
  int *list = (int*)malloc(sizeof(int)*n);
  
  for(i = 0; i<n; i++) {
    fscanf(in,"%d", &list[i]);
  }
  fclose(in);
  for(i = 0; i <n-1; i++) {
    for(j=i+1; j<n; j++) {
      if(list[i]+list[j]==k) {
	fprintf(out,"%d\t%d\n", list[i],list[j]);
	break;
      }
    }
  } 
}
