#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n, number, triangularNumber, counter, i;

    printf("Please enter the number of trianguler numbers to calculate:");
    scanf("%d", &i);

    for ( counter = 1; counter <= i; ++counter)
    {
            printf ("What triangular number do you want? ");
                scanf  ("%i", &number);
            triangularNumber = 0;

            for (n = 1; n <= number; n++ )
                triangularNumber += n;

                printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }


    return 0;
}
