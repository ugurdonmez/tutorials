#include <stdio.h>
#include <stdlib.h>

int main (){
    int n,k,m,bos,result,temp;
    int x,y;
    int a[n];
    FILE *f,*out;
    f = fopen("unsorted.txt","r");
    
    int i=0;
    int j;
    fscanf(f,"%d %d",&n,&k);
    fclose(f);
    
    f = fopen("unsorted.txt","r");
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
    int found=0;
    out = fopen("output.txt","w");
    
    for(i=0;i<n;i++)
    {
                  for(j=i;j<n;j++)
                  {
                   if(i==j)printf("");
                   else if(a[i]+a[j]==k){
                                         fprintf(out,"%d %d\n",a[i],a[j]);
                                         }
                                         
                        }
                   }                
    
    
    fclose(out);
    
    system("pause");
    return 0;
}
