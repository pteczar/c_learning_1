#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, triangularNumber = 0;

    for (n = 1; n <= 200; n = n + 1)
    triangularNumber = triangularNumber + n;

    printf ("The 200th triangular number is %i\n", triangularNumber);

    printf ("%-2i           %i\n", n, triangularNumber); 
    return 0;
}
