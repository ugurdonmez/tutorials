#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int n=5;
    int k=4;
    
    // I dont know how to read from text, you can change n and add more input.
    char *a[n];
    a[0]= "AAAB";
    a[1]= "BBCC";
    a[2]="BCBA";
    a[3]="ABCA";
    a[4]="CCBA";
    
    char temp[k];
    int counter1=0;
    int counter2=k-1;
    
    while (counter2>=0){
    if(a[counter1][counter2]>a[counter1+1][counter2]){strcpy(&temp,&a[counter1]);strcpy(&a[counter1],&a[counter1+1]); strcpy(&a[counter1+1],&temp);
    
    counter1--;counter1--;
    if (counter1<0){counter1=-1;}
    
                       }                                                                                                                  
    counter1++; 
    
    if(counter1==n-1){counter1=0;counter2--;}
    
}
    
    counter1=0;
   while(counter1<n){printf("%s\n",a[counter1]);counter1++;}
    
  printf("\n");
  system("PAUSE");	
  return 0;
}
