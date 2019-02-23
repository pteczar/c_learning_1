/*Write a function called strToFloat() that converts a character string into a floating-point value. Have the function accept an optional leading minus sign. So, the call strToFloat ("-867.6921"); */

    float strToFloat (const char string[]);

#include <stdio.h>


float strToFloat (const char string[])
{
	int i = 0, sign = 1, intValue;
	float result = 0.0;

	if ( string[0] == '-' ) {
		++i;
		sign *= -1;
	}

	for ( ; string[i] >= '0' && string[i] <= '9'; ++i )
	{
		intValue = string[i] - '0';
		result = result * 10.0 + (float) intValue;
	}

	if ( string[i] == '.' ) {
		float placeValue = 1.0;

		for ( int j = 1; string[i + j] >= '0' && string[i + j] <= '9'; ++j ) {
			placeValue /= 10.0;
			intValue = string[i + j] - '0';
			result += placeValue * (float) intValue;
		}
	}

	return sign * result;
}

int main(int argc, char const *argv[])
{

        printf ("%9.4f\n", strToFloat("-867.6921"));
        printf ("%9.4f\n", strToFloat("245.1234"));
	    printf ("%9.4f\n", strToFloat("100.1234") + 25);
	    printf ("%9.4f\n", strToFloat("13.1234x5"));

	    

	return 0;

return 0;
}