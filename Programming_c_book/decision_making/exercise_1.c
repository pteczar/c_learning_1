/* Write a program that asks the user to type in two integer values at the terminal. 
Test these two numbers to determine if the first is evenly divisible by the second, 
and then display an appropriate message at the terminal.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0;


        printf("Please enter two integers:");
        scanf("%d %d", &a, &b);

    if((a % b) == 0)
        printf("%d is divisible by %d", a, b);
    else
        printf("%d is not divible by %d", a, b);

    return 0;
}
