#include <stdio.h>
#include <stdlib.h>

int bubble(int a[], int size, int k)
{
     int i, j, temp,kth;
     
     for (i = 0; i < (size - 1); ++i)
     {
          if(i==size-k){
                          kth=a[0];
                          return kth;
                          }
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
}

int selection(int a[], int size, int k)
{
     int i,kth;
     for (i = 0; i < size - 1; ++i)
     {
          int j, min, temp;
          min = i;
          for (j = i+1; j < size; ++j)
          {
               if (a[j] < a[min])
                    min = j;
          }

          temp = a[i];
          a[i] = a[min];
          a[min] = temp;
          kth = a[min-k];    
     }
     return kth;
}

int main (){
    int n,k,bos,result;
    int a[n];
    FILE *f,*out;
    f = fopen("input.txt","r");
    
    int i=0;
    fscanf(f,"%d %d",&n,&k);
    fclose(f);
    
    f = fopen("input.txt","r");
    while(!feof(f))
    {
           if(i==0 || i==1){
                   fscanf(f,"%d",&bos); 
                   i++;
                   }
           else{
                fscanf(f,"%d",&a[i-2]);
                i++;
           }
           
                 }
    
    fclose(f);  
             
    if(k <= (n/2)){result = selection(a,n,k);}
    else if(k>(n/2)){result = bubble(a,n,k);}
    
    printf("k th smallest is %d",result);
    out = fopen("output.txt","w+");
    fprintf(out,"%d",result);
    system("pause");
    return 0;
}
