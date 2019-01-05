// Function to calculate the absolute value of a number 

#include <stdio.h>

 float  absoluteValue (float x) 
 
{
     if ( x < 0 )x = -x;
     
     return (x);
     
} 

// Function to compute the square root of a number 

float  squareRoot (float x, const float epsilon) 

{
    
    
    float        guess = 1.0;
    
    while  ( absoluteValue (guess * guess - x) >= epsilon )
    guess = ( x / guess + guess ) / 2.0;
    
    return guess; 
    
} 
    
    int main (void) 
    
{
        printf ("squareRoot (2.0) = %f\n", squareRoot (2.0, .000001 ));
        printf ("squareRoot (144.0) = %f\n", squareRoot (2.0, 0.1));
        printf ("squareRoot (17.5) = %f\n", squareRoot (2.0, 0.1));
        
        return 0; 
        
} 