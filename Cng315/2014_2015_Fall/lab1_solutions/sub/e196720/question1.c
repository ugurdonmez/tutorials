#include <stdlib.h>
#include <stdio.h>




int main()
{
    
    int size;
    FILE * f;
    f=fopen("input.txt","r");
    fscanf(f,"%d",&size);
    int a[size];
    int i;
    for(i=0;i<size;i++)
       fscanf(f,"%d",&a[i]);
    
     
    int c=0;
    int j=0;
    for(i=0;i<size;i++)
        for(j=i;j<size;j++)
         { 
         if(a[j]<=a[j+1])
            c++;
         else 
             {
               c++; 
               break;
             }
           }
    
     FILE * f1;
    f1=fopen("output.txt","w");
    fprintf(f1,"%d \n",c);
    fclose(f);
    fclose(f1);
system("pause");   
return 0;    
}
