#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char myString[] = "myString";
    char input[80];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("\nThe string %s concatenated with %s is::::\n",myString, input);
    printf("%s", strcat(input,myString)); 

    return 0;
}
