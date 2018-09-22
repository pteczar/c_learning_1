//Program to convert a positive integer into another base 

#include <stdio.h>

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

void getNumberAndBase (void)
{
    printf("Number to be converted? ");
    scanf("%li", &numberToConvert);

    printf("Base? ");
    scanf("%i",&base);

    if( base < 2 || base > 16)
    {
    printf("Bad base - must be between 2 and 16\n");
         printf(" Please enter new base: ");
         scanf("%i",&base);
         if( base < 2 || base > 16)
         {
             printf("(The program is setting the base to 10 due to wrong input)\n");
             base = 10;
         }
    }
}

    void convertNumber (void)
    {

do  {
    convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
}   
    while (numberToConvert != 0);
    }
        void displayConvertedNumber (void)
    {

        const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

        int nextDigit;

        printf("Converted number = ");

        for(--digit; digit >= 0; --digit)
        {
            nextDigit = convertedNumber[digit];
            printf("%c", baseDigits[nextDigit]);
        }

        printf("\n");
    }
    int main(int argc, char const *argv[])
    {
       void getNumberAndBase (void), convertNumber (void), displayConvertedNumber (void);

       getNumberAndBase ();
       convertNumber ();
       displayConvertedNumber ();


        return 0;
    }
    