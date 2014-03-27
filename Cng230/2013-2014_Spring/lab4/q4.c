/* ugur donmez */

/* age */

#include <stdio.h>

int main( void )
{
   
   int age;
   
   printf("Enter age of person: ");
   scanf("%d",&age);
   

   if ( age > 90 ) {
      printf("Really old\n");
   }
   else if ( age > 70 ){
      printf("Old\n");
   }
   else {
      printf("Young\n");
   }

   return 0;
}