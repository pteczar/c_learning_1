#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    
    char *oddOrEven;

    printf("Enter a positive integer:");
    scanf("%d", &input );
    printf("Entered integer is %d", input);

    oddOrEven = (((input = input %2) != 0) ? "odd" : "even");
    printf("the number is %s", oddOrEven);
    return 0;
}
