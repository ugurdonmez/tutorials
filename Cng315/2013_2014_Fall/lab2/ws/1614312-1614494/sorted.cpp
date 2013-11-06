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
    
    inp = fopen("sorted.txt", "r");
    outp = fopen("outputs.txt", "w+");
    
    while (fscanf(inp, "%d", &num) > 0) 
    {
          arr[i] = num;
          i++;
    }  
       
    int n, k;
    n = arr[0];
    k = arr[1];
    
    int first, last, middle, search;
    first = arr[2];
    last = arr[n];
    middle = n/2;    
    
    for(i = 2; i <=(n+1); i++)
    {
        search = k - arr[i];
        while(first <= last)
        {
           if(arr[middle] < search)
           {
               first = middle + 1;
           }
           else if(arr[middle] == search)
           {
                fprintf(outp, "%d %d\n", arr[i], search);
                break;
           }
           else
           {
               last = middle - 1;
           }
           middle = (first + last)/2;
       }
       first = arr[i+1];
       last = arr[n];
       middle = (n - i - 2)/2;
    }
    
    fclose(outp);
    
    system("PAUSE");
    return 0;
}
