/*Write a program that takes an integer keyed in from the terminal and extracts and displays 
each digit of the integer in English. So, if the user types in 932, the program should 
display nine three two Remember to display “zero” if the user types in just a 0. 
(Note: This exercise is a hard one!) */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, op = 0, number2 = 0, mult = 1;

    printf("Enter your number.\n");
    scanf("%i", &number);

    
    while(number)
{
    op = number % 10;
    number /= 10;
     number2 = number2 * mult + op;
        while (mult != 10) 
        
{
              mult = mult * 10;
}
}

    op = 0;

    do {
        op = number2 % 10; 
    if ( op == 1 )
        printf ("one\n");
    
    else if ( op == 2 )
        printf ("two\n");
    
    else if ( op == 3 )
        printf ("three\n");
    
    else if ( op == 4 )
        printf ("four\n");

    else if ( op == 5 )
        printf ("five\n");

    else if ( op == 6 )
        printf ("six\n");

    else if ( op == 7 )
        printf ("seven\n");

    else if ( op == 8 )
        printf ("eight\n");

    else if ( op == 9 )
        printf ("nine\n");
    
    else if ( op == 0 )
        printf ("zero\n");
    
 number2 = number2 / 10;
           }
        while (number2 != 0);  
   

    return 0;
}
