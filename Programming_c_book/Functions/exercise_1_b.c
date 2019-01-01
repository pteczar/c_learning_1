#include <stdio.h>

int main(int argc, char const *argv[])
{
int calculateTriangularNumber (int n) ;
    int n, number, triangularNumber, counter;

    for ( counter = 1; counter <= 5; ++counter)
    {
            printf ("What triangular number do you want? ");
                scanf  ("%i", &number);
            
         printf("Triangular number is %i\n", calculateTriangularNumber (number));
               
    }


    return 0;
}

int calculateTriangularNumber (int n) 
{
    
int  i, triangularNumber = 0;
 
 for ( i = 1;  i <= n;  ++i )
    triangularNumber += i;
 
 //printf ("Triangular number %i is %i\n", n, triangularNumber);

 return triangularNumber;
 
} 