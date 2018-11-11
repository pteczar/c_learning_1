#include <stdio.h>
#include <string.h>
 
int main () {
   char str[50];
 
   printf("Enter a string : ");
  gets(str);
 
   printf("You entered: %s", str);
 
   return(0);
}