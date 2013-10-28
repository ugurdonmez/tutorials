#include<stdio.h>
#include<stdlib.h>


int main()
{
    int x[6];
    int i,n=0,k;
    FILE *doc_in,*doc_out;
    doc_in = fopen("input.txt","r" );
    doc_out = fopen("output.txt","w+" );
    printf("Please enter a number:\n");
    scanf("%d",&k);
    for(i=0;i<6;i++){
    fscanf(doc_in,"%d",&x[i]);
    n++;
    
    }
    
    insertion_search(x,n);
    
    printf("output is %d",x[k-1]);
    doc_out = fopen("output.txt","w" );
    fprintf(doc_out,"%d",x[k-1]);
    
    
   
    fclose(doc_in);
    fclose(doc_out);
    system("pause");
    return 0;
}
int insertion_search(int x[],int n){
    int j,i,key;
    
    for(j=1;j<=n;j++)
    {
         key=x[j];
         i=j-2;
         while(i>=0 && x[i]>key)
         {
                   x[i+1]=x[i];
                   i--;
         }
         x[i+1]=key;
     }
}

                      
                        
                     

