#include <stdio.h>

int main(){
     
   int line1array[1] = {5};
   int line2array[5] = {3,1,2,5,4};
   

   
   
int midofarray = line1array[0]/2;
int counter = 0;
while(counter<midofarray) {
                          if (line2array[counter]>line2array[counter+1]){
                                                                         int swap = line2array[counter+1];
                                                                         line2array[counter+1]=line2array[counter];
                                                                         line2array[counter]=swap;
                                                                         }
                          
                          counter=counter+2;
                          }
counter = midofarray;
while(counter<line1array[1]) {
                             if (line2array[counter+1]!=NULL){
                          if (line2array[counter]>line2array[counter+1]){
                                                                         int swap = line2array[counter+1];
                                                                         line2array[counter+1]=line2array[counter];
                                                                         line2array[counter]=swap;
                                                                         }
                          counter=counter+2;
                          
                          
                          }    else break;         }
counter=0;
if (midofarray>2){
while(counter<midofarray) {
                          
                          if (line2array[counter+3]!=NULL){
                                                           
                                                           if(line2array[counter+3]<line2array[counter]){
                                                                             int swap = line2array[counter+3];
                                                                         line2array[counter+3]=line2array[counter];
                                                                         line2array[counter]=swap;
                                                                             }
                               else if (line2array[counter+3]<line2array[counter+1]){
                                                                             int swap = line2array[counter+1];
                                                                         line2array[counter+1]=line2array[counter+3];
                                                                         line2array[counter+3]=swap;
                                                                             }
                                                                             
                               if(line2array[counter+2]<line2array[counter]){
                                                                             int swap = line2array[counter+2];
                                                                         line2array[counter+2]=line2array[counter];
                                                                         line2array[counter]=swap;
                                                                             }
                               else if (line2array[counter+2]<line2array[counter+1]){
                                                                             int swap = line2array[counter+1];
                                                                         line2array[counter+1]=line2array[counter+2];
                                                                         line2array[counter+2]=swap;
                                                                             }
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           
                                                           counter=counter+4;}
                               
                                                           
                                                           
                                                           
                                                           
                                                           
                          else if (line2array[counter+2]!=NULL){
                               if(line2array[counter+2]<line2array[counter]){
                                                                             int swap = line2array[counter+2];
                                                                         line2array[counter+2]=line2array[counter];
                                                                         line2array[counter]=swap;
                                                                             }
                               else if (line2array[counter+2]<line2array[counter+1]){
                                                                             int swap = line2array[counter+1];
                                                                         line2array[counter+1]=line2array[counter+2];
                                                                         line2array[counter+2]=swap;
                                                                             }
                               
                               
                               
                               counter=counter+3;}
                          
                          
                          else break;
                          }     
                          
                 }       
             
counter = midofarray;  

while(counter<line1array[0]) {
                             
                             
                             
                              
                             if (line2array[counter+3]!=0){
                                                             
                                                           
                                                           if(line2array[counter+3]<line2array[counter]){
                                                                             int swap = line2array[counter+3];
                                                                         line2array[counter+3]=line2array[counter];
                                                                         line2array[counter]=swap;
                                                                             }
                               else if (line2array[counter+3]<line2array[counter+1]){
                                                                             int swap = line2array[counter+1];
                                                                         line2array[counter+1]=line2array[counter+3];
                                                                         line2array[counter+3]=swap;
                                                                             }
                                                                             
                               if(line2array[counter+2]<line2array[counter]){
                                                                             int swap = line2array[counter+2];
                                                                         line2array[counter+2]=line2array[counter];
                                                                         line2array[counter]=swap;
                                                                             }
                               else if (line2array[counter+2]<line2array[counter+1]){
                                                                             int swap = line2array[counter+1];
                                                                         line2array[counter+1]=line2array[counter+2];
                                                                         line2array[counter+2]=swap;
                                                                             }
                                                           
                                                           
                                                           
                                                           counter=counter+4;}
                               
                                                           
                                                           
                                                           
                                                           
                                                       
                          else if (line2array[counter+2]!=NULL){
                              
                               if(line2array[counter+2]<line2array[counter]){
                                                                             int swap = line2array[counter+2];
                                                                         line2array[counter+2]=line2array[counter];
                                                                         line2array[counter]=swap;
                                                                             }
                               else if (line2array[counter+2]<line2array[counter+1]){
                                                                             int swap = line2array[counter+1];
                                                                         line2array[counter+1]=line2array[counter+2];
                                                                         line2array[counter+2]=swap;
                                                                             }
                               
                               
                               
                               counter=counter+3;}
                          
                          
                          else break;
                          }   
                             
counter = midofarray;  

while(counter<line1array[0]) {    
                             
                             
                             if(line2array[counter]<line2array[counter-1]){
                                                                           int counter3=2;
                                                                          while (line2array[counter]<line2array[counter-counter3])
                                                                          
                                                                          {
                                                                                counter3++;
                                                                                
                                                                          }
                                                                           
                                                                           int swap = line2array[counter];
                                                                         line2array[counter]=line2array[counter-counter3+1];
                                                                         line2array[counter-counter3+1]=swap;
                                                                           
                                                                           
                                                                           counter++;
                                                                           }
                                                                           else break;
                             
                             }               
                             
                                    
                            
                          
                          
     counter=0;
     
     while(counter<line1array[0]){printf("%d ",line2array[counter]); counter++;}
     printf("\n");
     
     return 0 ;
     
     }
