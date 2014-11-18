#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){
    if(a>=b)
        return a;
    else
        return b;
        }

int main(){
    FILE *ridiculous = fopen("input.txt","r");
    
    
    int n = 0;
    fscanf(ridiculous,"%d",&n);
    int arr[n];
    int i;
    for(i=0;i!=n;i++){
        fscanf(ridiculous,"%d",&arr[i]);
        }
    fclose(ridiculous);
    
    /*printf("n= %d\n",n);
    for(i=0;i!=n;i++){
        printf("%d = %d \n",i,arr[i]);
        }*/
        
    int mycount=0;
    int indx1,indx2;
    indx1=0;
    indx2=0;
    int currentmax=0;
    //
    while(indx1<n){
        currentmax=arr[indx1];
        indx2=indx1;
        while(arr[indx2]>=currentmax && indx2!=n){
            currentmax=arr[indx2];
            //printf("mycount: %d, indx1: %d, indx2: %d, currentmax: %d\n",mycount, indx1, indx2, currentmax);
            mycount+=1;
            indx2+=1;
            }
        indx1+=1;
        }
        
    printf ("\n%d\n",mycount);
        
    ridiculous = fopen("output.txt","w");
    fprintf(ridiculous,"%d",mycount);
    fclose(ridiculous);
    
    system("pause");
    return 0;
}
