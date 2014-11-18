#include<stdio.h>
#include<stdlib.h>
#define MAX 10000

void mergesort(int arr[],int low,int mid,int high);
void part(int arr[],int low,int high);

int main(){
    
    
    int merge[MAX],i,n;
    FILE *x=fopen("input.txt","r");
    fscanf(x,"%d",&n);

    //printf("Enter the total numbers of element: ");
    //scanf("%d", &n);
    
    printf("Enter the elements to be sorted:");
    for(i=0;i<n;i++){
                     fscanf(x,"%d", &merge[i]);
                     }
                     
    part(merge,0,n-1);
                     
    printf("After mergesort elements are: ");
    for(i=0;i<n;i++){
                  fprintf(x,"%d",merge[i]);
                  }
    fclose(x);
    system("Pause"); 
    return 0;
     
   
}

void part(int arr[],int low,int high){
     
     int mid;
     if(low<high){
                  mid=(low+high)/2;
                  part(arr,low,mid);
                  part(arr,mid+1,high);
                  mergesort(arr,low,mid,high);
                  }
}

void mergesort(int arr[],int low,int mid,int high){
     
     int i,a,b,c,temp[MAX];
     c=low;
     i=low;
     a=mid+1;
     
     while((c<=mid)&&(a<=high)){
                                if(arr[c]<=arr[a]){
                                temp[i]=arr[c];
                                c++;
                                }

     
                                else{
                                temp[i]=arr[a];
                                a++;
                                }
                                i++; 
     }
     
     if(c>mid){
               for(b=a;b<=high;b++){
                                    temp[i]=arr[b];
                                    i++;
                                    }
               }
     else{
          for(b=c;b<=mid;b++){
                             temp[i]=arr[b];
                             i++;
                             }
                             
          
          }
          for(b=low;b<=high;b++){
                                 arr[b]=temp[b];
                                 }
                   
}

     
     

     

