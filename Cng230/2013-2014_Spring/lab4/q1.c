/* ugur donmez */

/* validate input in range 1-10 */

#include <stdio.h>

int main( void )
{
   
   int input;
   
   printf("Enter a number between 1 and 10 : ");
   scanf("%d",&input);
   
   if ( input < 0 ) {
      printf("Number is below 1.\n");
   }
   else if ( input > 10 ) {
      printf("Number is above 10.\n");
   }
   else {
      printf("The number is %d.\n",input);
   }
   
   return 0;
   
}