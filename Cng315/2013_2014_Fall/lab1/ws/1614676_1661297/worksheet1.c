#include <stdio.h>
#include <stdlib.h>

//Alican Kaynak - 1661297
//O. Deniz Sengün - 1614676


int main() {
int array[5];
int newarray[3];
int i=0,k,n,j;

FILE *inp= fopen("input.txt","r");
FILE *out= fopen("output.txt","w+");

		while(fscanf(inp,"%d", &array[i])!=EOF){
		i++;
        }
	fclose(inp);    


n=array[0];
k=array[1];
for(j=0;j<=3;j++){
                 newarray[j]=array[j+2];
                 }

if(k<=n/2){fprintf(out,"%d",selectionsort(newarray,n,k));}
else fprintf (out,"%d",bubblesort(newarray,n,k));
           
fclose(out);
return 0;    
}

int selectionsort(int newarray[],int n,int th){
     int c,d,position,swap,j;
     
    for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;
 
      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( newarray[position] > newarray[d] )
            position = d;
      }
      if ( position != c )
      {
         swap = newarray[c];
         newarray[c] = newarray[position];
         newarray[position] = swap;
      }
   }
    
    return newarray[th-1];
}

int bubblesort(int array[],int n,int th){
    int c,d,swap;

  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
  
      return array[th-1];
}
