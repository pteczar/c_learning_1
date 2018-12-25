#include <stdio.h>

int main (void)
{

    int number = 0, right_digit = 0, number2 = 0, mult = 1;
    
    printf ("This program will convert numbers as numerals into words.");
    printf ("\nPlease enter a number: ");
    scanf  ("%i", &number);
    
  while (number !=0) {
        right_digit = number % 10;    
        number = number / 10;
        number2 = number2 * mult + right_digit;
        while (mult != 10) {
              mult = mult * 10;}
  }
        
        right_digit = 0;
        
        do {
        right_digit = number2 % 10;           
        if (right_digit == 0)    
           {printf ("zero ");}
           else if (right_digit == 1)
           {printf ("one ");}
           else if (right_digit == 2)
           {printf ("two ");}
           else if (right_digit == 3)
           {printf ("three ");}
           else if (right_digit == 4)
           {printf ("four ");}
           else if (right_digit == 5)
           {printf ("five ");}                      
           else if (right_digit == 6)
           {printf ("six ");}
           else if (right_digit == 7)
           {printf ("seven ");}               
           else if (right_digit == 8)
           {printf ("eight ");}
           else
           printf ("nine "); 
        number2 = number2 / 10;
           }
        while (number2 != 0);     

    
    return 0;
}