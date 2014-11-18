#include<stdio.h>
#include<stdlib.h>
#include <cstring>

using namespace std;

/*
Görkem Buzcu
1862598
*/

int* ms(int*, int);
int min(int, int);
int* merge(int*,int*, int, int);

int main(){
    FILE *in;
    FILE *out;
    in=fopen("input.txt","r");
    out=fopen("output.txt","w");
    if(in==NULL){
                 printf("error reading file");
                 }
    int N;
    fscanf(in,"%d", &N);
    //printf("%d",N);
    int i;
    int numbers[N];
    for(i=0;i<N;i++){
                     fscanf(in,"%d ",&numbers[i]);
                     }
               
    int* newarray;
    
    newarray=ms(numbers,N);
    for(i=0;i<N;i++){
                     fprintf(out,"%d ", newarray[i]);
                     }
         
    system("pause");
    fclose(in);
    fclose(out);
    return  0;
    
    
    
    
}
int min(int a, int b){
    if(a<b) return a;
    else return b;
}

int* merge(int* arr2,int* arr1, int temp, int size){
     int *fin=(int *)malloc(size*2*sizeof(int)+sizeof(int));
     int a=0,b=0;
     int i=0;
     if(temp==-1){
                  
                  //
                  while(i<size*2){
                                  
                                  
                                  if(a<size && b<size){
                                              if(arr1[a]<arr2[b]){
                                                                  fin[i]=arr1[a];
                                                                  
                                                                  a++;
                                                                  }
                                              else{
                                                   fin[i]=arr2[b];
                                                   
                                                   b++;
                                                   }
                                              }
                                  else if(a<size && b==size){
                                              fin[i]=arr1[a];
                                              
                                              a++;
                                              
                                              }
                                  else if(a==size && b<size){
                                               fin[i]=arr2[b];
                                               
                                               b++;
                                               
                                               }
                      
                      i++;
                      }//end of while
                  
                  
                  }//end of if
     

     
     
     if(temp==1){
                 
                  //
                  while(i<=size*2){
                                  
                                  
                                  if(a<size && b<size){
                                              if(arr1[a]<arr2[b]){
                                                                  fin[i]=arr1[a];
                                                                  a++;
                                                                  }
                                              else{
                                                   fin[i]=arr2[b];
                                                   b++;
                                                   }
                                              }
                                  else if(a<size && b==size){
                                              fin[i]=arr1[a];
                                              a++;
                                              
                                              }
                                  else if(a==size && b<size){
                                               fin[i]=arr2[b];
                                               b++;
                                               
                                               }
                      
                      i++;
                      }//end of while
                  
                  
                  }//end of if 
     
     
     return fin;
     
     }

int* ms(int* numb, int n){
     int mid,i,temp=-1;
     if(n%2==0 && n>1){
                mid=n/2;
                int *fa=(int *)malloc(mid*sizeof(int));
                int *la=(int *)malloc(mid*sizeof(int));
                memcpy(fa,numb,mid*sizeof(int));
                memcpy(la,numb+mid,mid*sizeof(int));
                fa=ms(fa,mid);
                la=ms(la,mid);
                numb=merge(fa,la,temp,mid);
                return numb;
                }
     else if(n%2==1 && n>1){
          mid=n/2;
          
          int *fa=(int *)malloc(mid*sizeof(int));
          int *la=(int *)malloc(mid*sizeof(int));
          memcpy(fa,numb,mid*sizeof(int));
          memcpy(la,numb+mid,(mid+1)*sizeof(int));
          
          temp=1;
          fa=ms(fa,mid);
          la=ms(la,mid+1);
          numb=merge(la,fa,temp,mid+1);
          return numb;
          
          
          }
     else if(n==1){
          return numb;
          
          }
     
     
     }

