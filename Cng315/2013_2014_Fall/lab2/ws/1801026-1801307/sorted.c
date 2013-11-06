#include <stdio.h>
#include <stdlib.h>
int * readFile(int * n, int * k);
void controlAllPairs(int * arr,int size,int k);
int binarySearch(int *arr,int search,int size,int first);
int main()
{
	int n,k;
	int * arr=readFile(&n,&k);
	if(arr!=NULL)
		controlAllPairs(arr,n,k);
	system("pause");
	
	return 0;
}

int * readFile(int * n, int * k)
{
	FILE * f;
	f=fopen("sorted.txt","r");
	int * arr=NULL;
	if(f!=NULL)
	{
		fscanf(f,"%d",n);
		fscanf(f,"%d",k);
		
		arr=(int *)malloc(sizeof(int)* *n);
		int i;
		for(i=0;i<*n;i++)
			fscanf(f,"%d",&arr[i]);

		fclose(f);
	}

	return arr;
}
void controlAllPairs(int * arr,int size,int k)
{
	FILE * f;
	f=fopen("output.txt","w+");
	if(f!=NULL)
	{
               int i;
		for(i =0;i<size;i++)
		{
			int x=arr[i];
			int search=k-x;
			int resultIndex=binarySearch(arr,search,size,i+1);
			if(resultIndex>-1)
			{
				fprintf(f,"%d\t%d\n",arr[resultIndex],x);
			}
		}
		fclose(f);
	}
}
int binarySearch(int *arr,int search,int size,int first)
{ 
	int last = size - 1;
	int middle = (first+last)/2;
	int index=-1;
   while( first <= last )
   {
	  if ( arr[middle] < search )
		 first = middle + 1;    
	  else if ( arr[middle] == search ) 
	  {
		 index= middle;
		 break;
	  }
	  else
		 last = middle - 1;
 
	  middle = (first + last)/2;
   }
   if ( first > last )
    index=-1;

   return index;
}
