// i do not understand that exercise, the value is wrong

// square root of a number program

#include <stdio.h>


// absolute number function
float absoluteValue (float x)
{
    if ( x < 0)
    x = -x;

    return x;
}

// Function to compute the square root of a number

float squareRoot (float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    while(absoluteValue (x / (guess * guess) == 1))
    guess = ( x / guess * guess) / 2;

    return guess;

}

int main(int argc, char const *argv[])
{
    printf("squareRoot (2.0) = %f\n", squareRoot(4.0));

    return 0;
}
