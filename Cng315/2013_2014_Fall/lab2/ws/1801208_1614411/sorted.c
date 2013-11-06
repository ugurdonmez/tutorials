#include <stdio.h>
#include <stdlib.h>

bool bsearch(int arr[], int key, int size, int firstindex)
{
   int lastindex = size - 1, middleindex = (firstindex+lastindex)/2;

   for(;firstindex <= lastindex;)
   {
      if ( arr[middleindex] < key )
         firstindex = middleindex + 1;    
      else if ( arr[middleindex] == key ) 
         return 1;
      else if(arr[middleindex] > key)
         lastindex = middleindex - 1;
 
      middleindex = (firstindex + lastindex) / 2;
   }
}


int main()
{
    FILE *file = fopen("sorted.txt", "r");
    

    int size=0;
    int num, num1;
    int i=0;
    int *arr; 
    
    
    fscanf(file, "%d", &num1);
    size = num1;
    
    arr = (int *)malloc(size * sizeof(int));
    
    fclose(file);
    
    FILE *file1 = fopen("sorted.txt", "r");
    
    
    while(fscanf(file1, "%d", &num) > 0) 
    {
        if(i >= 2)
           arr[i-2] = num;
        
        i++;
    }


    fclose(file1);
    
    printf("\Our array is: \n");
    
    
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
        
    /////////////////////////////////////////////////////////////////////
    
    FILE *file2 = fopen("sorted.txt", "r");
    
    int k, x, y;
    int j;
    
    
    fscanf(file, "%d", &k);
    fscanf(file, "%d", &k);
    
    printf("\nk is:  %d\n", k);
    
    ////////////////////////////////////////////////////////////////////
    
    FILE *output = fopen("output.txt", "w");
    
    
    
    for(i=0; i<size; i++)
    {
        x = arr[i];
        y = k - x;
        
        if(bsearch(arr, y, size, i) == 1)
            fprintf(output, "%d %d\n", x, y);

    }
        
    fclose(output);
    
    
    
    
    puts("Output.txt has been created!");
    system("pause");
    return 0;
}
