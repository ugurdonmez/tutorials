#include "stdio.h"
#include "stdlib.h"
//1727767 remzi meric Ceylan

void findSorted(int *,int ,int );
int BinarySearch(int *, int , int );

int main ()
{
        int n,k,i;
        int *list;
        FILE * inp=fopen("sorted.txt","r");
        fscanf(inp, "%d %d",&n,&k);
        
        printf("n is %d, k is %d\n",n,k);
        list=(int *)malloc(n*sizeof(int));

        
        for(i=0;i<n; i++)
            fscanf(inp, "%d",&list[i]);
            
        for(i=0;i<n; i++)    
            printf("List[%d] is %d\n",i,list[i]);
        printf("\n\n");
           
            
        findSorted(list,k,n);
         

            
        system("pause");
        return 0;
}




void findSorted(int *list,int k,int n)
{
     int i,j;
     int x,y,IndexX=-1,IndexY=-1;
     int low,high;
     FILE *out=fopen("output.txt","w");
     for(i=0; i<n ; i++)
     {
        
         x= list[i];
         IndexX=i;
         
         y=k-x;
         
         IndexY=BinarySearch(list,y,n);
         
         if(IndexY==-1)
               printf("There is no x+y=k exist\n\n");
         else if(list[IndexX] < list[IndexY])
         {
               printf("List[%d]'s element is %d\nList[%d]'s element is %d\n",IndexX,list[IndexX],IndexY,list[IndexY]);
               printf("Sum of these is equal to %d\n\n",k);
         
               
               fprintf(out,"%d %d \n",list[IndexY], list[IndexX]);
               
         }
     
     }   
     fclose(out);
     
          

}


int BinarySearch(int *list, int y, int n)
{
         int low,high,mid;
         
         low=0;
         high=n-1;
         
         while(high >=low)
         {
             mid=(low+high)/2;
             if(y <list[mid])
                  high=mid -1;
             else if( y == list[mid])
                  return mid;
             else
                  low = mid + 1;
         }            
         return -1;
}
















