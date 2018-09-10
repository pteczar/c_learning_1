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


    float  f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int    i1 = -716;
    float absoluteValueResult = 0.0;

   // GCD (42, 56, 1, 1);

    ABS(-54);

    SROOT (-5.0);

    printf("%.2f\n", SROOT (-5.0));
/*
// Testing SROOT

    printf("%.2f\n", SROOT(-3.0));
    printf("%.2f\n", SROOT(16.0));
    printf("%.2f\n", SROOT(25.0));
    printf("%.2f\n", SROOT(9.0));
    printf("%.2f\n", SROOT(225.0));


// Testing ABS

    absoluteValueResult = ABS (f1);
    printf ("result = %.2f\n", absoluteValueResult);
    printf ("f1 = %.2f\n", f1);

    absoluteValueResult = ABS (f2) + ABS (f3);
    printf ("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = ABS ( (float) i1 );
    printf ("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = ABS (i1);
    printf ("result = %.2f\n", absoluteValueResult);

    printf ("%.2f\n\n\n\n", ABS (-6.0) / 4 );

// Testing GDC

    int result = GCD(150, 35, 1 ,1);
    printf("The gcd of 150 and 35 is %d\n", result);

    result = GCD(1026, 405,1 ,1);
    printf("The gcd of 1026 and 405 is %d\n", result);

    printf("The gcd of 83 and 240 is %d\n\n\n\n", GCD(83, 240,1 ,1));

*/
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

//SROOT algorithm 

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
