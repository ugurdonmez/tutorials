#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *inp=fopen("unsorted.txt","r");
    FILE *out=fopen("output.txt","w+");
    int *num;
    int i,k,n,j;
     
    fscanf(inp,"%d",&n);
    fscanf(inp,"%d",&k);
    
    num = malloc(n * sizeof(int));
    int *p = num;
    
    for (i = 0; i < n; i++) {
        fscanf(inp,"%d", p++);
    }
    
    for (i = 0; i < n; i++) {
        for(j=i+1; j < n; j++){
                   /* found equality */
                   if (num[i] + num[j]==k)
                   {
                      fprintf(out,"%d ", num[i]); //x= num[i];
                      fprintf(out,"%d\n", num[j]); //y= [num[i+1];
                   }
        }
    }

    /* for (i = 0 ; i < n ; i++)
    {
        fprintf(out,"%d\n", num[i]);
    } */
    fclose(out);
    system("pause");
    return 0;
}
