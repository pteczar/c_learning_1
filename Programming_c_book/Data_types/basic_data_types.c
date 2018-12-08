#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    bool boolVar = 0;

printf ("integerVar = %i\n", integerVar);
printf ("floatingVar = %.2f\n", floatingVar);
printf ("doubleVar = %e\n", doubleVar);
printf ("doubleVar = %g\n", doubleVar);
printf ("charVar = %c\n", charVar);
printf ("boolVar = %i\n", boolVar);



    return 0;
}
