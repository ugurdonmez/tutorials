#include <stdio.h>
#include <stdlib.h>


void binarysearch(int dizi[],int n,int &x,int &y,int k)
{
     int i,j;
     
     
       FILE *output = fopen("output.txt","w");   
    
     
     for(i=0;i<n;i++)
     {
                     for(j=i+1;j<n;j++)
                     {
                        
                          if(dizi[j]=k-dizi[i])
                          {
                             x= dizi[i];
                             y= dizi[j];
                             fprintf(output,"%d,%d\n",x,y);
                             }
                          }
                     }
}


int main()
{
    FILE *input = fopen("sorted.txt","r");
    
    int n;
    int x;
    int y;
    int k;
    int i;
    int temp;
    
    
    
    fscanf(input,"%d\n",&n);

    
    fscanf(input,"%d\n",&k);
   
    
    int dizi[n];
    
    for(i=0;i<n;i++)
    {
                     fscanf(input,"%d\n",&temp);
                     dizi[i] = temp;
                     }
    
    
    
    binarysearch(dizi,n,x,y,k);
    
    
    
    system("pause");
    return 0;
}
