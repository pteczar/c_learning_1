#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i1 = 12, *ip1 = &i1;
    int i2 = 12, *ip2 = &i2;

        printf("Value of ip1 or address of i1 = %u\n", ip1);
        printf("Value of ip2 or address of i2 = %u\n\n", ip2);

    printf("ip2 - ip1 = %d\n", ip1 - ip2);
    printf("ip1 - ip2 = %d\n", ip2 - ip1);
    
    return 0;
}
