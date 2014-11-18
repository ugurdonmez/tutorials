#include<stdio.h>

int main()
{
    FILE *input;
    FILE *output;
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
    int n,k,r,i,j,a,l; //n is the number of lists, k is the fixed size of the lists, r is the limitation
    //i,j,a, and l is used as counters in for loops
    fscanf(input,"%d",&n);
    fscanf(input,"%d",&k);
    fscanf(input,"%d",&r);
    
    //Checking if input is inside our boundaries
    // which is n<1000, k<10 and r<20
    /*if(n>999 || k>9 || r>19)
    {
             fprintf(output,"input is out of boundaries");
             return 0;
             }*/
    
    //continueing if input is valid
    char strings[n][k];
    for(i=0;i<n;i++)
    {
                    for(j=0;j<k;j++)
                    {
                                    fscanf(input," %c",&strings[i][j]);
                                    //reading the input file into my array
                    
                                    }
                    
                    }

    int c[n][r]; //this is my counting array for counting occurrences of letters
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            c[i][j]=0; //here i am initializing counting array with 0's
            }
                     
        }
                     
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            for(a=0;a<r;a++)
            {
                if(strings[i][j]==a+65)
                {
                    c[i][a]++; //here i am checking for every possible occurrence 
                    }
                                     
                }
            }
    }
    
    
    for(i=0;i<n;i++)
    {
        for(j=1;j<r;j++)
        {
            c[i][j]+=c[i][j-1];
        }
                     
    }
                     
  
        
    char temp[k];//this is my temporary log for swapping purposes
    
    for(a=k;a>=0;a--)
    {
        for(j=0;j<n;j++)
        {             
            for(i=0;i<n-1;i++)
            {
                if(strings[i][a]>strings[i+1][a])
                {
                    //swap strings[i][a] with strings[i][a+1]
                                                                       
                    for(l=0;l<k;l++)//swapping happens here
                    {
                        temp[l]=strings[i][l];
                        strings[i][l]=strings[i+1][l];
                        strings[i+1][l]=temp[l];
                        }//end of swap                  
                    }
                }
            }
    }
    //at this point my array is sorted
    
    
    for(i=0;i<n;i++)//printing output into output.txt
    {
        for(j=0;j<k;j++)
        {
            fprintf(output,"%c",strings[i][j]);
            }
        fprintf(output,"\n");
    }
    
    fclose(input);
    fclose(output);
    return 0;
}
