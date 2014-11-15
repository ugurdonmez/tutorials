/* ugur donmez */

/* calculates the average */

#include <stdio.h>

int main( void )
{
   int counter; 
   int grade;  
   int total;   
   int average; 
   
   total = 0;
   counter = 0;
   
   while ( counter < 5 ) {     /* loop 10 times */
      printf( "Enter grade: " ); /* prompt for input */
      scanf("%d",&grade);
      tolal += grade;
     counter++;
   } 
   
   
   average = total / 5; 

   printf("Average is %d\n",average);
   
   return 0;

}