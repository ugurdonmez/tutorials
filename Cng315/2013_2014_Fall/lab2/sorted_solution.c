
// ugur donmez

#include <stdio.h>
#include <stdlib.h>

int binary_search(int value, int * array, int num)
{
   int mid = (num - 1) / 2;
   int index = -1;

   if (num > 0) {
      
      if (value < array[mid]) {
         index = binary_search(value, array, mid);
      }
      else if (value == array[mid]) {
         index = mid;
      }
      else if (value > array[mid]){
         index = binary_search(value, array + mid + 1, num - mid - 1);

         if (index >= 0)
         {
            index += (mid + 1);
         }
      }
   }
   
   return index;
}

int main() {
  
   int n,k;
        
   int *list;
        
   FILE *input = fopen("sorted.txt","r");
        
   fscanf(input,"%d",&n);
   fscanf(input,"%d",&k);
        
   list = (int *) malloc(n * sizeof(int));
        
   int i,j;
        
   for ( i = 0 ; i < n ; i++ ) {
      fscanf(input,"%d",list+i);
   }
   
   fclose(input);
   
   FILE * output = fopen("output.txt","w");
   
   int founded_value;
   
   for ( i = 0 ; i < n ; i++ ) {
            
      founded_value = binary_search( k - list[i] , list , n );
            
      if ( founded_value != -1 && list[founded_value] > list[i] ) {
         fprintf(output, "%d %d\n",list[i],list[founded_value]);
      }
   }
   
   fclose(output); 
   
}