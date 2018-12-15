/* Program to evaluate simple expressions of the formvalue operator value                 */ 

#include <stdio.h>

int main (void) 
{
    float  value1, value2;
    char   op;
    
    printf ("Type in your expression.\n");
    scanf ("%f %c %f", &value1, &op, &value2);
    
    if ( op == '+' )
        printf ("%.2f\n", value1 + value2);
    
    else if ( op == '-' )
        printf ("%.2f\n", value1 - value2);
    
    else if ( op == '*' )
        printf ("%.2f\n", value1 * value2);
    
    else if ( op == '/' )
    
    if ( value2 == 0 )
        printf ("Division by zero.\n");
    else
        printf ("%.2f\n", value1 / value2);
    else
        printf ("Unknown operator.\n");
    
    return 0;
    
     } 