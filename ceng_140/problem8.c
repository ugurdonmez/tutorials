#include <stdio.h>
#include <string.h>

int main()
{
    char n[1001];
	
    // reading input from stdin
    scanf("%s", n);
	
    const int numChars = 5;
    char tmpChar;
    int i, j, intVal, largestValue = 0;
     
    for(i = 0; i < strlen(n); i++)
    {
        if(strlen(n) - i < 5) 
            break;
        
        intVal = 1;
        for(j = 0; j < numChars; j++)
        {
            tmpChar = n[i + j];
            intVal *= atoi(&tmpChar);
 
            if(intVal > largestValue)
                largestValue = intVal;
        }      
    }
     
    printf("Largest value: %d\n", largestValue);
    return 0;
}
