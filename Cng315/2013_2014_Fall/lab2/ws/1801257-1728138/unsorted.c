//Aral Zaim 1801257
//Süleyman Özdemirci 1728138

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    FILE *infile;
    FILE *outfile;
    int k;
    int n;
    int y, x;
    int i, j;
    int sum;
    
    
    infile = fopen("unsorted.txt", "r");
	if (infile == NULL) {
	 
		printf("Unable to open file."); 
	}
	outfile = fopen("output.txt", "w");
	if (outfile == NULL) { 
		printf("Unable to open file.");
	}
	
           fscanf(infile, "%d\n", &n);
           fscanf(infile, "%d\n", &k);
           
           sum=k;
				 
 
				int * array;
				
				array=malloc(n * sizeof(int));
				
				for(i=0; i<n; i++){
                         fscanf(infile, "%d\n",&array[i]);
                         }
                
                for(i=0; i<n; i++){
                    for(j=i+1;j<n;j++){
                    if(sum==(array[i]+array[j]))
                    {
                    fprintf(outfile,"%d %d\n",array[i],array[j]);                      
                    }                   
                    
                    }     
                         
                }      
                         
    fclose(infile);
    fclose(outfile);


    printf("\n\n");
    system("PAUSE");
    return 0;
}                         
       
       
       
       

