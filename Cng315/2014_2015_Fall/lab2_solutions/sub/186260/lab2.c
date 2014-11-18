#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int n = 5;
    int k = 4;
    int r = 3;
    
    char* A[n];
    
    int i,j;
    for (i = 0; i<n; i++) A[i] = malloc(k*sizeof(char));
    
    A[0]="AAAB";
    A[1]="BBCC";
    A[2]="BCBA";
    A[3]="ABCA";
    A[4]="CCBA";
    
    int B[n];
    for(i = 0; i<n; i++) B[i]=0;
    
    for (i = 0; i<n; i++) {
        for (j = 0; j<k; j++){
            B[i]+=(91-(int)(A[i][j]))*(k-(j+1));
            }
        }
        
    printf("BEFORE:\n");
    for (i = 0; i<n; i++) printf("%s | %d\n",A[i],B[i]);
    system("PAUSE");
    
    char tempA[4];
    strcpy(tempA, A[n-1]);
    int c = n-1;
    int tempB = B[c];
    
    int a;
    int q;
    for (q = 0; q < n; q++){
        for (i = n-1; i>=0; i--){
            if (B[i] > tempB) {
                  tempB = B[i];
                  /*for (a = 0; a<k; a++) {
                     tempA[a]=A[i][a];
                     }*/
                  strcpy(tempA, A[i]);
                  c = i;
                  }
            else if (B[i] < tempB){
                 B[c] = B[i];
                 B[i] = tempB;
                 /*for (a = 0; a<k; a++) {
                     A[c][a] = A[i][a];
                     A[i][a] = tempA[a];
                     }*/
                 strcpy(A[c],A[i]);
                 strcpy(A[i],tempA);
                 c = i;
                 }
            }
        }
    
    
    
    printf("\n\n\nAFTER:\n");
    for (i = 0; i<n; i++) printf("%s | %d\n",A[i],B[i]);
  system("PAUSE");	
  return 0;
}
