/* ugur donmez */

/* calculates the product of three integers */

#include <stdio.h>
#include <stdlib.h>

int main() {
   
   int x,y,z;
   
   int result;
   
   printf("Enter three integer: ");
   scanf("%d %d %d",&x,&y,&z);
   
   result = x * y * z;
   
   printf("Product is %d\n",result);
   
   return 0;
   
}