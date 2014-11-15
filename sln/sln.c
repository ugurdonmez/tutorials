#include <stdio.h>

int sum( int a, int b ) {
   
   return a+b;
}

int main() {
   
   float amount = 0;
   
   int choose = 0;
   
   float money = 1;
   
   choose = money;
   
   printf("%d\n", sum(choose,sum()) );
   
   while ( choose != -1 ) {
      
      printf("Enter a choose and money : ");
      scanf("%d %f",&choose, &money);
      
      if ( choose == 0 ) {
         
         if ( amount > money ) {
            amount -= money;
            printf("Balance is %f\n",amount);
         }
         else {
            printf("Negative balance");
         }
         
      }
      else if ( choose == 1 ){
         amount += money;
         printf("Balance is %f\n",amount);
      }
      
   }
   
   return 0;

}