#include <stdio.h>

int main()
{
    float price,*ptr;

    ptr = &price;
   *ptr = 99.98;

    printf("The price is $%.2f\n",price);

    return(0);
}
