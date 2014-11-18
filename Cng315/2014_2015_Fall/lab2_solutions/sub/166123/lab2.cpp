#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define INIT 10
void countingsort(int A[],int k,int n){
     
     int C[100],B[15],i,j;
     for(i=1;i<k;i++){
     C[i]=0;
     }
     for(j=1;j<n;j++){
     C[A[j]] = C[A[j]] +1;
     }
     for(i=2;i<k;i++){
     C[i] = C[i] + C[i-1];
     }
     for(j=n; j>=1; j--){
              B[C[A[j]]]=A[j];
              C[A[j]] = C[A[j]]-1;
              }
}

void radixsort(int a[] , int n)
{
               int i , arr[MAX], m=a[0] ,e=1;
               for(i=1 ; i <n ; i++){
               if (a[i] > m)
               m = a[i];
               }
               
               while(m/e > 0 )
               {
                           int h[INIT] = {0};
                           for(i=0;i<n;i++){
                           h[(a[i]/e) % INIT]++;
                           }
                           for(i=1 ; i < INIT ; i++){
                           h[i] += h[i-1];
                           }
                           for(i=n-1 ; i >= 0; i--){
                           arr[--h[(a[i]/e)%INIT]]= a[i];
                           }
                           for(i=0;i<n;i++){
                           a[i]=arr[i];
                           }
                           e*=INIT;
                           
               }
}

int main(){
    int n,j,i,r;
    char heap[1000];
    int array[1000];
    int k=0;
    FILE *f = fopen("input.txt","r");
     
     fscanf(f,"%d",&n);
     fscanf(f,"%d",&k);
     fscanf(f,"%d",&r);
    printf("enter array values: ");
    
    for(i=0;i<n;i++){
      fscanf(f,"%d",&heap[i]);  
    }
   
    for(j=0;j<n;j++){
      printf("%c\t",array[j]);    
    }
    radixsort(array,n);
    printf("sorted array: ");
    for(j=0;j<n;j++){
      printf("%d\t",heap[j]);    
    }
    
    system("pause");
    return 0;
    
}
