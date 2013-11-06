#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k,y,first,last,middle;
    FILE *inp= fopen("sorted.txt","r");
    FILE *out= fopen("output.txt","w+");
    fscanf(inp,"%d", &n);
    
    int * list = (int *) malloc (sizeof(int) *n );
    
    fscanf(inp,"%d", &k);
    
    int i,ip;
    for (i  = 0; i < n ;i++ ) {
        fscanf(inp,"%d", &list[i]);
    }
    
    
 for(i=0;i<n;i++){
                  
                  y=k-list[i];
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while( first <= last )
   {
      if ( list[middle] < y )
         first = middle + 1;    
      else if ( list[middle] == y ) 
      {
           if(y>list[i])
         {fprintf(out,"%d %d\n", y, list[i]);}
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }

}

fclose(inp);
fclose(out);
return 0;    
} 
