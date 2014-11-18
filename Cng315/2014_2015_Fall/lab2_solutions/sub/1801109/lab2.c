#include <stdio.h>
#include <stdlib.h>

void countingsort(char,char,char);
FILE *radix;
 
int main(int argc, char *argv[])
{
  
  int n,k,r,i;
  
     
  radix=fopen("input.txt",r);
  fscanf(radix,"%d", &n);
  printf("n is %d", &n);
  fscanf(radix,"%d", &k);
  printf("k is %d", &k);
  fscanf(radix,"%d", &r);
  printf("r is %d", &r);
  
  char R1[k],R2[k],R3[k],R4[k],R5[k];  
  
  for(i=0;i<k;i++)   
                   fscanf(radix,"%c", &R1[i]);
  for(i=0;i<k;i++) 
                   fscanf(radix,"%c", &R2[i]);
  for(i=0;i<k;i++) 
                   fscanf(radix,"%c", &R3[i]);
  for(i=0;i<k;i++) 
                   fscanf(radix,"%c", &R4[i]);
  for(i=0;i<k;i++) 
                   fscanf(radix,"%c", &R5[i]);
                   
  do{
  if(R1[0]<R2[0]){
                  int temp;
                  temp=R1[];
                  R1[]=R2[];
                  R2[]=temp;        
                  countingsort(R1,R3,R2); 
                  }
  if(R1[0]<R3[0]){
                  int temp;
                  temp=R1[];
                  R1[]=R3[];
                  R3[]=temp;        
                  countingsort(R1,R4,R3);  
                  }
  if(R1[0]<R4[0]){
                  int temp;
                  temp=R1[];
                  R1[]=R4[];
                  R4[]=temp;        
                  countingsort(R1[],R5[],R4[]);
                  }
  if(R1[0]<R5[0]){
                  int temp;
                  temp=R1[];
                  R1[]=R5[];
                  R5[]=temp;        
                  countingsort(R1[],R2[],R5[]);
                  }
  k--;
  }while(k!=0);
  
  printf("Sotred list is ");
  
  for(i=0;i<k;i++)   
                   fprintf(radix,"%c", &R1[i]);
  for(i=0;i<k;i++) 
                   fprintf(radix,"%c", &R2[i]);
  for(i=0;i<k;i++) 
                   fprintf(radix,"%c", &R3[i]);
  for(i=0;i<k;i++) 
                   fprintf(radix,"%c", &R4[i]);
  for(i=0;i<k;i++) 
                   fprintf(radix,"%c", &R5[i]);
                   
  system("PAUSE");	
  return 0;
}
  
countingsort(char[],char[],char[])
{
               
               

}
  
  
