#include<stdio.h>


int main()
{
    int i,a,b,c,x,d,f,e;
    FILE *dosya2,*dosya3;
    int *list =(int *) malloc(sizeof(int));
    dosya2=fopen("output.txt","a");
    dosya3=fopen("sorted.txt","r");
    fprintf(dosya2,"sortedlist \n");
    fscanf(dosya3,"%d",&d);
    fscanf(dosya3,"%d",&f);
     for(i=0;i<d;i++){
           fscanf(dosya3,"%d",&c);
           list[i]=c;
    }
    for(i=0;i<d;i++){
           e=f-list[i];
           for(x=2;x<d;x++){
               if(list[x]==e) {
                       printf("%d %d\n",list[i],e);
                       fprintf(dosya2,"%d %d \n",list[i],e);    
                       }      
       }
    }
    fclose(dosya2);
    fclose(dosya3);
   

    
    system("pause");
    return 0;
}  
