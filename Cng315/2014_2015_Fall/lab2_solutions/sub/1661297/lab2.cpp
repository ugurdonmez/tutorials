#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int n,k,r,i,j,f,t,max;
    FILE *inp= fopen("input.txt","r");
    FILE *out= fopen("output.txt","w+");
    fscanf(inp,"%d", &n);
    fscanf(inp,"%d", &k);
    fscanf(inp,"%d", &r);
    char c,temp1[k],temp2[k];
    fscanf(inp,"%c", &c);
    max = n*k+n-1; //+n-1 is for the \n which is at the end of every line except last one
    
    char * list = (char *) malloc (sizeof(char) * max );
    
    for (i  = 0; i < max ;i++ )
          fscanf(inp,"%c", &list[i]);
      
    for(i=0;i<max;i+=k+1) //main loop goes on by max size skips line by line
    {
        f=i;//start of the line
        for(t=0;t<k;t++,f++)
            temp1[t]=list[f];//get the line in a temp array
        for(j=i+k+1;j<max;j+=k+1)//continue from the next line until the end
        {
            f=j;//start of the next line
            for(t=0;t<k;t++,f++)
                temp2[t]=list[f];//get the next line in another temp array
            if(strcmp(temp1,temp2)>0)//check lines if temp1 smaller than temp2
            {
               /*
               swap the lines 
               */
               f=i;
               for(t=0;t<k;t++,f++)
                   list[f]=temp2[t];
                   
               f=j;
               for(t=0;t<k;t++,f++)
                   list[f]=temp1[t];
             }
        }
    }
      
          
    for(i=0;i<max;i++)
          fprintf(out,"%c",list[i]);
}
