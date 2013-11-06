#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,k,i=0,j=0,temp,z;
   char ch;
   FILE *fp,*fp2;
   
   fp = fopen("unsorted.txt","r");
   fp2 = fopen("output.txt","w");
   
   if( fp == NULL )
   {
      printf("Error while opening the file.\n");
      exit(0);
   }
   if(fp2 == NULL)
   {
      printf("Error while opening the file.\n");
      exit(0);
   }
   
   fscanf(fp,"%d",&i); 
   n=i;
   fscanf(fp,"%d",&i);
   k=i;
   printf("n=%d\n",n);
   printf("k=%d\n",k);
   
   int arr[n+2];
   arr[0]=n;
   arr[1]=k;
   int a;
   
   
   for(a=0;a<=n;a++) //writing in the array
   {
                    fscanf(fp,"%d",&i);
                    arr[a+2]=i;
   }
   
   
   for(a=0;a<=n+1;a++)
   {
                      printf("%d\n", arr[a]);
   }
   
   int s,r,l,u=0;
   int arr2[2*n];
   for(j=2;j<=n+1;j++)
   {
                    s=arr[j];
                    for(z=2;z<=n+1;z++)
                    {
                                r=arr[z];
                                if((r+s)==k)
                                {
                                          arr2[u]=s;
                                          arr2[u+1]=r;
                                          u=u+2;
                                          
                                }     
                                     
                    }
                    
   }
   for(z=0;z<2*n;z=z+1)
   {
                   
                    printf("arr %d\n",arr2[z]);
                    //fprintf(fp2,"%d %d\n",arr2[z],arr2[z+1]);
   }
   int arr3[n],arr4[n];
   j=0;
   for(z=0;z<n*2;z=z+2)
   {
                   arr3[j]=arr2[z];
                   arr4[j]=arr2[z+1];
                   j++;
   }
   for(j=0;j<n;j++)
   {
            if(arr3[j]==arr4[j])
            {
                                //fprintf(fp2,"%d %d\n",arr3[j],arr4[j]);
            }       
            else 
            {
                 for(z=0;z<n;z++)
                 {
                                 if(arr3[j]==arr4[z])
                                 {
                                                     arr3[z]=0;
                                                     arr4[z]=0;
                                 }
                 }
            }
   }
   for(z=0;z<n;z++)
   {
                   if((arr3[z]!=0 && arr4[z]!=0)&& arr3[z]!=arr4[z+1])
                   {
                       fprintf(fp2,"%d %d\n" ,arr3[z],arr4[z]);
                       printf("%d %d\n",arr3[z],arr4[z]);
                   }
   }
   
   
   
   
   fclose(fp);
   fclose(fp2);
   system("pause");
   return 0;
}
