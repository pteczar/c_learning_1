#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, right_digit = 0 ;

    printf("Enter your number.\n");
    scanf("%i", &number);


        do
        {
            right_digit = right_digit * 10;
            right_digit = right_digit + (number % 10);
            number = number / 10;
        }
        while (number != 0);
        printf("%i", right_digit);
        printf("\n");

    return 0;
}
