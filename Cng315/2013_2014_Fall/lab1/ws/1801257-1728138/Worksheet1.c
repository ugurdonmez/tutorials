//Aral Zaim 1801257
//Süleyman Özdemirci 1728138

#include <stdio.h>
#include <stdlib.h>


int SelectionSort(int [], int , int );
int BubbleSort (int [], int , int );

int main(){
    
    FILE *infile;
    FILE *outfile;
    int k;
    int kthsmallest;
    int n;
    int i;
    
    
    infile = fopen("input.txt", "r");
	if (infile == NULL) {
	 
		printf("Unable to open file."); 
	}
	outfile = fopen("output.txt", "w");  // using absolute path name of file
	if (outfile == NULL) { 
		printf("Unable to open file.");
	}
	
           fscanf(infile, "%d\n", &n);
           fscanf(infile, "%d\n", &k);
				 
 
				int array[10000];
				
				for(i=0; i<n; i++){
                         fscanf(infile, "%d\n",&array[i]);
                         }
          
         if (k<=n/2){
         printf("Entered to SelectionSort.\n\n");
         kthsmallest=SelectionSort(array, n, k);
         printf("Kth smallest: %d",kthsmallest);
         fprintf(outfile, "%d", kthsmallest);       
    }
       else{
        printf("Entered to BubbleSort\n\n");
        kthsmallest=BubbleSort(array,n,k);
        printf("Kth smallest: %d",kthsmallest);
        fprintf(outfile, "%d", kthsmallest); 
       }
    
    


    fclose(infile);
    fclose(outfile);


printf("\n\n");
system("PAUSE");
return 0;
}



 int SelectionSort(int array[], int n, int k)
 {
    
    int i;
    int j;
    int min;
    int temp;
    
    for(i=0; i < n-1; i++)
   {
     min=i;
 
      for(j=i; j < n; j++)
      {
        if (array[j] < array[min]){
 
          min=j;
        }
 
      }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    
    for(i=0;i<n;i++)
      if(i==(k-1))
        return array[i];
 
}

 int BubbleSort (int array[], int n, int k)
 {
     int i;
     int j;
     int temp;
     
     for(i=0; i<n; i++)
    {
    for(j=1; j<n-i+1; j++)
      {
        if(array[j-1]>array[j])
        {
          temp=array[j-1];
          array[j-1]=array[j];
          array[j]=temp;
        }
      }
    }
     
     for(i=0;i<n;i++)
     if (i==(k-1))
     {
      return array[i+1];
      }
}
