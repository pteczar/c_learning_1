#include <stdio.h>
long factorial (int nunber);
int main() {
    
    /* testing code */
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}


/* define your function here (don't forget to declare it) */

long factorial (int number)
{
    if (number == 0)
    return 1;
    else
    return(number * factorial(number-1));

}