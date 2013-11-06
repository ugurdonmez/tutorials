#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,k,i;
	int * a;
	FILE * f=fopen("unsorted.txt","r");
	FILE * fout=fopen("output.txt","w+");
	if(f!=NULL)
	{
		fscanf(f,"%d",n);
		fscanf(f,"%d",k);
		
		a=(int *)malloc(sizeof(int)* n);

		for( i=0;i<n;i++){
             int temp;
			fscanf(f,"%d",&temp);
			a[i]=temp;
        }

		fclose(f);
	}

	if(a!=NULL && fout!=NULL)
	{
                          int i;
		for(i =0;i<n;i++)
		{
              int j;
			for(j=i+1;j<n;j++)
			{
				if(a[j]+a[i]==k)
				{
					fprintf(fout,"%d\t%d\n",a[i],a[j]);
					break;
				}
			}
		}
		fclose(fout);
    }

	
	
	system("pause");
	return 0;
}


