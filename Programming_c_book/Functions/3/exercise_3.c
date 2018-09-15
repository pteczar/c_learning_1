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

float squareRoot (float x, float epsilon)
{
    //const float epsilon = .00001;
    float guess = 1.0;

    while(absoluteValue (guess * guess - x) >= epsilon)
    guess = ( x / guess + guess) / 2;

    return guess;

}

int main(int argc, char const *argv[])
{
    float squareRoot (float x, float epsilon);
    float eps;
     

    printf("Enter epsilon value: ");
    scanf("%f", &eps);
    if(eps > 0)
      printf("squareRoot (77.0) = %f\n", squareRoot(77.0, eps));
      else
      printf("epsilon must be a + , goobye sucker :) ");

    return 0;
}
