// Hamza GUPUR 1727874 CNG 315

#include <stdio.h>
#include <stdlib.h>



void FuncBiggest(int , int ,int *);
int result;

int main() 
{
    int i,j,k,n;
    
    FILE *input= fopen("input.txt","r");
    FILE *output= fopen("output.txt","w+");
    
    fscanf(input,"%d", &n);
    
    int * numbers;
    numbers = (int *)malloc(sizeof(int)*(n));
    
    for (i=0;i<n;i++) 
    {
        fscanf(input,"%d", &numbers[i]);
    }
    
    result=n;
    
    for(int g=0;g<5;g++)
    {
        printf("%d\n", numbers[g]);
    }
    
    for (i=0;i<n-1;i++)
    {
        FuncBiggest(i,n,numbers);
    }
     
    fprintf(output,"%d", result);  


    fclose(input);
    fclose(output);
    
    system("PAUSE");
    return 0;    
}

void FuncBiggest(int j, int n,int *numbers)
{
    if(numbers[j]<numbers[j+1])
    {
        j++;
        result++; 
        FuncBiggest(j,n,numbers);       
    }    
}
