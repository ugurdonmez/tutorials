/* CNG 315 Worksheet 1
   Ecem Gokdogan 
   1727825
*/

#include<stdio.h>
#include<stdlib.h> 

int main()
{
    int A[9999];
    int N;
        
    FILE = *fp; 
    fp = fopen("input.txt", "r");
    
    ins (0, N-1, N);
    
    FILE = *fptr;
    fptr = fopen("output.txt", "w");
     if (fptr == NULL)
     {
              printf("File doesn't exist");
              return;
     }
    
     return 0;
     system("PAUSE");

    
}
    
    
void ins (int start, int end, int N) {

int mid;
if(N>1){ 
         mid =(start + end) / 2;
         ins (start, mid, N/2);
         ins (mid+1, end, N/2);
         merge (start, mid, end, N); }
    }
    
    
    
void merge (int N, int start, int mid, int end) {
         int swap[100];
         int i, j, k, m;
         j = start;
         m = mid + 1;
         for (i = start; j <= mid && m <= end; i++) {
             if (A[j] <= A[m])
             {
                      swap[i] = A[j];
                      j++;
             }
             else 
             {
                  swap[i] = A[m];
                  m++;
             }
         }
         if (j>mid)
         {
                   for (k=m; k<=end; k++)
                   {
                       swap[i]=A[k];
                       i++;
                   }
         }
         else 
         {
              for (k=j; k<mid; k++)
              {
                  swap[i] = A[k];
                  i++;
              }
         }
         for (k=start; k<=end; k++)
             A[k] = swap[k];
         }    
    
  
  
  

    
    

