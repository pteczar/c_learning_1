#include <stdio.h>

int main(int argc, char const *argv[])
{
    double a, b, perimeter, area;


    a = 5.8;
    b = 10.9;
    perimeter = a+a+b+b;
    area = a*b;

printf("Perimeter of the rectangle is: %f\n", perimeter );
printf("area of the rectangle is: %f\n", area);
printf("Height %d Width %f\n",a,b);


    return 0;
}
