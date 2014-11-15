#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x;
    int y;
    int f;
    int counter;
    
    while(counter<=5)
    {
       printf("Enter x and y values:\n");
       scanf("%d %d", &x,&y);
       
       if (x>y)
       {f= x;
       printf("f is %d",f);
           
       }              
         else if (x<y)
         {f=5;
         printf("f is %d", f);
          }
          
          else 
          {f=x+y;
          printf("f is %d",f);            
          }
          
          counter=counter+1;         
                     
    }
                     
    //system("pause");
    
    return 0 ;
    
    
    
    
}
