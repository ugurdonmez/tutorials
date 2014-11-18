#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void countsort(char ** str,int k,int r,int c ,int n)
{
     //int len=strlen(str);
     char ** output=(char **) malloc(n*256);
          int i;
          
     for(i=0;i<n;i++)
             output[i]=(char *) malloc(k);
     
     int count[r];
    
      for(i=0;i<r;i++)
          count[i]=0;
      
      for(i=0;i<n;i++)
          ++count[(str[i][c])-65];
     
     for(i=1;i<r;i++)
         count[i]+=count[i-1];
    
     for (i=n-1;i>=0;i--)
        { 
           output[count[(str[i][c])-65]-1]=str[i];
          --count[(str[i][c])-65];
          }
      
      for(i=0;i<n;i++)
         str[i]=output[i];
      
     
     
}


void radix(char** str,int k,int r,int n)
{
     int i;
     int j;
     int m;
  for(i=k-1;i>=0;i--)
  {
   
      countsort(str,k,r,i,n);                  
    for(m=0;m<n;m++)
                 printf("%s\n",str[m]);
                 printf("\n\n");
           
  }     
     
     
     
     
     
     
     
}
void main()
{
          int k,n,r;
    
             FILE * f=fopen("input.txt","r");
             fscanf(f,"%d",&n);
             
             fscanf(f,"%d",&k);
             fscanf(f,"%d",&r);
     
             
          char ** str=(char **) malloc(n*256);
          int i;
          
          for(i=0;i<n;i++)
             str[i]=(char *) malloc(k);
             
             
             
             for(i=0;i<n;i++)
                 fscanf(f,"%s",str[i]);
             
             
             for(i=0;i<n;i++)
                 printf("%s\n",str[i]);
             printf("\n\n");
             FILE * f1=fopen("output.txt","w");
              radix(str,k,r,n); 
              for(i=0;i<n;i++)
                 printf("%s\n",str[i]);
              for(i=0;i<n;i++)
                 fprintf(f1,"%s\n",str[i]);
              
             
//              str[0]="AAAB";
//             str[1]="BBCC";
//            str[2]="BCBA";
//             str[3]="ABCA";
//            str[4]="CCBA";
//            for(i=0;i<5;i++)
//          printf("%s \n",str[i]);
// 
//          
         
//     
//      for(i=0;i<5;i++)
//          printf("%s \n",str[i]);
 
    
     
     fclose(f);
     fclose(f1);
     
system("pause");     
}
