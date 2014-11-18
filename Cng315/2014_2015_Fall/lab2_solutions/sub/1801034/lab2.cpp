#include <stdio.h>
#include <stdlib.h>



int main()
{
 FILE *f;
 f=fopen("input.txt","r");
 FILE *f2;
 f2=fopen("output.txt","w");
 int n, k, r, i, j, l;
 
 fscanf(f,"%d",&n);
 fscanf(f,"%d",&k);
 fscanf(f,"%d",&r);
 char A[n][k+1];
 char B[n][k+1];
 char C[r];
 /*for(i=0;i<n;i++)
 {
                 A[i]=(char*)malloc((k+1)*sizeof(char));
                 B[i]=(char*)malloc((k+1)*sizeof(char));
 }*/
 //printf("%d %d %d",n,k,r);
 for(i=0;i<n;i++)
 fscanf(f,"%s",A[i]);

 for(i=0;i<r;i++)
 C[i]=0;
 for(i=0;i<n;i++)
 printf("%d-  %s\n",i,A[i]);
 l=k;
 int temp;
 while(l>0)
 {
           
           for(i=0;i<r;i++)
            C[i]=0;
           for(i=0;i<n;i++)
           {
            C[A[i][l-1]-65]++;
            //printf("k=%d, %d-%d\n",k,A[i][k-1]-65,C[A[i][k-1]-65]);
           }
           
           for(i=0;i<r-1;i++)
            C[i+1]+=C[i];
           
           printf("C: %d %d %d\n",C[0],C[1],C[2]);
           
           for(i=n-1;i>=0;i--)
            {
                           for(j=0;j<k+1;j++)
                           {temp=A[i][l-1]-65;
                             B[C[temp]-1][j]=A[i][j]; 
                             
                           }
                           C[temp]--;
                           printf("C: %d %d %d\n",C[0],C[1],C[2]);
            }
            //printf("C: %d %d %d\n",C[0],C[1],C[2]);
            
           for(i=0;i<n;i++)
            printf("%s\n",B[i]);
           
           l--;
 }
 printf("bit\n");
 for(i=0;i<n;i++)
 fprintf(f2,"%s\n",B[i]);
 
 
    
    
 system("PAUSE");
 return 0;   
}
