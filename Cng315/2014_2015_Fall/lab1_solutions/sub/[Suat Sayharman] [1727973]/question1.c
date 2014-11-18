//----------------------------------------------------------------------------//
// Suat Sayharman
// 1727973
// e172797@metu.edu.tr
//----------------------------------------------------------------------------//
#include <stdio.h>
#include <stdlib.h>
//----------------------------------------------------------------------------//
int A[5] = {3,1,2,5,4};                                                         //Static array because I couldn't remember the file stuff
//----------------------------------------------------------------------------//
int sortedFinder(int size)
{
    int count = size;
    int i, end;
    int biggy = -1;
    for(i=0; i<size; i++)    
    {
        for(end = i+1; A[i] < A[end]; end++ )                                   //find the sorted doubles, triples and so on..
        {   
            if(biggy < A[end])
            {
                count ++;
                biggy = A[end];                                                 //determine the biggest in the group       
            }
        } 
        biggy = -1;                   
    }
    return count;
}
//----------------------------------------------------------------------------//
int main()
{
    printf("The # of almost sorted intervals : \n\n%d \n\n", sortedFinder(5));  // we give the size           
    
    system("pause");
    return 0;
}
//----------------------------------------------------------------------------//


