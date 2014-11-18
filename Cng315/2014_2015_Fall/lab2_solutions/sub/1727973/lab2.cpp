//----------------------------------------------------------------------------//
//Suat Sayharman
//1727973
//----------------------------------------------------------------------------//
//I wasn't remembering all the string stuff so I used integers instead of letters
//In the Radix sort we sort numbers by looking their decimals 1 by 1 to the left to right
//So I got the digits by mod 10 and started to sort by coparing 1 digit at a time.
//Then I repeat the same scenario by getting rid of the last digits of numbers by dividing 10-100-1000...
//So I reached all the digits seperately (the least significant digit to highest) and sorted all numbers by the digits I get
//Finally I get a perfect Radix Sorted list at the end.
//----------------------------------------------------------------------------//
#include <stdio.h>
#include <stdlib.h>

int C[5] = {1112,2233,2321,1231,3321};
//----------------------------------------------------------------------------//
void aPrinter(int a[])
{
    int s; 
    for(s=0;s<5;s++)
        printf("%d\n",a[s]);
}
//----------------------------------------------------------------------------//
void aSorter(int c[])
{
    int temp, i, j, t, g=1; 
    for(t=1;t<10000;t=t*10)
    {
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(((c[i] / t) % 10) > ((c[j] / t ) % 10))
                {    
                    temp = c[i];
                    c[i] = c[j];
                    c[j] = temp;
                }
            }       
        }
        printf("Sorted list by decimal %d :\n", g++);
        aPrinter(C);
        printf("\n");
    }
}
//----------------------------------------------------------------------------//
int main()
{
    int i;
    printf("The unsorted List:\n");    
    for(i =0; i<5;i++)
        printf("%d\n",C[i]);
    printf("\n");
    aSorter(C);           
    system("pause");
    return 0;
}
//----------------------------------------------------------------------------//
