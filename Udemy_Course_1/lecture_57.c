#include <stdio.h>
// this is the space where youe define a function, before main


void multiplyTwoNumbers(int x, int y) // why use void?
{
    int result = x * y;
    printf("The product of %d multiplies by %d is %d", x, y, result);
}

int main(int argc, char const *argv[])
{
    multiplyTwoNumbers (5, 5);
 
    return 0;
}


