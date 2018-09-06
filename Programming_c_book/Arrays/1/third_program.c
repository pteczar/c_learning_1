#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Fibonacci[40] = {0}, i;

    Fibonacci[0] = 0;
    Fibonacci[1] = 1; // hardcoding the first two numbers


    //starting from the second value:

    for(i = 2; i < 40; ++i) // loop counting the fibonacci values
    {
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i -2];
    }
        for( i = 0; i < 40; ++i) // loop used to print the fibonacci values
        {
            printf("%i\n", Fibonacci[i]);
        }
    



    return 0;
}
