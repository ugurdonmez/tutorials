#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *inp=fopen("sorted.txt","r");
    FILE *out=fopen("output.txt","w+");
    int *num;
    int i,k,n,j;
    int x, y;
    int first, last, middle;
     
    fscanf(inp,"%d",&n);
    fscanf(inp,"%d",&k);
    
    num = malloc(n * sizeof(int));
    int *p = num;
    
    for (i = 0; i < n; i++) {
        fscanf(inp,"%d", p++);
    }

    
    for(i=0;i<n;i++)
    {
    first = 0;
    last = n - 1;
    middle = (first+last)/2;
       x=num[i];
       y=k-x;
     while( first <= last )
     {
      if ( num[middle] < y ){
         first = middle + 1; 
      }   
      else if ( num[middle] == y ) 
      {
         fprintf(out,"%d  \n", y);
         break;
      }
      else{
         last = middle - 1;
         }
      middle = (first + last)/2;
     }
     if ( first > last )
      printf("Not found! %d is not present in the list.\n", y);
   }
    fclose(out);
    system("pause");
    return 0;
}

