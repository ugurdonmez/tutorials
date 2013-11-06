#include <stdio.h>
#include <stdlib.h>

int bs(int *a,int key,int n,int f);
int main()
{
	int n,k;
	int * a;
	FILE * f;
	f=fopen("sorted.txt","r");
	FILE * fout;
	fout=fopen("output.txt","w+");
	if(f!=NULL)
	{
		fscanf(f,"%d",n);
		fscanf(f,"%d",k);
		
		a=(int *)malloc(sizeof(int)* n);
		int i;
		for(i=0;i<n;i++)
			fscanf(f,"%d",&a[i]);

		fclose(f);
	}

	
	if(a!=NULL)
	{
               	if(fout!=NULL)
	{
               int i;
		for(i =0;i<n;i++)
		{
			int x=a[i];
			int search=k-x;
			int resultIndex=bs(a,search,n,i+1);
			if(resultIndex>-1)
			{
				fprintf(fout,"%d\t%d\n",a[resultIndex],x);
			}
		}
		fclose(fout);
	}
     }
	system("pause");
	
	return 0;
}


int bs(int *a,int key,int n,int f)
{ 
	int l = n - 1;
	int orta = (f+l)/2;
 while( f <= l )
   {
	  if ( a[orta] < key )
		 f = orta + 1;    
	  else if ( a[orta] == key ) 
	  {
		return orta;
	  }
	  else
		 l = orta - 1;
 
	  orta = (f + l)/2;
   }
   if ( f > l )
    return -1;

   return -1;
}
