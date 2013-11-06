#include <stdio.h>
#include <stdlib.h>

// Authors: Bariscan Camlidere (1661420), Ege Gorgun (1862671)

int main()
{
    int k,n;
    
    FILE *inp = fopen("unsorted.txt", "r");
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
      
      for(i=0; i<size; i++)
      {
         for(j=i+1; j<size; j++)
         {
            if((numbers[i]+ numbers[j])== k)
            {
               fprintf(out, "%d %d\n", numbers[i], numbers[j]);
            }
         }
      }
      
      
      }
      system("pause");
      return 0;
      }
