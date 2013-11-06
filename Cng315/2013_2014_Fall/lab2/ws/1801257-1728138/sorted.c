//Aral Zaim 1801257
//Süleyman Özdemirci 1728138

#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int [], int , int);
int main(){
    
    FILE *infile;
    FILE *outfile;
    int k;
    int n;
    int y, x;
    int i, j;
    int result;
    
    
    infile = fopen("sorted.txt", "r");
	if (infile == NULL) {
	 
		printf("Unable to open file."); 
	}
	outfile = fopen("output.txt", "w");
	if (outfile == NULL) { 
		printf("Unable to open file.");
	}
	
           fscanf(infile, "%d\n", &n);
           fscanf(infile, "%d\n", &k);
           
          
				 
 
				int * array;
				
				array=malloc(n * sizeof(int));
				
				for(i=0; i<n; i++){
                         
                         fscanf(infile, "%d\n",&array[i]);
                         }
                
            
            for(i=0;i<n;i++){
            
               y=k-array[i];
               if(y>0){

               result=BinarySearch(array,n,y);
          
               if(result==y){
                  if(y>array[i])
                   fprintf(outfile,"%d %d\n",y,array[i]);               
               }
                   }      
            
            }
                   
                     
                         
    fclose(infile);
    fclose(outfile);


    printf("\n\n");
    system("PAUSE");
    return 0;
}               

int BinarySearch(int array[], int n , int y){
    
    int left=-1;
    int right=n;
    int middle=(left+right)/2;
    int i;
    
   
    while(right-left > 1){
  
      if(y>array[middle]){
         left=middle;         
         middle=(right+left)/2;
         }
         
         
      else if(y<array[middle])               
    {
   
     right=middle-1;
     middle=(right+left)/2;
   
    }
    
    else
    {
    return y;
    }
    }


}        
    

