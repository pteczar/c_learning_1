/* Write a program that accepts two integer values typed in by the user. 
Display the result of dividing the first integer by the second, 
to three-decimal-place accuracy. Remember to have the program check for division by zero. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
      int a = 0, b = 0;


        printf("Please enter two integers:");
        scanf("%d %d", &a, &b);

    if( b == 0 )
        printf("Dvisiona by 0");
    else
        printf("%.2f", (float)a/b);


    return 0;
}

