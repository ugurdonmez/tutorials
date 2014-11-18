#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag=0;
    int k,n,i,count=0;
    int array[10000];
    FILE *f;
    int temp[10000];
    f = fopen("input.txt","r");
    fscanf(f,"%d",&n);
    
    for(i=0; i<n;i++){
    fscanf(f,"%d",&array[i]);
    }
    
    for(i=0;i<n;i++){
    k=i;
    count++;
    flag=0;
    while(flag==0){
    if(array[k]<array[k+1]){
      k++;
      count++;
     }
     else{
       flag=1;
     }
    }
    }
    
    printf("%d\n",count);
    
    f=fopen("output.txt","w");
    fprintf(f,"%d",count);
    
    fclose(f);
    system("pause");
    return 0;
}
