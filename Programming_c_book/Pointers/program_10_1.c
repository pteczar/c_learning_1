#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 10;
    int *int_pointer;

    int_pointer = &count;

   int x = *int_pointer;

    printf("*int_pointer = %i x = %i",*int_pointer, x);
    return 0;
}
