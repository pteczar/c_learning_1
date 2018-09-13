// calculate absolute numbers

#include <stdio.h>

float absoluteValue (float x)
{
    if ( x < 0)
    x = -x;

    return x;
}

int main(int argc, char const *argv[])
{
    float f1 = - 15.5;

    float result;

    result = absoluteValue(f1);
    printf("absolute value of %f = %f", f1,result);

    return 0;
}
