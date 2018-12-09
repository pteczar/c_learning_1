#include <stdio.h>

int main(int argc, char const *argv[])
{
    float i = 0;
    float  x = 2.55;

    i = (3*(x*x*x) - 5*(x*x)) + 6;

    printf("the polynomial for 2.55 is %.2f", i);

    return 0;
}
