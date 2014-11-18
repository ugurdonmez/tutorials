// Hamza GUPUR 1727874 CNG 315
#include<stdio.h>
#include<stdlib.h>

void Control(int [],int ,int );
void MergeSort(int [],int ,int ,int );

int main()
{

    int i=1,size=0,n=0;

    
    FILE *input= fopen("input.txt","r");
    FILE *output= fopen("output.txt","w+");
    
    fscanf(input,"%d", &n);
    
    int * numbers;
    numbers = (int *)malloc(sizeof(int)*(n));
    
    for (i=0;i<n;i++) 
    {
        fscanf(input,"%d", &numbers[i]);
        size++;
    }
    
    printf("From the File:\n");
    for(int g=0;g<5;g++)
    {
       
        printf("%d\n", numbers[g]);
        fprintf(output,"%d",numbers[g]);            
    }
    
	Control(numbers,0,size-1);
	
    printf("To the File:\n");
    for(int g=0;g<5;g++)
    {
        printf("%d\n", numbers[g]);
        fprintf(output,"%d",numbers[g]);            
    }
    
	fclose(input);
	fclose(output);
	system("pause");
	return 0;
}



void Control(int numbers[],int minNum,int maxNum)
{
 int middleNum;
 if(minNum<maxNum)
 {
   middleNum=(maxNum+minNum)/2;
   Control(numbers,minNum,middleNum);
   Control(numbers,middleNum+1,maxNum);
   MergeSort(numbers,minNum,middleNum,maxNum);
 }
}


void MergeSort(int numbers[],int minNum,int middleNum,int maxNum)
{ 
  int i,j,k,m;   
  j=minNum;
  int temp[30];
  m=middleNum+1;
  
  
  for(i=minNum; j<=middleNum && m<=maxNum ; i++)
  {
     if(numbers[j]<=numbers[m])
         {
             temp[i]=numbers[j];
             j++;
     }
     else
     {
             temp[i]=numbers[m];
             m++;
     }
  }
  
  
  if(j>middleNum)
  {
             for(k=m; k<=maxNum; k++)
             {
                 temp[i]=numbers[k];
                 i++;
             }
  }
  
  else
  {
             for(k=j; k<=middleNum; k++)
             {
                temp[i]=numbers[k];
                i++;
             }
  }
              for(k=minNum; k<=maxNum; k++)
              {
                 numbers[k]=temp[k];
              }  
         
}
