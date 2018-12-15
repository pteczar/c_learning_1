/* Program to evaluate simple expressions of the formnumber  operator  number                */ 

#include <stdio.h> 
#include <iostream>


int main (void) 
{
    char op;
    float  value1, value2;
    
    printf ("Type in your expression.\n");
    
    scanf ("%f %c %f", &value1, &op, &value2);

if ( op == '+' )
    printf ("%.2f\n", value1 + value2);

else if ( op == '-' )
    printf ("%.2f\n", value1 - value2);

else if ( op == '*' )
printf ("%.2f\n", value1 * value2);

else if ( op == '/' )
printf ("%.2f\n", value1 / value2);

return 0; 

}