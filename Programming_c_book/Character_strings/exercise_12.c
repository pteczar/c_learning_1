/*Write a function called strToFloat() that converts a character string into a floating-point value. Have the function accept an optional leading minus sign. So, the call strToFloat ("-867.6921"); */

//Function to convert a string to an integer
    int  strToInt (const char  string[]);

#include <stdio.h>

int strToInt (const char string[])
{
    int i, intValue, result = 0;

    for(i = 0; string[i] >= '0' && string[i] <= '9'; ++i)
    {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }

    return result;
}

int main(int argc, char const *argv[])
{

        printf ("%i\n", strToInt("245"));
        printf ("%i\n", strToInt("100") + 25);
        printf ("%i\n", strToInt("13x5"));    

return 0;
}