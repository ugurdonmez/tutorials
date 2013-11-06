#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *file = fopen("unsorted.txt", "r");
    

    int size=0;
    int num, num1;
    int i=0;
    int *arr; 
    
    
    fscanf(file, "%d", &num1);
    size = num1;
    
    arr = malloc(size * sizeof(int));
    
    fclose(file);
    
    FILE *file1 = fopen("unsorted.txt", "r");
    
    
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
    
    FILE *file2 = fopen("unsorted.txt", "r");
    
    int k, x, y;
    int j;
    
    
    fscanf(file, "%d", &k);
    fscanf(file, "%d", &k);
    
    printf("\nk is:  %d", k);
    
    fclose(file2);
    
    FILE *output = fopen("output.txt", "w");
    
    
    
    for(i=0; i<size; i++)
    {
        x = arr[i];
        for(j=i+1; j<size; j++)
        {
            y = arr[j];
            
            if( k == x + y)
                fprintf(output, "%d %d\n", x, y);
        }
    }
        
    fclose(output);
    
 
    puts("\nOutput.txt has been created!");
    system("pause");
    return 0;
}
