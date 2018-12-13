#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n, number, triangularNumber, counter;

     counter = 0;
     
     while (counter < 5) 
    {
            ++counter;
            printf ("What triangular number do you want? ");
                scanf  ("%i", &number);
            triangularNumber = 0;

            n = 0;
            
            while ( n < number) 
            {
            n++;
            triangularNumber += n;
            }
                printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }


    return 0;
}
