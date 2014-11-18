#include <stdio.h>
#include <stdlib.h>

//ALP SALKIN 1487388


int countSubsequence(int *,int);

int main()
{ 
    int i;
    int size;
    
    
    FILE *f;
    
    f = fopen("input.txt","r");
    fscanf(f,"%d\n",&size);
    
    int *array = (int*)malloc(sizeof(int)*size);
    
    for( i = 0 ; i < size ; i++ )
    fscanf(f,"%d",&array[i]);
    
    printf("%d\n",countSubsequence(array,size));
    
    FILE *p;
    
    p = fopen("output.txt","w");
    fprintf(p,"%d",countSubsequence(array,size));
    
    fclose(p);
    
     

    
    system("pause");
    return 0;
}
   int countSubsequence(int *p,int size)
   {
       int topcount = 0;
       int count1 = 0;
       int count2 = 1;
       int i;
       
       
       for( i = 0 ; i < size ; i++ )
       {
            if( p[i] < p[i+1] )
            {
            count1 = count1 + count2;
            count2++;
            } 
            else
            {
            topcount = topcount + count1;
            count1 = 0;
            count2 = 1;
            }
       }
       
       return topcount+size;
       }
              
               
          
          
            
            
       
       







