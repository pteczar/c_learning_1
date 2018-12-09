#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, f;

    printf("please enter the Fahrenheit: ");
    scanf("%d", &f);

    c = (f -32) / 1.8;

    printf("Fahrenheit = %d , Celsius = %d",f,c);

    return 0;
}
