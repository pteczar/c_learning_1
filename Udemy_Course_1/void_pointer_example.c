#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vptr;

    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr);

    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);

    vptr = &ch;
    printf("Value of i = %c\n", *(char *)vptr);
    return 0;
}
