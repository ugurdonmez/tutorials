#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   int n,k,i=0,j=0,small,temp;
   char ch, file_name[25],file_name2[25];
   FILE *fp,*fp2;
   
   
 
   printf("Enter the name of file you wish to see\n");
   gets(file_name);
   
   printf("Enter the name of output file you wish to see\n");
   gets(file_name2);
 
   fp = fopen(file_name,"r");
   fp2 = fopen(file_name2,"w");
   
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
   /*
   printf("The contents of %s file are :\n", file_name);
 
   while( ( n = fgetc(fp) ) != EOF )
      printf("%c",ch);
   */
   
   fscanf(fp,"%d",&i);   //Reading n & k from the file
   n=i;
   fscanf(fp,"%d",&i);
   k=i;
   printf("n=%d\n",n);
   printf("k=%d\n",k);
   
   int arr[n+2];
   arr[0]=n;
   arr[1]=k;
   int a;
   
   
   for(a=0;a<=n;a++)     //writing in the array
   {
                    fscanf(fp,"%d",&i);
                    arr[a+2]=i;
   }
   
   
   if(k<=n/2)                  //selection sort
   {
    
    for(i=0;i<(n+1);i++)
    {
                    small=i;
                    for(j=(i+1);j<(n+2);j++)
                    {
                                            if(arr[j]<arr[small])
                                                small=j;
                    }
                    if(small!=i)
                    {
                                temp=arr[i];
                                arr[i]=arr[small];
                                arr[small]=temp;
                    }
    }
    int s=0;
    for(s=0;s<n+2;s++)
    {
                      printf("%d\n",arr[s]);
    }
             
             
             
             
             
             
   }
   else if(k>n/2)                               // bubble sort            
 
   {
      int i=0,j=0,temp=0;
      for(i=1;i<(n+2);i++)
      {
                          for(j=0;j<(n+1);j++)
                          {
                                              if(arr[j]>arr[j+1])
                                              {
                                                                 temp=arr[j];
                                                                 arr[j]=arr[j+1],
                                                                 arr[j+1]=temp;
                                              }
                          }
      }  
                  
                
   }   
   
   
   fprintf(fp2,"%d",arr[k]);
   

   fclose(fp);
   fclose(fp2);
   system("pause");
   return 0;
}
