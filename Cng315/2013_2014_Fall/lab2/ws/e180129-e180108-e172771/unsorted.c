#include<stdio.h>


int main()
{
    int i,a,b,c,x,d,f,e;
    
    FILE *dosya1,*dosya2;
    dosya1=fopen("unsorted.txt","r");
    dosya2=fopen("output.txt","a");
    
    fscanf(dosya1,"%d",&a);
    int *list =(int *) malloc(sizeof(int));
    fscanf(dosya1,"%d",&b);
    fprintf(dosya2,"unsortedlist \n");
    for(i=0;i<a;i++){
           fscanf(dosya1,"%d",&c);
           list[i]=c;
    }
    for(i=0;i<a;i++){
                     for(x=2;x<a;x++){
                                      if(list[i]+list[x]==b)
                                         {  
                                           printf("%d %d\n",list[i],list[x]);
                                           fprintf(dosya2,"%d %d \n",list[i],list[x]);
                                           } 
                     }
    }
    
    fclose(dosya1);
    fclose(dosya2);
  
   

    
    system("pause");
    return 0;
}
