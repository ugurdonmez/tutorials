#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,k,i=0,j=0,temp;
   char ch;
   FILE *fp2,*fp3;
   
   
   fp3= fopen("sorted.txt","r");
   fp2 = fopen("output.txt","w");
   
   if( fp3 == NULL )
   {
      printf("Error while opening the file.\n");
      exit(0);
   }
   if(fp2 == NULL)
   {
      printf("Error while opening the file.\n");
      exit(0);
   }
   
   fscanf(fp3,"%d",&i); 
   n=i;
   fscanf(fp3,"%d",&i);
   k=i;
   printf("n=%d\n",n);
   printf("k=%d\n",k);
   
   int arr[n+2];
   arr[0]=n;
   arr[1]=k;
   int a;
   
   
   for(a=0;a<=n;a++) //writing in the array
   {
                    fscanf(fp3,"%d",&i);
                    arr[a+2]=i;
   }
   
   int s,r,l,z;
   for(j=2;j<=n+1;j++)
   {
                    s=arr[j];
                    for(z=2;z<=n+1;z++)
                    {
                                r=arr[z];
                                if((r+s)==k)
                                {
                                          fprintf(fp2,"%d %d\n",s,r);
                                }     
                                     
                    }
                    
   }
   
   fclose(fp3);
   fclose(fp2);
   system("pause");
   return 0;
}
