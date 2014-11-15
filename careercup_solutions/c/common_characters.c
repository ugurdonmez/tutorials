/* Write a program that gives count of common characters presented in an array of strings..(or array of character arrays)

For eg.. for the following input strings..

aghkafgklt
dfghako
qwemnaarkf

The output should be 3. because the characters a, f and k are present in all 3 strings.

Note: The input strings contains only lower case alphabets

*/
#include <stdio.h>

int main () {
   
   int array[256];
   
   int control[256];
   
   int i,j,k;
   
   char c;
   
   for ( i = 0 ; i < 256 ; i++ ) {
      array[i] = 0;
      control[i] = 0;
   }
   
   char strings[3][80] = {"aghkafgklt" , "dfghako",  "qwemnaarkf"};
   
   //strings[0] = "aghkafgklt";
   //strings[1] = "dfghako";
   //strings[2] = "qwemnaarkf";
   
   for ( i = 0 ; i < 3 ; i++ ) {
      
      for ( k = 0 ; strings[i][k] != '\0' ; k++ ) {
         c = strings[i][k];
         if ( control[c] == 0 ) {
            control[c]++;
            array[c]++;
         }
      }
      
      for ( j = 0 ; j < 256 ; j++ ) {
         control[j] = 0;
      }
   }
   
   int biggest = 0;
   
   for ( i = 0 ; i < 256 ; i++ ) {
      if ( array[i] > biggest ) {
         biggest = array[i];
      }
   }
   
   for ( i = 0 ; i < 256 ; i++ ) {
      if ( array[i] == biggest ) {
         printf("%c ",i);
      }
   }
   
   printf("\n");   
   
   return 0;
}