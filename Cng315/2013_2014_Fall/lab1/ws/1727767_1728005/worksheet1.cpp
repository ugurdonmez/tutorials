
    
#include <stdio.h>
#include <stdlib.h>


void BubbleSort(int [],int , int);
void SelectionSort(int [],int , int );

int main ()
{
    FILE *input; 
    FILE *output;
    
    input = fopen("input.txt","r");
    output = fopen("output.txt","w");
    
    
    int i, j, min, temp;
    int n,k;
     int A[10];
    int a;
    fscanf(input,"%d",&n);
    printf("n is %d\n\n",n);
    fscanf(input,"%d",&k);
    printf("k is %d\n\n",k);
   
    printf(" Array befare sorting\n");
    for(i=0;i<n;i++)
    {
        fscanf(input,"%d",&a);   
        A[i] = a;
        printf("%d\n",A[i]);   
    }
    
    for(i=0; i<n ;i++)
    {
    printf("\n%d ",A[i]);
    }
    printf("\n\n");
    
    
    if(k<=n/2)
        SelectionSort(A,n,k);
    else
        BubbleSort(A,n,k);
    
    int b=A[k-1];
    printf("A[k] is %d\n", A[k-1]);
    fprintf(output,"%d",b);
    
    fclose(output);
     
     
     
    
     
    system("pause");
    return 0;
     
}


void BubbleSort(int A[],int n,int k)
{
         int i,j;
         
         for(i=0;i<n-1;i++)
         {
            for(j=0;j<n-i-1 && j!=k;j++)
            {
              if(A[j] > A[j+1])
              {
                     int temp;
                     temp = A[j];
                     A[j]=A[j+1];
                     A[j+1]=temp;
              }    
            }
         }
         printf("For bubble:\n");
         
         for(i=0; i<n ;i++)
         {
         printf("\n%d ",A[i]);
         }
         printf("\n\n");
              

}



void SelectionSort(int a[],int length, int k)
{
     int i, j, min, temp;
    
    
    for (int i = 0; i < length - 1 && i!=k; i++)
    {
         min = i;
         for (int j = i + 1; j < length; j++)
             if (a[j] < a[min])
                 min = j;
         if (min != i)
         {
             temp = a[i];
             a[i] = a[min];
             a[min] = temp;
         }
     }
     
    for(i=0; i<length ;i++)
    {
    printf("\n%d ",a[i]);
    }
    printf("\n\n");
}     
     
     
