#include <stdio.h>
#include <stdlib.h>

int min(int a, int b){
    if(a>=b)
        return b;
    else
        return a;
        }
        
int max(int a, int b){
    if(a>=b)
        return a;
    else
        return b;
        }
        
void shift(int *arr,int i, int j){
     int k=arr[i];
     arr[i]=arr[j];
     arr[j]=k;
     }
     
void merge(int *arr1, int start, int mid,int end){
    printf("mergegirdi: \n");
    printf("start: %d mid: %d end: %d\n",start,mid,end);
    int i = start;
    int j = mid;
    int arr2[end-start];
    int counter;
    for(counter=0;counter<end-start;counter++){
        printf("%d ",arr1[start+counter]);
        arr2[counter]=arr1[start+counter];
    }
    printf("\n");
    for(counter=0;counter<end-start;counter++)
        printf("%d ",arr2[counter]);
    printf("\n");
    //merging
    printf("mergecikti: \n",arr1[counter]);
    i=0;
    j=mid-start;
    
    for(counter=0;counter<end-start;counter++){//j ve i yuruyor
    printf("for girdi: %d %d %d %d %d\n", end, start ,counter ,i ,j);
        if((arr2[i]<arr2[j] && i<end-mid) || (j==end-start)){
            arr1[start+counter]=arr2[i];
            arr2[i]=999999;
            i++;
            }
        else{
            arr1[start+counter]=arr2[j];
            arr2[j]=999999;
            j++;
            }
        printf("%d \n",arr1[start+counter]);
    }//for
    printf("\n");
    
}//function
        
        
        
        
        
void mergesort(int *arr, int i, int j){
     int counter;
     for(counter=0;counter<j-i;counter++)
         printf("%d, %d: [%d] %d\n",i,j,counter,arr[i+counter]);
    if(j-i>1){///????????? if(N>=1)
        mergesort(arr,i,(j+i)/2);
        mergesort(arr,(j+i)/2,j);
        merge(arr,i,(j+i)/2,j);
        }
    /*else{
        if(min(arr[i],arr[j-1])!=arr[i])
            shift(arr,i,j-1);
        }*/
    
}
        
int main(){
    FILE *ridiculous = fopen("input.txt","r");
    int counter;
    int n = 0;
    fscanf(ridiculous,"%d",&n);
    int arr[n];
    
    for(counter=0;counter!=n;counter++){
        fscanf(ridiculous,"%d",&arr[counter]);
        }
    fclose(ridiculous);
    
    mergesort(arr, 0, n);
    
    for(counter=0;counter<n;counter++){
        printf("%d ",arr[counter]);
        }




    system("pause");
    return 0;
    
}







