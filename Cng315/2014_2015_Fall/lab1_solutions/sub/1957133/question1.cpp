#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;


 int  size;
int A[10000],B[10000];

int almostSorted()
{
	int nmb_seq=0;
    int min=10000;
    
	for (int i = 1; i < size; i++)
	{
		for (int j = i-1; j > -1; j--)
		{
			if(A[j]<A[i] && A[j]<min)
				{
                      
                   nmb_seq++;
                   
                    
                   if(A[j]<min)
                   {
                               min=A[j];
                    }
                    
                    
                
                }
              else if (A[j]>A[i])
                   break;

		}
		min=10000;
	}

	return (nmb_seq+size);


}





int main(int argc, char *argv[])
{
    
    
    
    FILE* f;
	FILE* g;

	f=fopen("input.txt","r");

	g=fopen("output.txt","w");

	fscanf(f,"%d",&size);

	for (int i = 0; i < size; i++)
	{
		fscanf(f,"%d",&A[i]);
	
	}


  
   fprintf(g,"%d",almostSorted());


    
    
    
   return 0;
}
