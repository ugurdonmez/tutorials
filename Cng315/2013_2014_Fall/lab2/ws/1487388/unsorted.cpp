#include <stdio.h>
#include <stdlib.h>


void search(int dizi[],int n,int &x,int &y,int k)
{
     int i,j;
     
     for(i=0;i<n;i++)
     {
                     for(j=i+1;j<n;j++)
                     {
                        
                          if(dizi[i]+dizi[j]==k)
                          {
                             x= dizi[i];
                             y= dizi[j];
                             }
                          }
                     }
}

int main()
{
    FILE *input = fopen("unsorted.txt","r");
    
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
                     
     search(dizi,n,x,y,k);     
     
     
     
       FILE *output = fopen("output.txt","w");   
       fprintf(output,"%d,%d\n",x,y);
              
                     
                     

        
    system("pause");
    return 0;
}


