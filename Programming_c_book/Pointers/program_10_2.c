#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c ='Q';
    char *c_pointer = &c;

        printf("1st example c = %c",*c_pointer);

    c ='/';

        printf("\n2nd example c = %c",*c_pointer);

     *c_pointer = 'k';

        printf("\n3rd example c = %c",*c_pointer);

    return 0;
}
