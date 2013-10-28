//Altinok Darici 1801026- Mustafa Ozgen 1801307
#include <stdlib.h>
#include <stdio.h>

int bubbleSort(int *a,int key,int size);
int selectionSort(int *a,int key,int size);
int find(int * a,int k,int size);
int * ReadFile(int * n,int * k);
void WriteFile(int result);
int IsSortedUntilKeyForBubble(int *a,int key);
int main()
{
	int n,k;
	int * arr=ReadFile(&n,&k);
	int f= find(arr,k,n);
	printf("%d\n",f);
	WriteFile(f);
	system("pause");
	return 0;
}
int find(int * a,int k,int size)
{
	if(k<=size/2)
		return selectionSort(a,k-1,size);
	else
		return bubbleSort(a,k-1,size);
	
	return 0;
}



int * ReadFile(int * n,int * k)
{
	int * arr= (int *)malloc(sizeof(int)*10000);
	FILE *f;
	
	f=fopen("input.txt","r");
	if(f!=NULL)
	{
		int x;
		int i=0;
		while(fscanf(f,"%d",&x)!=EOF)
		{	
			if(i==0)
				*n=x;
			else if(i==1)
				*k=x;
			else
			{
				arr[i-2]=x;
			}
			i++;
		}	

	}
	fclose(f);

	return arr;
}

void WriteFile(int result)
{
	FILE *f;
	
	f=fopen("output.txt","w+");
	if(f!=NULL)
	{
		fprintf(f,"%d",result);
	}
	fclose(f);
}

int selectionSort(int *a,int key,int size)
{ 
	int temp,i=0;
	int min;
	for(i=0;i<size -1;i++)
	{
		min=i;
		int j;
		for( j=i+1;j<size;j++)
			if(a[j]<a[min])
				min=j;
			
			if(min!=i)
			{
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
			if(i==key)
				return a[key];
	}
	return a[key];
}




int bubbleSort(int *a,int key,int size)
{
		int c=0;
	for(c=0;c<(size-1);c++)
	{
		int d=0;
		for(d=0;d<size-c-1;d++)
		{
			if(a[d]>a[d+1])
			{
				int swap=a[d];
				a[d]=a[d+1];
				a[d+1]=swap;
				if(IsSortedUntilKeyForBubble(a,key))
				{
                       return a[key];
				}
			}
		}
	}	
	return a[key];
}
int IsSortedUntilKeyForBubble(int *a,int key)
{	
	int i=0;
	int flag=1;
	for(i=0;i<key;i++)
	{
		if(a[i]>a[i+1])
			flag=0;
	}
	return flag;
}
