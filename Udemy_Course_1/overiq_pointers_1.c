#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 12, *ip = &i;
    double d = 2.3, *dp = &d;
    char ch = 'a', *cp = &ch;

    printf("Value of ip = %d\n", ip);
    printf("Value of dp = %d\n", dp);
    printf("Value of cp = %d\n\n", cp);

    printf("Value of ip + 1 = %d\n", ip + 1);
    printf("Value of dp + 1 = %d\n", dp + 1);
    printf("Value of cp + 1 = %d\n\n", cp + 1);

    printf("Value of ip + 2 = %d\n", ip + 2);
    printf("Value of dp + 2 = %d\n", dp + 2);
    printf("Value of cp + 2 = %d\n", cp + 2);
    
    return 0;
}
