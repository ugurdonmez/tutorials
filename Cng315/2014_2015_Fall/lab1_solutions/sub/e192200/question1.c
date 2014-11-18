#include <stdio.h>

int main(){
     
     
   
   
   
   int line1array[1] = {5};
   int line2array[5] = {3,1,2,5,4};
   

     
   
   
   int result = line1array[0];
   
   int counter=0;
   
   while(counter<line1array[0]){
                                if (line2array[counter]<line2array[counter+1]){
                                                                               
                                                                               result++;
                                                                               int counter2=counter+1;
                                                                               while (counter2<line1array[0]-1){
                                                                               
                                                                               if (line2array[counter2]<line2array[counter2+1]){result++;}
                                                                               else break;
                                                                               counter2++;
                                                                               
                                                                               }
                                }
                                
                                counter++;
                                }
     
     printf("%d\n",result);
     return 0 ;
     
     }
