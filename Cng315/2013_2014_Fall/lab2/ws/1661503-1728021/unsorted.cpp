#include <stdio.h>

#include <stdlib.h>

int main () {
    int n,k,x,y ;
    int *list;
    
    FILE *f = fopen("unsorted.txt","r");
    
    
    fscanf(f,"%d",&n);
    fscanf(f,"%d",&k);
    list = (int *) malloc(n * sizeof(int));
    
    int i,j;
        
    for ( i = 0 ; i < n ; i++ ) {
        fscanf(f,"%d", list+i);
    }
    
    FILE *output= fopen("output.txt","w");
    for(i=0;i<n;i++)
    {
                  for(j=i;j<n;j++)
                  {
                    if(list[i]+list[j]==k){
                                         fprintf(output,"%d %d\n",list[i],list[j]);
                                         }
                                         
                        }
                   }                
    
    
    fclose(output);
    
    fclose(f);
    

return 0;   
}
