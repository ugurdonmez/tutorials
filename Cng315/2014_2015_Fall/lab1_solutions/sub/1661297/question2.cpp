#include <stdio.h>
#include <stdlib.h>

void merge(int first,int middle,int last,int list[])
{
  int i,j,m,temp[100]; 
  i=j=first;
  m=middle+1;
  
  while(j<=middle && m<=last)
  {
     if(list[j]<=list[m])
     {
         temp[i]=list[j];
         j++;
     }
     else
     {
         temp[i]=list[m];
         m++;
     }
     i++;
  }
  if(j>middle)
  {
     j=m;
     while(j<=last)
     {
         temp[i]=list[j];
         i++;
         j++;
     }
  }
  else
  {
     while(j<=middle)
     {
        temp[i]=list[j];
        i++;
        j++;
     }
  }
  
  for(i=first; i<=last; i++)
     list[i]=temp[i];
}

void partion(int first, int last, int list[])
{
     int middle;
     if(first<last)
     {
        middle=(first+last)/2;
        partion(first,middle,list);
        partion(middle+1,last,list);
        merge(first,middle,last,list);
     }
}
int main() 
{
    int n,y,first,last;
    FILE *inp= fopen("input.txt","r");
    FILE *out= fopen("output.txt","w+");
    fscanf(inp,"%d", &n);
    
    int * list = (int *) malloc (sizeof(int) *n );
    
    int i;
    for (i  = 0; i < n ;i++ ) 
    {
        fscanf(inp,"%d", &list[i]);
    }
    first=0;
    last=n-1;
    
    partion(first,last,list);
    
    for (i  = 0; i < n ;i++ ) 
    {
        fprintf(out,"%d ", list[i]);
    }



fclose(inp);
fclose(out);
return 0;    
} 
