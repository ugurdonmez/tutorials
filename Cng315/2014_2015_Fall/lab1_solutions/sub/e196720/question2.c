#include <stdlib.h>
#include <stdio.h>






void  merge(int *list,int left_start,int left_end,int right_start,int right_end)
{
     int left_lenght=(left_end-left_start);
     int right_lenght=(right_end-right_start);

     int left[left_lenght];
     int right[right_lenght];
     
     int l=0;
     int r=0;
     int n=0;
     int i;
     
     for(i=left_start;i<left_end;i++,l++)
            {                
              left[l]=list[i];
              
             }
     for(i=right_start;i<right_end;i++,r++)
            {                
              right[r]=list[i];
              
             }
     for(l=0,r=0,n=left_start;(l<left_lenght) &&( r<right_lenght);n++)
     {
                if(left[l]<right[r])
                    list[n]=left[l++];
                else
                    list[n]=right[r++];                                     
                               
     }
     
      for(;l<left_lenght;l++,n++)
              list[n]=left[l];
      for(;r<right_lenght;r++,n++)
              list[n]=right[r];
      
}





void mergsort1(int* list,int left,int right)
{
     if((right-left)<=1)
        return ;
     
     int left_start=left;
     int left_end=((left+right)/2);
     int right_start=left_end;
     int right_end=right;
     
       mergsort1(list,left_start,left_end);
       mergsort1(list,right_start,right_end);
       merge(list,left_start,left_end,right_start,right_end);
   
 
}




void mergsort(int* list,int n)
{    
    mergsort1(list,0,n);     
}




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
    
    mergsort(a,size);
   
    



    FILE * f1;
    f1=fopen("output.txt","w");
    for(i=0;i<size;i++)
       fprintf(f1,"%d  ",a[i]);
    
    fclose(f);
    fclose(f1);
     
    
    
    
system("pause");   
return 0;    
}
