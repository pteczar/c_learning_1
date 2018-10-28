#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 10;
    int *ip = &i;
    int **iip = &ip;

    printf("Value of i = %d\n\n", i);

    printf("Address of i = %u\n", &i);
    printf("Value of ip = %d\n\n", ip);

    printf("Address of ip = %u\n", &ip);
    printf("Value of iip = %d\n\n", iip);

    printf("Value of *iip = value of ip = %d\n", *iip);
    printf("Value of **iip = value of i = %d\n\n", **iip);

    return 0;
}
