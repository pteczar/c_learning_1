#include <stdio.h>

int main(int argc, char const *argv[])
{
    const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D','E','F' };

    int convertedNumber[64];
    long int NumberToConvert;
    int nextDigit, base, index = 0;

    // get the number and the base

    printf("Number to be converted? ");
    scanf("%ld", &NumberToConvert);
    printf("Base? ");
    scanf("%i", &base);

    // converting the indicated base

    do
    { convertedNumber[index] = NumberToConvert % base;
        ++index;
        NumberToConvert = NumberToConvert / base;
    }
while(NumberToConvert != 0);
//display the reulsts in reverse order

printf("Converted number = ");

for(--index; index >= 0; -- index)
{
    nextDigit = convertedNumber[index];
    printf("%c", baseDigits[nextDigit]);
}

printf("\n");

    return 0;
}
