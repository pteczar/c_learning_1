#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// decalaration of the functions:

int GCD (int number_1, int number_2, int divisor, int i);
float ABS (float number);
float SROOT (float x);

int main(int argc, char const *argv[])
{
    /* I will test the code here */

    GCD (42, 56, 1, 1);

    ABS(-54);

    SROOT (-5.0);

    return 0;
}
// GCD  algorithm
int GCD (int number_1, int number_2, int divisor, int i)

{  

for(i = 1; i <= number_1 && i <=number_2; i++)

{
if (number_1 % i == 0 && number_2 % i == 0)
divisor = i;
}

printf("number %d and number %d have a common divisor %d\n",number_1, number_2, divisor);
}

// ABS algorithm

float ABS (float number)

{
 if(number > 0)
 
 printf("absolute number of %.2f is %.2f\n", number, number);

 else
 
 printf("absolute number of %.2f is %.2f\n",number ,number*(-1));
 
 return number;
}

//Sroot algorithm 

float SROOT (float x)
{
    
    float returnValue = 0.0;
    const  float  epsilon = .00001;
    float  guess   = 1.0;

if(x < 0)
{
     printf ("Negative argument to squareRoot.\n");
        returnValue = -1.0;
}

else
{
    while  ( ABS (guess * guess - x) >= epsilon )
           guess = ( x / guess + guess ) / 2.0;

           returnValue = guess;
}
return returnValue;

}
