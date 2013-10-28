#include<stdio.h>
#include <stdlib.h>
int main(){
    FILE *inp=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w+");
    int i,k,n,j;
    int min, temp;
     
    fscanf(inp,"%d",&n);
    int a[n];
    int * p = a;
    fscanf(inp,"%d",&k);
    
    for ( i = 0 ; i < n ; i++ )
    {
         fscanf(inp,"%d", p++);
    }

    
    if(k<=n/2)
    {
       for (i = 0; i < n - 1; ++i)
     {
          min = i;
          for (j = i+1; j < n; ++j)
          {
               if (a[j] < a[min])
                    min = j;
          }

          temp = a[i];
          a[i] = a[min];
          a[min] = temp;
     }
    }
    else
    {
     for (i = 0; i < (n - 1); ++i)
     {
          for (j = 0; j < n - 1 - i; ++j )
          {
               if (a[j] > a[j+1])
               {
                    temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
               }
          }
     }
    
    }
    fprintf(out,"%d",n);
    fprintf(out,"%d",k);
    for ( i = 0 ; i < n ; i++ )
    {
         fprintf(out,"%d", a[i]);
    }
    fclose(out);
    system("pause");
    return 0;
}
    
/*void SelectionSort(int a, int array_size)
{
     int i;
     for (i = 0; i < array_size - 1; ++i)
     {
          int j, min, temp;
          min = i;
          for (j = i+1; j < array_size; ++j)
          {
               if (a[j] < a[min])
                    min = j;
          }

          temp = a[i];
          a[i] = a[min];
          a[min] = temp;
     }
}

void BubbleSort(int a, int array_size)
{
     int i, j, temp;
     for (i = 0; i < (array_size - 1); ++i)
     {
          for (j = 0; j < array_size - 1 - i; ++j )
          {
               if (a[j] > a[j+1])
               {
                    temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
               }
          }
     }
}*/
