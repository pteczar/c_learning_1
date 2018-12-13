#include <stdio.h>

 int main (void) 
 {
     int  n, number, triangularNumber = 0;
     
     printf ("What triangular number do you want? ");
     
     scanf  ("%i", &number);

     
     n = 0;

     while (n < number)
{   
     ++n;
     
     triangularNumber += n;
 }
     printf ("Triangular number %i is %i\n", number, triangularNumber);
     
     
     return 0;
     
      } 