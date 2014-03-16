/* ugur donmez */

/************************************************************************
 * Compares the ages of 2 people and prints appropriate message.        *
 * The ages will be entered by the user and your program will           *
 * decide which person is older than the other one.                     *
 *                                                                      *
 * Age of Person A>Age of Person B => Print “A is older than B”         *
 * Age of Person A<Age of Person B => Print “A is younger than B”       *
 * Age of Person A>Age of Person B => Print “Equal age”                 *
 ***********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
   
   int ageA,ageB;
   
   printf("Enter the age of first person: ");
   scanf("%d",&ageA);
   
   printf("Enter the age of second person: ");
   scanf("%d",&ageB);
   
   if ( ageA > ageB ) {
      printf("A is older than B\n");
   }
   else if ( ageA < ageB ) {
      prinf("A is younger than B\n");
   }
   else {
      printf("Equal age\n");
   }
   
   return 0;
}