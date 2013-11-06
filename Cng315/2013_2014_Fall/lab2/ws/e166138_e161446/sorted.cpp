#include <stdio.h>
#include <stdlib.h>

void binary_search(int arr[], int key, int ifirst, int ilast)
{
  int i,y,imiddle;
  FILE *out= fopen("output.txt","w+");
  for(i=0;i<=ilast;i++){               
   y=key-arr[i];
   ifirst = 0;
   imiddle = (ifirst+ilast)/2;
 
   while(ifirst <= ilast)
   {
      if (arr[imiddle]<y)
         ifirst = imiddle + 1;    
      else if ( arr[imiddle] == y ) 
      {
           if(y>arr[i])
         {fprintf(out,"%d %d\n", y, arr[i]);}
         break;
      }
      else
         ilast = imiddle - 1;
 
      imiddle = (ifirst + ilast)/2;
   }
   }
   fclose(out);
}

int main (){
    int n,k,m,bos,result,temp;
    int x,y;
    int a[n];
    FILE *f;
    f = fopen("sorted.txt","r");
    
    int i=0;
    int j;
    fscanf(f,"%d %d",&n,&k);
    fclose(f);
    
    f = fopen("sorted.txt","r");
    while(!feof(f))
    {
           if(i==0 || i==1){
                   fscanf(f,"%d",&bos); 
                   i++;
                   }
           else{
                fscanf(f,"%d",&a[i-2]);
                i++;
           }
     }
     fclose(f);
     printf("n=%d k=%d\n",n,k);
     for(i=0;i<n;i++){printf("%d\n",a[i]);}
    binary_search(a,k,0,n-1);
    
    system("pause");
    return 0;
}
