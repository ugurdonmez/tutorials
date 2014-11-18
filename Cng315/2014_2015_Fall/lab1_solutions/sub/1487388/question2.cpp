#include <stdio.h>
#include <stdlib.h>

 void mergeSort(int,int,int);
  void merge(int,int,int);

//ALP SALKIN 1487388

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
    
  
  
 
    FILE *p;
    
    p = fopen("output.txt","w");
    
    for( i = 0 ; i < size ; i++ )
    fprintf(p,"%d  ",&array[i]);
    
   
    
    
    
    
    system("pause");
    return 0;
}

    void mergeSort(int start,int end,int n)
    {
         int mid;
         if( n > 1 )
         {
             mid = ( start + end ) / 2;
             mergeSort(start,mid,n/2);
             mergeSort(mid+1,end,n/2);
             merge(start,end,n);
             }
    }
    
    void merge(int start,int end,int n)
    {
         
         
     }

   
