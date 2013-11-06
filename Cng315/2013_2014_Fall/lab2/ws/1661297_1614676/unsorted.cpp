#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k;
    FILE *inp= fopen("unsorted.txt","r");
    FILE *out= fopen("output.txt","w+");
    fscanf(inp,"%d", &n);
    
    int * list = (int *) malloc (sizeof(int) *n );
    
    fscanf(inp,"%d", &k);
    
    int i;
    for (i  = 0; i < n ;i++ ) {
        fscanf(inp,"%d", &list[i]);
    }
    
    


int o,p;
for(o=0;o<n;o++){
                 for(p=o;p<n;p++){
                                  if(list[o]+list[p]==k)
                                  fprintf(out,"%d %d\n",list[o],list[p]);
                                  }
                                  }


return 0;    
} 
