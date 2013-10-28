#include <stdio.h>
#include <stdlib.h>

void selectionsort(int arr[], int n, int k)
{
     int i, j, key;
     
     
     
     for(i=2; i<k; i++)
     {
        key = arr[i];
        j = i-1;
        
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        
        arr[j+1] = key;
     }
    
        for(i=0; i<6; i++)
            printf("%d ", arr[i]);
    
        printf("kth element is %d", arr[k-1]);
}

void bubblesort(int a[], int n, int kth)
{
int i,j,k,temp;

   printf("nUnsorted Data:");
    for(k=0;k<n;k++)
    
         printf("%d",a[k]);
         
    for(i=1;i< kth;i++)
    {
         for(j=0;j< n-1;j++)
             if(a[j]>a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
    }

    printf("kth element is ", a[k-1]);
    
    for(i=0; i<6; i++)
        printf("%d ", a[i]);

}







int main()
{
    
    int arr[6] = {4,2,5,10,3,0};
    int i;
    
    puts("unsorted list:");
    
    
    for(i=0; i<6; i++)
        printf("%d ", arr[i]);
        
    puts("");
        
    int n, k;
    
    n = arr[0];
    k = arr[1];
    
    
    
    printf("n is : %d    k is : %d\n\n", n, k);
    
    if(k <= n/2){
        puts("selection sort is called");
        selectionsort(arr,n,k);
        
    }
    else{
        puts("bubble sort is called");
        bubblesort(arr,n,k); 
        
    }
 
 
    printf("\n\n");
    system("pause");
    return 0;
}
