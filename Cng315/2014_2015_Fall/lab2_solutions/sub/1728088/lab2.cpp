#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
    FILE *fp;
    FILE *fp2;
    int r,n,k,i,j;
    int a,b,c,d,e,f;
    int num,num2,n2;
    char ch;
    
    int C[20];
    //char word[n][k];
    //char a[20];
    //A = (char *) malloc(10*sizeof(char));
    fp = fopen("input.txt","r");
    if(!fp)
    {
           return 1;
    }
    fscanf(fp,"%d",&n);
    printf("n is:%d\n",n);
    fscanf(fp,"%d",&k);
    printf("n is:%d\n",k);
    fscanf(fp,"%d",&r);
    printf("n is:%d\n",r);
    char B[1000][k];
    char A[1000][k];
    //char word[n][k];
    for(i=0;i<n;i++)
    { 
      fscanf(fp," %s",&A[i]);
      printf("%s\n",A[i]);
 
    } 
    fclose(fp);
    //printf("deneme 1\n");
    n2=n;
    for(i=0;i<n2;i++)
    {
      //printf("deneme 2\n");
      ch = A[i][r];
      printf("%c\n",ch);
      // printf("deneme 3\n");
      for(j=0;j<k;j++)
      {  
        // printf("deneme 4\n");
         C[j]=0;
      }
      for(a=0;a<n;a++)
      { 
        //printf("deneme 5\n");
         num=A[i][r]-'A';
         C[num]=C[num]+1;
         //printf("deneme 6\n");
      }
      for(b=1;b<k;b++)
      {  
         //printf("deneme 7\n");
         C[b]=C[b]+C[b-1];
         //printf("deneme 8\n");
      }
      for(c=n-1;n>1;n--)
      { 
          //printf("deneme 9\n");
          num2=A[i][r]-'A';
          strcpy(B[C[num2]],A[c]);
      
          C[num2]=C[num2]-1;
          //printf("deneme 10\n");
      }
      for(d=0;d<k;d++)
      {   
          //printf("deneme 11\n");
         strcpy(A[d],B[d]);
         //printf("deneme 12\n");
      }    
      r--;
      //printf("deneme 13\n");
    }            
    
   
    //printf("deneme 14\n");
    for(i=0;i<=n;i++)
    { 
      //printf("deneme 1\n");
      printf("%s\n",A[i]);
      
    } 
    
    fp2=fopen("output.txt","w");
    if(!fp2)
    {
      return 1;
    }
    for(i=0;i<n;i++)
    {
       fprintf(fp2,"%s",A[i]);
    }
    
    fclose(fp2);
    system("pause");
    return 0;
}
