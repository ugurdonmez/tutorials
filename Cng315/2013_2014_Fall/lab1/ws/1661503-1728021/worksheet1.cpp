#include <stdio.h>
#include <stdlib.h>
void bubble (int [], int);
void selection (int [], int); 
int main () {
    int i=0, n, k, x;
    int arr[n];
    FILE *f, *fo;
    f= fopen ("input.txt", "r");
    
    fscanf (f, "%d %d", &n, &k);
    fclose (f);
    
    f= fopen ("input.txt", "r");
    while (!feof(f)) {
          if (i==0 || i==1) {
                   fscanf (f, "%d", &x);
                   i++;
          }
          else {
               fscanf (f, "%d", &arr[i-2]);
               i++;
               }
    }
    
    
    if (k<=n/2) {
                
                selection (arr, n);
    }
    
    else bubble (arr, n);
    
    fo= fopen ("output.txt", "w");
    fprintf (fo, "%d\n", arr[k-1]);
    fclose (f);
    fclose (fo);
    system ("pause");
    return 0;
}


void bubble(int arr[], int array_size)
{
     int i, j, temp2;
     for (i = 0; i < (array_size - 1); ++i)
     {
          for (j = 0; j < array_size - 1 - i; ++j )
          {
               if (arr[j] > arr[j+1])
               {
                    temp2 = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp2;
               }
          }
     }
}
void selection(int arr[], int array_size)
{
     int i;
     for (i = 0; i < array_size - 1; ++i)
     {
          int j, min, temp2;
          min = i;
          for (j = i+1; j < array_size; ++j)
          {
               if (arr[j] < arr[min])
                    min = j;
          }

          temp2 = arr[i];
          arr[i] = arr[min];
          arr[min] = temp2;
     }
}
