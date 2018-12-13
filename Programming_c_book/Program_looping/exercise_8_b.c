#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, triangularNumber;

    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf (" n    Sum from 1 to n\n");
    printf ("---   ---------------\n");

    triangularNumber = 0;
    n = 1;
    while (n < 10)
    {
        n++;
        triangularNumber += n;
    printf (" %2i           %i\n", n, triangularNumber);
    }


    return 0;
}
