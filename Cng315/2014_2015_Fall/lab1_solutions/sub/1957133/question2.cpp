#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;


int  size;
int A[10000],B[10000];


void merge(int start , int end , int n)
{

	int k=-1;
	int mid=end;
	int l,top;
	int temp;

    if(n==2)
    {
            if(A[start]>A[end])
            {
               temp=A[start];
               A[start]=A[end];
               A[end]=temp;  
                           
            }   
                      
    }

    else
    {
	while((start<mid) && (end<n))
	{
		k++;

		if(A[start]>A[end])
		{
			B[k]=A[end];
			end++;
		}
		else
		{
			B[k]=A[start];
			start++;
		
		}	
	
	}
     
	if(start<mid)
	{
		 l=start;
		 top=mid;
      
	
	}
	 
	else if   (end<n)
	{
		 l=end;
		 top=n;
	
		
	
	
	}

 
      	for (int h = l; h < top; h++)
		{  
           k++;
			B[k]=A[h];
		
		}



    for(int k=0;k<n;k++)
     {      A[k]=B[k];
           
            
      }
      
   }

}




int mergeSort(int start,int end,int n)
{
	int mid;

	if(n>1)
	{      
   
        mid=(start+end)/2;
		
       
        if((n % 2) == 1)
             mergeSort(start,mid,(n+1)/2);
		else
		    mergeSort(start,mid,n/2);
        
        mergeSort(mid+1,end,n/2);
	
        merge(start,mid+1,n);
	
	}
	



}





int main()
{
	FILE* f;
	FILE* g;

	f=fopen("input.txt","r");

	g=fopen("output.txt","w");

	fscanf(f,"%d",&size);


	int i=0;
	for (int i = 0; i < size; i++)
	{   
        
		fscanf(f,"%d",&A[i]);
	}
  
	mergeSort(0,size-1,size);
  
   	for (int i = 0; i < size; i++)
	{   
        
		fprintf(g,"%d ",A[i]);
	}  


    
    fclose(g);

     system("pause");

	return 0;
}

