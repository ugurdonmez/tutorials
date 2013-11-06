#include <stdio.h>
#include <stdlib.h>

// Authors: Bariscan Camlidere (1661420), Ege Gorgun (1862671)

void binarySearch(int, int [], int, FILE *, int);

int main()
{
    int k,n;
    
    FILE *inp = fopen("sorted.txt", "r");
    FILE *out = fopen("output.txt", "w+");
    
    if(inp==NULL)
      printf("File could not be opened\n");
    
    else
    {
      int i=0, k, j;  
      int size=0, n;
      
      fscanf(inp, "%d", &n);
      fscanf(inp, "%d", &k);
      
      int *numbers;

      numbers = (int *)malloc(sizeof(int)*(n));

      while (size<n)
      {
          fscanf(inp, "%d", &numbers[i]);
          printf("%d\n", numbers[i]);
          i++;
          size++;
      }
      
      int first, last, middle, search;
      
        first = 0;
        last = size-1;
        middle = (first+last)/2;
      
      
      
      for(i=0; i<size; i++)
      {
         search=k-numbers[i];
         binarySearch(search, numbers, numbers[i], out, size);
      }
     }
      
      fclose(inp);
      fclose(out);
      
      system("pause");
      return 0;
      }
      
void binarySearch(int search, int numbers[], int i, FILE *out, int size)
{
     
   int first, last, middle;
   
   first = 0;
   last = size - 1;
   middle = (first+last)/2;
   
   while( (first <= last) && (search>i) )
   {
          
      if ( numbers[middle] < search )
         first = middle + 1;
         
      else if ( numbers[middle] == search ) 
      {
         
         fprintf(out, "%d %d\n", search, i);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
}
