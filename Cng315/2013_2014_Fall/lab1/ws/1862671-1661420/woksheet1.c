#include <stdio.h>
#include <stdlib.h>

// Authors: Bariscan CAMLIDERE (1661420), Ege GORGUN (1862671)

FILE *file;

void bubbleSort(int [], int, FILE *);
void selectionSort(int [], int, FILE *);

int main()
{
    int k,n;
    
    FILE *inp = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w+");
    
    if(inp==NULL)
      printf("File could not be opened\n");
    
    else
    {
      int i=0, k;  
      int size=0, n;
      
      fscanf(inp, "%d", &n);
      fscanf(inp, "%d", &k);
      
      if(n>0 && k>0 && n<10000 && k<10000)
      {
          int numbers[n+1];
          
          while (size<n)
          {
              fscanf(inp, "%d", &numbers[i]);
              printf("%d\n", numbers[i]);
              i++;
              size++;
          }
          
          if(k<=(n/2))
          {
              selectionSort(numbers, n, out);
              

          }
          
          if(k>(n/2))
          {
              bubbleSort(numbers, n, out);
          }
      }
      else
         printf("Your numbers specifications are not as we wanted!\n");
      
      fclose(inp);
      fclose(out);
    	 
    }
    
    system("PAUSE");
    return 0;
}

void bubbleSort(int number_array[], int n, FILE *out)
{
     int temp;
     int i, j;
 
     for (i=1; i<n; i++)
     {
         for (j=0; j<n-i; j++)
         {
             if(number_array[j] > number_array[j+1])
             {
                        temp = number_array [j];
                        number_array [j] = number_array [j+1];
                        number_array [j+1] = temp;
             }
         }
     }
     
     fprintf(out, "%d", number_array[0]);
}

void selectionSort(int number_array[], int size, FILE *out)
{
   int   i, j, temp, min;
 
   for (i = 0; i < size - 1; i++) 
   {
      min = i;
      for (j = i + 1; j < size; j++)
         if (number_array[min] > number_array[j])
            min = j;
      temp = number_array[min];
      number_array[min] = number_array[i];
      number_array[i] = temp;
   }
   
   fprintf(out, "%d", number_array[0]);
}

