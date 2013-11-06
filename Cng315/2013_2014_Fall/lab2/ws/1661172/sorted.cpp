/*
  CNG 315 - Worksheet 2 PART1
  
  Erci Candan Duranoz - 1661172 
*/

#include <stdio.h>
#include <stdlib.h>

int binarySearch (int, int, int[]);

int main()
{
    FILE *input, *output;
    int i = 0, j=0, num= 0, max = 10000;
    int kth;
    int arr[max];
    
    input = fopen("unsorted.txt", "r");
    output = fopen("output.txt", "w+");
    
    while (fscanf(input, "%d", &num) > 0) 
    {
          arr[i] = num;
          i++;
    }     
    
    int n, k, sum;
    i = 0;
    
    n = arr[0];
    k = arr[1];
    
    for(i = 2; i <= n; i++)
    {
          for(j = i; j <= (n+1); j++)
          {
                if(k == (arr[i] + arr[j]))
                {
                     fprintf(output, "%d %d\n", arr[i], arr[j]);
                }
  
          }  
    }
    
    fclose(output);
    
    system("PAUSE");
    return 0;
}
