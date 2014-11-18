#include <stdio.h>
#include <stdlib.h>

void merge(int arr[],int l,int m,int r){
     
     int i,j,k;
     
     int x=m+1-l;
     int y=r-m;
     int S[x], E[y];
     
     for(i=0;i<x;i++){
     S[i] = arr[l+i];
     }
     for(j=0;j<y;j++){
     E[j]=arr[j+1+m];
     }
     i=0;
     j=0;
     k=l;
     while(i<x &&  j<y){
                if(S[i] <= E[j])
                {
                 arr[k] = S[i];
                 i++;       
                }
                else{
                 arr[k] = E[j];
                 j++;
                 }  
                 k++;
     }
     while(i<x){
     arr[k] = S[i];
     i++;
     k++;            
     }
     while(j<y){
     arr[k] = E[j];
     k++;
     j++;
     }
}
 void mergeSort(int arr[],int l,int r){
      if(l<r){
       int m= (l+r)/2;
       mergeSort(arr,l,m);
       mergeSort(arr,m+1,r);
       merge(arr,l,m,r);
       }
 }     
 
int main()
{
    int n,i,c;
    int array[10000];
    
    FILE *f;
    
    f = fopen("input.txt","r");
    fscanf(f,"%d",&n);

    for(i=0; i<n;i++){
    fscanf(f,"%d",&array[i]);
    }
    
    printf("Unsorted Array: \n");
    
    for(i=0;i<n;i++){
    printf("%d ",array[i]);
    }  
    
    printf("\n");
    
    mergeSort(array,0,n-1);
    
    printf("sorted Array: \n");
    
    for(i=0;i<n;i++){
    printf("%d ",array[i]);
    }  
    
    printf("\n");
    
    f=fopen("output.txt","w");
    for(i=0;i<n;i++){
    fprintf(f,"%d ",array[i]);
    }
    fclose(f);
    system("pause");
    return 0;
}
                  
