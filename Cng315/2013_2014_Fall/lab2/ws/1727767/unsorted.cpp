#include "stdio.h"
#include "stdlib.h"
//1727767 remzi meric Ceylan

void findUnSorted(int *,int ,int );

int main ()
{
  
        int n,k,i;
        int *list;
        FILE * inp=fopen("unsorted.txt","r");
        fscanf(inp, "%d %d",&n,&k);
        
        printf("n is %d, k is %d\n",n,k);
        list=(int *)malloc(n*sizeof(int));

        
        for(i=0;i<n; i++)
            fscanf(inp, "%d",&list[i]);
            
        for(i=0;i<n; i++)    
            printf("List[%d] is %d\n",i,list[i]);
        printf("\n\n");
            
        findUnSorted(list,k,n);
            
        system("pause");
        return 0;
}

void findUnSorted(int *list,int k,int n)
{
     int i,j;
     int x,y,IndexX=-1,IndexY=-1;
     
     FILE *out=fopen("output.txt","w");
     for(i=0; i<n ; i++)
     {
         x= list[i];
         
         for(j=i+1; j< n; j++)
         {
             y=list[j];       
             if( x + y ==k )      
             {
                 IndexX=i;
                 IndexY=j;
                 printf("List[%d]'s element is %d\nList[%d]'s element is %d\n",IndexX,list[IndexX],IndexY,list[IndexY]);
                 printf("Sum of these is equal to %d\n\n",k);
                 
                 fprintf(out,"%d %d \n",list[IndexX], list[IndexY]);
             }
         }
        
     }  
     fclose(out); 
     if(IndexX && IndexY == -1)
          printf("There is no x+y=k exist\n\n");

}

















