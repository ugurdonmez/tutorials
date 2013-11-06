/*
  CNG 315 - Worksheet2
  Evlin Hüseyinoglu - 1614494
  Gözde Aydin - 1614312
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *inp, *outp;
    int i = 0, j = 0, num = 0, max = 10000;
    int arr[max];
    
    inp = fopen("unsorted.txt", "r");
    outp = fopen("output.txt", "w+");
    
    while (fscanf(inp, "%d", &num) > 0) 
    {
          arr[i] = num;
          i++;
    }  
       
    int n, k;
    n = arr[0];
    k = arr[1];
    
    for(i = 2; i <= n; i++)
    {
          for(j = i; j <= (n+1); j++)
          {
                if(k == (arr[i] + arr[j]))
                {
                     fprintf(outp, "%d %d\n", arr[i], arr[j]);
                }
          }
    }
    
    fclose(outp);
    
    system("PAUSE");
    return 0;
}
