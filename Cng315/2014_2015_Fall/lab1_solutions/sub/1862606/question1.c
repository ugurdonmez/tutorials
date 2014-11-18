#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{          
        /*
        FILE *in = fopen("input.txt","r");
        int r = fscanf(in,"%d",&r);
        int arraySize = r;
        int array[arraySize];
        r = fscanf(in,"%d",&r);
        printf("%d\n",r);
        int t = 0;
        while (r != EOF){
              if(r != ' ') array[t]=r;
              t++;
              int r = fscanf(in,"%d",&r);
              }
              */
        // I couldn't make the input from the file, it crashes, I don't know why.      
              
        int array[] = {3,1,2,5,4};
        int arraySize = 5;
        int result = 0;
        int ok = 1;
        int i;
        if (arraySize == 1) result = 1;
        else {
             for(i=0; i<arraySize; i++){
                         int tempIndex = i+1;
                         int tempElement = array[i];          
                           while(ok){
                             if(tempElement<array[tempIndex]){
                                                              result++;
                                                              tempIndex++;
                                                              if (tempIndex == arraySize) ok = 0;
                                                              tempElement = array[tempIndex];
                                                              }
                             else ok = 0;
                             }
                             ok = 1;
                             result++;
           }
        } 
        printf("%d",result);
        
        
  printf("\n\n\n");
  
  system("PAUSE");	                
  return 0;
}
