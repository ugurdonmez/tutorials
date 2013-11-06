#include <stdio.h>
#include <stdlib.h>

int main() {
  int n,k,i,j,l,f,mid;

  FILE *in = fopen("sorted.txt","r");
  FILE *out = fopen("output.txt","wt");

  fscanf(in,"%d", &n);
  fscanf(in,"%d",&k);
  
  int *list = (int*)malloc(sizeof(int)*n);
  
  for(i = 0; i<n; i++) {
    fscanf(in,"%d", &list[i]);
  }
  fclose(in);
  f = 0;
  l = n;
  mid = (f+l)/2;
  while(f <= l){
    if(l == f) break;
    
    if(list[l] = k - list[f]) {
      if(list[f] > list[l])
      fprintf(out,"%d\t%d\n", list[f],list[l]);
      f += 1;
      
    }else
      f -= 1;
    }  
}
