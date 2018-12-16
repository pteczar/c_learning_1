/* Program to evaluate simple expressions of the formvalue  operator   value                 */ 

#include <stdio.h>

 int main (void) 
 
 {
     float  value1, value2;
     char   op;
        printf ("Type in your expression.\n");
        scanf ("%f %c %f", &value1, &op, &value2);
    switch (op)
    {
        case '+':
            printf ("%.2f\n", value1 + value2);
        break;

        case '-':
            printf ("%.2f\n", value1 - value2);
        break;
        
        case '*':
            printf ("%.2f\n", value1 * value2);
        break;
        
        case '/':
        if ( value2 == 0 )
            printf ("Division by zero.\n");

        else
            printf ("%.2f\n", value1 / value2);
        break;
        
        default:
            printf ("Unknown operator.\n");
        break;}
        
        return 0; 
    }
    