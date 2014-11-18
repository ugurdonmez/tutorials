// Hamza GUPUR 1727874 CNG 315 Assignmet 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *input;
FILE *output;

int main()
{
	int n=0,k=0,r=0;
	char x;
	char arr[k], arr2[k];
	
	input  = fopen("input.txt", "r");
	output = fopen("output.txt", "w+");

	if (input == NULL)
	{
		printf("File could not be opened\n");
	    system("PAUSE");
		return 0;
		
    }
        printf("File was opened succesfully\n");
    	fscanf(input, "%d", &n);
		fscanf(input, "%d", &k);
        fscanf(input, "%d", &r);
        fscanf(input, "%c", &x);
        int capacity = (n * k);
    
        char *inputData = (char *)malloc(sizeof(char)*capacity);
    
        for (int i=0; i<capacity; i++)
        fscanf(input, "%c", &inputData[i]);
          
          for(int i=0; i<capacity; i=i+(k+1))          
          {
             int tmp = i;
             for(int j=0; j<k; j++)
             {
                 arr[j] = inputData[tmp];
                 tmp++;
             }
             for(int y=i+k+1; y<capacity; y=y+(k+1))
             {
               tmp=y;                     
               for(int j=0; j<k; j++)
               {
                  arr2[j] = inputData[tmp];
                  tmp++;
               }
               if (strcmp (arr,arr2) > 0)
               {
                 tmp=i;     
                 for(int j=0; j<k; j++)
                 {
                     inputData[tmp] = arr2[j];
                     tmp++;
                 }
                 tmp=y;     
                 for(int j=0; j<k; j++)
                 {
                     inputData[tmp] = arr[j];
                     tmp++;
                 }
               }
             }
          }

         for(int o=0 ; o<capacity; o++)
         {
            fprintf(output,"%c",inputData[o]);
            printf("Write %d\n",o+1); 
         }
         
         

	     fclose(input);
		 fclose(output);
         system("PAUSE");
         return 0;    
} 

