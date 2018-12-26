#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int i, numFibs;

    printf("How many Fibonacci numbers do you want (between 1 and 75)? ");
    scanf("%i", &numFibs);

    if(numFibs < 1 || numFibs >75)
    {
        printf("Error, erong input");
        return 1;
    }

    unsigned long long
    int Fibonacci[numFibs];

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for( i =2; i < numFibs; ++i)


Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

for( i = 0; i < numFibs; ++i)
printf("%llu ", Fibonacci[i]);

printf("\n");

    return 0;
}