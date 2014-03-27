/* ugur donmez */

/* calculates the multiplication, addition or subtraction of two numbers */

#include <stdio.h>

int main( void )
{
   
   int a,b;
   char op;
   
   printf("Enter two numbers: ");
   scanf("%d %d",&a,&b);
   
   printf("Enter operator type: ");
   scanf(" %c",&op);
   
   if ( op == '+' ) {
      printf("Result is %d\n",a+b);
   }
   else if ( op == '-' ) {
      printf("Result is %d\n",a-b);
   }
   else if ( op == '*' ) {
      printf("Result is %d\n",a*b);
   }
   else if ( op == '/' ) {
      printf("Result is %d\n",a/b);
   } 
   else {
      printf("Invalid operator.\n");
   }
   
   return 0;
}