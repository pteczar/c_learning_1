#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int n = 0;

int triangularNumber = 0;

    for (i = 0; i <= 10; i++)
{
    n = n + 4;
    n ++;
    
    printf("n = %d\n", n);

    triangularNumber = n*(n + 1) / 2;
    printf("Triangular number = %d\n", triangularNumber);
}
    return 0;
}
