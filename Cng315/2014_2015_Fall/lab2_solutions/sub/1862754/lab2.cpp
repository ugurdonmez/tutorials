#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
     
     int n,k,r;
     
     FILE *input;
     input=fopen("input.txt","r");
     fscanf(input,"%d",&n);
     fscanf(input,"%d",&k);
     fscanf(input,"%d",&r);
     //printf("%d %d %d\n",n,k,r);
     char **array;
     array=(char **) malloc(n*sizeof(char *));
     int counter;
     for(counter=0;counter<n;counter++)
         array[counter]=(char *) malloc(k*sizeof(char));
     
     for(counter=0;counter<n;counter++)//file'i okudum
         fscanf(input,"%s",array[counter]);
     fclose(input);
     
     for(counter=0;counter<n;counter++)//kontrol
         printf("%s\n",array[counter]);
         
     long c[n];
     //printf("%d",'A');
     for(counter=0;counter<n;counter++)//key=i
         c[counter]=0;
     
     /*for(counter=2;counter<k;counter++)//key<=i
         c[counter]+=c[counter-1];*/
         
     printf("arr: %d \n",array[0][0]);
     
     int i;
     for(i=1;i<=k;i++){
          for(counter=0;counter<n;counter++){
               c[counter]=c[counter]+((array[counter][k-i])-65)*(pow(r,i-1));
               printf("%d arr: %d \n",c[counter],array[counter][k-i]-65);
               }
         printf("\n\n");
     }//ridiculously sorted from right to left
     //the smallest c[counter] value is the most first
     
     for(counter=0;counter<n;counter++)
         printf("%d ",c[counter]);
     
     
     
     FILE *output = fopen("output.txt","w");

     for(counter=0;counter<n;counter++)
          fprintf(output,"%s\n",array[counter]);
     
     fclose(output);
          
     system("pause");
     return 0;
     
}
