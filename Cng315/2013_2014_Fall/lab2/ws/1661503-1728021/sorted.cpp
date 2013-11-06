#include <stdio.h>

#include <stdlib.h>
/*int binary_search(int A[], int key, int imin, int imax)
{   
    
  if (imax < imin) {
           return 0;
           }
  else {
       
  int imid = (imin+ imax)/2;
 
    
      if (A[imid] > key){
      printf ("fdsfsf");
        return binary_search(A, key, imin, imid-1);}
      else if (A[imid] < key)
       { printf ("fdsfsf");
        return binary_search(A, key, imid+1, imax);}
      else
        
        return imid;
    }
 }
int main () {
    int n,k,x,y ;
    int *list;
    FILE *f = fopen("sorted.txt","r");
    fscanf(f,"%d %d",&n,&k);
    
    list = (int *) malloc(n * sizeof(int));
    
    
    int i,j;
       
    for ( i = 0 ; i < n ; i++ ) {
        fscanf(f,"%d", list+i);
    }
    int p;
   
    FILE *output= fopen("output.txt","w");

    for(i=0;i<n;i++)
    {
                    
              x=list[i];
              y=k-x;
              
              p=binary_search(list,y,list[0],list[n]);
              
              if (p==0) 
                        printf ("key not found");
              else {
                   fprintf(output,"%d %d\n",x, p);
                   }
    }
    fclose(output);
    
    fclose(f);
    
    
system ("pause");
return 0;   
}*/

int main() {
    int n,k,y,min,max,mid;
    FILE *f= fopen("sorted.txt","r");
    FILE *output= fopen("output.txt","w+");
    fscanf(f,"%d", &n);
    
    int * list = (int *) malloc (sizeof(int) *n );
    
    fscanf(f,"%d", &k);
    
    int i,ip;
    for (i  = 0; i < n ;i++ ) {
        fscanf(f,"%d", &list[i]);
    }
    
    
 for(i=0;i<n;i++){
                  
   y=k-list[i];
   min = 0;
   max = n-1;
   mid = (min+max)/2;
 
   while( min <= max ) {
      if ( list[mid] < y )
         min = mid + 1;    
      else if ( list[mid] == y ) {
           if(y>list[i]) {
                         fprintf(output,"%d %d\n", y, list[i]);}
                         break;
           }
      else max = mid - 1;
      mid = (min + max)/2;
   }

}

fclose(f);
fclose(output);

return 0;    
} 
