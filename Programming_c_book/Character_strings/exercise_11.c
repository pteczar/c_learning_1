/*Extend the strToInt() function from Program 9.11 so that if the first character of the string is a minus sign, the value that follows is taken as a negative number. */

//Function to convert a string to an integer
    int strToInt (const char str[]);

#include <stdio.h>

int strToInt (const char str[])
{
    int i, intValue, result = 0, posResult = 0;
    int negative;
     
    if (str[0] == '-')
    {
        for (i = 1; str[i] >= '0' && str[i] <= '9'; ++i)
        {   
            intValue = str[i] - '0';
            posResult = posResult * 10 + intValue;
            result = posResult * (-1);
        }
    }
    else
    {
        for (i = 0; str[i] >= '0' && str[i] <= '9'; ++i)
        {   
            intValue = str[i] - '0';
            result = result * 10 + intValue;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{

        printf ("%i\n", strToInt("245"));
        printf ("%i\n", strToInt("100") + 25);
        printf ("%i\n", strToInt("13x5"));    


        printf ("test = %i\n", strToInt("-100") + 25);
return 0;
}