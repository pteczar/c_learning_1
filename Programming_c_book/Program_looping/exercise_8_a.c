#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, triangularNumber = 0;

    n = 0;
    
    while ( n < 200)
    {
    n = n + 1;
    triangularNumber = triangularNumber + n;
    }
   

    printf ("The 200th triangular number is %i\n", triangularNumber);
    return 0;
}
