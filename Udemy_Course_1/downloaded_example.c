#include <stdio.h>
#include <string.h>
 
int main()
{
   char s[1000] = "mars", temp;
   int i, j = 0;
 
   
   // Calculating string length
 
   i = 0;
   j = strlen(s) - 1;

 
   while ( i < j)
   {
       temp = s[i];
       s[i] = s[j];
       s[j] = temp;
       i++;
       j--;
   }
 
    printf("\nReverse string is :%s", s);
   return (0);

   return 0;
}