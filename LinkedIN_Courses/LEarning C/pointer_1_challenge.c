#include <stdio.h>

int main(int argc, char const *argv[])
{

int a = 5;

int *ptra = &a;

printf("%d", *ptra);


a = *ptra + 1;

printf("\n%d", a);

    return 0;
}
