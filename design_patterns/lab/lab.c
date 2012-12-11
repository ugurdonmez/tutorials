#include <stdio.h>

void print(){

    int c;
    
    if ((c = getchar()) != '\n' ) 
        print();
    else 
        return;
    printf("%c",c);
    
}

int n1[4][3] = {{1},{0,1},{0,0,1}};
int n2[4][3] = {0,1,1,1,0,1,1,1,0,1,1,1};

int main() {
    
    int n[10][10], i ,j,u=0,d=0,l=0;
    
    for(i = 0 ;i < 10 ; i++ )
        for(j = 0 ; j < 10 ; j++ ) 
            n[i][j] = i+j;
    
    for(i = 0 ;i < 10 ; i++ )
        for(j = 0 ; j < 10 ; j++ ) {
            if(i>j) u+= n[i][j];
            if(i==j) d+=n[i][j];
            if(i<j) l += n[i][j];
        }
    
    printf("%d %d %d\n",u,d,l);
}