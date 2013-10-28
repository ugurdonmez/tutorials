/*
  CNG 315 - worksheet1
  Evlin Huseyinoglu - 1614494
  Erci Candan Duranoz - 1661172
  Gozde Aydin - 1614312
*/


#include <stdio.h>
#include <stdlib.h>

int selection(int *array ,int max, int n, int k);
int bubble(int *array ,int max, int n, int k);

int main()
{
    FILE *inp, *outp;
    int i = 0, num = 0, max = 10000;
    int kth;
    int arr[max];
    
    inp = fopen("input.txt", "r");
    outp = fopen("output.txt", "w+");
    
    while (fscanf(inp, "%d", &num) > 0) 
    {
          arr[i] = num;
          i++;
    }     
    
    int n, k;
    i = 0;
    n = arr[0];
    k = arr[1];
    

    if (k <= n/2)
    {
          kth = selection(arr, max, n, k);
    }
    else
    {
          kth = bubble(arr, max, n, k);
    }
    
    fprintf(outp, "%d", kth);
    
    fclose(outp);
    
    system("PAUSE");
    return 0;
}
int selection(int *array, int max, int n, int k)
{
     int pos, temp, i, j;
     
     for ( i = 2; i < ( n + 1 ) ; i++ )
     {
        pos = i;
 
        for ( j = i + 1 ; j < n ; j++ )
        {
            if ( array[pos] > array[j] )
               pos = j;
        }
        if ( pos != i )
        {
           temp = array[i];
           array[i] = array[pos];
           array[pos] = temp;
        }
        
        return array[k+2];
    }
}
int bubble(int *array, int max, int n, int k)
{
     int temp, i, j;
   
     for ( i = 2 ; i < (n+1) ; i++ )
     {
         for ( j = 0 ; j < (n - i - 1); j++ )
         {
            if ( array[j] > array[j+1] )
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp; 
            }
        }     
     }
     return array[k+2];
}
