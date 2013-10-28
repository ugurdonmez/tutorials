#include <stdio.h>
#include <stdlib.h>

void selectionsort(int [],int );

int main(){
	
	
	
	int i , a ;
	int n,k;
	
	
	
	FILE *inp = fopen("input.txt","r");
		
		fscanf(inp,"%d\n",&a);
		 n = a;
	    int array[n];  
		  
	    fscanf(inp,"%d\n",&a);
		
		
		k = a;
		
		for(i=0;i<n;i++)
		{
		fscanf(inp,"%d\n",&a);	
		array[i] = a;
	    }
	    
	 
	    selectionsort(array,n);
	    
	  
	    
	FILE *out = fopen("output.txt","w");
	fprintf(out,"%d",array[k-1]);
	    
	
	
	
	
	system("pause");
	return 0;
}
void selectionsort(int a[],int n)
{
	int i , j ;
	int temp ;
	for(i=0 ; i<n ; i++){
		temp = a[i];
		for(j=i+1 ; j<n ; j++){
			if(a[j]<temp){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}


