#include <stdio.h>
#include <stdlib.h>

int total;

void isItBigger(int j, int n,int *list)
{
    if(list[j]<list[j+1])
    {
        j++;
        total++; 
        isItBigger(j,n,list);       
    }    
}


int main() 
{
    int n,i,k,j;
    FILE *inp= fopen("input.txt","r");
    FILE *out= fopen("output.txt","w+");
    fscanf(inp,"%d", &n);
    
    int * list = (int *) malloc (sizeof(int) *n );
    
    for (i  = 0; i < n ;i++ ) 
    {
        fscanf(inp,"%d", &list[i]);
    }
    
    total=n;//every number in list included at start
    
    for (i  = 0; i < n-1 ;i++ )
    isItBigger(i,n,list);
     
     
    fprintf(out,"%d", total);  


fclose(inp);
fclose(out);
return 0;    
}
