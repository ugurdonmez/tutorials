
// ugur donmez

#include <stdio.h>
#include <stdlib.h>

int main() {
   
   
   int n,k;
        
   int *list;
        
   FILE *input = fopen("unsorted.txt","r");
        
   fscanf(input,"%d",&n);
   fscanf(input,"%d",&k);
        
   list = (int *) malloc(n * sizeof(int));
        
   int i,j;
        
   for ( i = 0 ; i < n ; i++ ) {
      fscanf(input,"%d",list+i);
   }
   
   fclose(input);
   
   FILE * output = fopen("output.txt","w");
   
   for ( i = 0 ; i < n - 1 ; i++ ) {
      for ( j = i + 1 ; j < n ; j++ ) {
         if ( list[i] + list[j] == k ) {
            fprintf(output, "%d %d\n",list[i],list[j]);
         }
      }
   }
   
   fclose(output); 
   
  
}