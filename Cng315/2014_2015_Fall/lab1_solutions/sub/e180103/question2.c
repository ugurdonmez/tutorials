#include <stdio.h>
#include <stdlib.h>

void merge(int start, int end, int n, int *a, int *b)
    {
       
     int j=(start+end)/2;
     int i=start;
     int k;
     printf("start %d, end %d, n %d\n",start,end,n);
     for(k=start; k<end-start+1; k++)
     {
                  
                  if(i==(start+end)/2)
                  {b[k]=a[j]; j++;}
                  else if(j==end)
                  {b[k]=a[i]; i++;}
                  else if(a[i]<=a[j])
                  {b[k]=a[i]; i++;}
                  else
                  {b[k]=a[j]; j++;}
                 // printf("%d, %d\n", b[k], k);                   
     }      
     for(k=start; k<n; k++)
     {a[k]=b[k];}
     for(k=0;k<8;k++)
     printf("%d ",a[k]);
     printf("\n");
    }

void MS(int start, int end, int n, int *a, int *b)
{     int mid;

      if(n>1)
      {
             mid = (start+end)/2;
             MS(start,mid,mid-start+1,a,b);
             MS(mid+1,end,end-mid,a,b);
             merge(start,end,n,a,b);
             }
     
}


int main()
{
    FILE *in,*out1;
    in= fopen("input.txt","r");
    out1= fopen("output.txt", "w");
    int size, temp;
    int i;
    fscanf(in, "%d", &size);
    int a[size];
    int b[size];
    for(i=0;i<size;i++)
     fscanf(in,"%d",&a[i]);
    
    MS(0,size-1,size,a,b);
    
    for(i=0;i<size;i++)
    {printf("%d ",a[i]); fprintf(out1,"%d ",a[i]);}
    
    fclose(out1);
    
    system("PAUSE");	
    return 0; 
}
