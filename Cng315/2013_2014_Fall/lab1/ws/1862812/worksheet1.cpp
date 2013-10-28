#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void swap(int *,int *);


int main()
{
    int n,k;
    char *a;
    string mystring;
    FILE *inp=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w+");
    if(inp!=NULL)
    {
        for(int i=0;i<2;i++)
        {
            if(i==0)
            {
                fscanf(inp,"%d",&n);
            }
            else if(i==1)
            {
                fscanf(inp,"%d",&k);                
            }
        }
        int array[n];
        int i=0;
        int temp;
        int min;
        if(k<=n/2)
        {
            //Selection sort
            for(i=0;i<n;i++)
            {
                fscanf(inp,"%d",&temp);
                array[i]=temp;                                                                
            }

            for(i=0;i<k;i++)
            {
                for(int j=i+1;j<n;j++)
                {                    
                    if(array[j]<array[i])
                        swap(array+i,array+j);                        
                    
                }       
            }
                        
            fprintf(out,"%d",array[k-1]);         
        }
        else if(k>n/2)
        {
            //Bubble sort
            for(i=0;i<n;i++)
            {
                fscanf(inp,"%d",&temp);
                array[i]=temp;                                                                
            }
            for(i=0;i<k;i++)
            {
                for(int j=i+1;j<n;j++)
                {                    
                    if(array[j]<array[i])
                        swap(array+i,array+j);                        
                        
                }       
            }
            fprintf(out,"%d",array[k-1]);
        }
        
    }
    else
        cout<<"Couldn't open file!"<<endl;
    system("pause");
    return 0;
}

void swap (int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}     



