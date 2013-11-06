#include <stdio.h>
#include <stdlib.h>
int * readFile(int * n, int * k);
void controlAllPairs(int * arr,int size,int k);
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
	f=fopen("unsorted.txt","r");
	int * arr=NULL;
	if(f!=NULL)
	{
		fscanf(f,"%d",n);
		fscanf(f,"%d",k);
		
		arr=(int *)malloc(sizeof(int)* *n);
		int i;
		for( i=0;i<*n;i++)
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
              int j;
			for(j=i+1;j<size;j++)
			{
				if(arr[j]+arr[i]==k)
				{
					fprintf(f,"%d\t%d\n",arr[i],arr[j]);
					break;
				}
			}
		}
		fclose(f);
	}
}
