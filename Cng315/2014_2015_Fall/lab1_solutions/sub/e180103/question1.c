#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *in,*out;
  in= fopen("input.txt","r");
  out= fopen("output.txt", "w");
  int size, temp;
  int k,j,i;
  fscanf(in, "%d", &size);
  
  int unsorted[size];
  for(i=0;i<size;i++)
  fscanf(in,"%d",&unsorted[i]);
  
  for (i=0;i<5;i++)
  {
      fprintf(out,"[%d] ", unsorted[i]);
      for(j=i+1;j<5;j++)
      {
              if(i==j-1 && unsorted[i]<unsorted[j])
              fprintf(out,"[%d %d] ", unsorted[i],unsorted[j]);
              else if(i!=j-1 && unsorted[j-1]<unsorted[j])
              {
               fprintf(out,"[");
               for(k=i;k<=j;k++)
                  fprintf(out,"%d ", unsorted[k]);
               fprintf(out,"] ");
              }
              else break;
      }
  }
  system("PAUSE");	
  return 0;
}
