// Function to calculate the nth triangular number

#include <stdio.h>

int calculateTriangularNumber (int n)
{
    int i, triangularNumber = 0;

    for(i = 1; i <= n; ++i)
    triangularNumber += i;

  //  printf("Triangular number %i is %i\n", n, triangularNumber);

    return triangularNumber;
}

int main(int argc, char const *argv[])
{
    int calculateTriangularNumber (int n);
    int  number;

  
    {
        printf("What triangular number do you want? ");
            scanf("%d", &number);
                  printf ("Triangular number %i is %i\n\n", number, calculateTriangularNumber(number));

    
    return 0;
    }
}
/* Code of 4.5 program from the book

#include <stdio.h>

int main(void)
{
    int n, number, triangularNumber, counter;

    for (counter = 1; counter <= 5; ++counter)
    {
        printf("What triangular number do you want? ");
            scanf("%d", &number);

            triangularNumber = 0;

            for( n = 1; n <= number; ++n)
            triangularNumber += n;

            printf ("Triangular number %i is %i\n\n", number, triangularNumber)

    }   

    return 0;
}
*/