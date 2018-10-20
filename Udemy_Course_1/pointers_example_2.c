#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    printf("numbers adress %p\n", &number);
    printf("numbers value %d\n", number);


    pnumber = &number;

    printf("pnumbers address %p\n", &pnumber);
    printf("pnumbers size %zd\n", sizeof(number));
    printf("pnumbers value %p\n", pnumber);
    printf("value pointed to %d\n", *pnumber);

    return 0;
}
