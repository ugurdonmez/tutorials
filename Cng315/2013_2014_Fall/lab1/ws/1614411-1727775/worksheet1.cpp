#include <stdio.h>
#include <stdlib.h>

void selection_sort(int a[], int size, int search)
{
     int i,j,index;
     
          for (i=1;i<size;++i)
     {
                   index = a[i];
                   for (j = i;j>0&&a[j-1]>index;j--)
                   a[j] = a[j-1];
                   a[j] = index;
     }
     
            for(i=0;i<size;i++){printf("%d ",a[i]);}
            printf("\n");
}

void bubble_sort(int a[], int size, int search)
{
     int i, j, temp;
     
     
          for (i = 0; i < (size - 1); ++i)
     {
          for (j = 0; j < size - 1 - i; ++j )
          {
               if (a[j] > a[j+1])
               {
                    temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
               }
          }
     }
     
          for(i=0;i<size;i++){printf("%d ",a[i]);}
          printf("\n");
}

int main (){
            int n,k,bos;
            int a[n];
            
              FILE *f;
              f = fopen("input.txt","r");
              int i=0;
              fscanf(f,"%d %d",&n,&k);
              fclose(f);
    
              f = fopen("input.txt","r");
              
                while(!feof(f))
    
    {
                          if(i==0 || i==1){
                          fscanf(f,"%d",&bos); i++;
                   }
           else{
                fscanf(f,"%d",&a[i-2]);
                i++;
           }
           
                 }
    fclose(f);
                
    if(k <= (n/2)){selection_sort(a,n,k);}
    else if(k>(n/2)){bubble_sort(a,n,k);}
    
    
    system("pause");
    
    return 0;
    
}
