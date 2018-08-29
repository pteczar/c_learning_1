#include <stdio.h>

int main(int argc, char const *argv[])
{
    double a, b, perimeter, area;


    a = 5.8; //width
    b = 10.9; //height
    perimeter = a+a+b+b;
    area = a*b;

printf("Perimeter of the rectangle is: %.2f\n", perimeter );
printf("area of the rectangle is: %.2f\n", area);
printf("Height %d Width %.3f\n",a,b);


    return 0;
}
