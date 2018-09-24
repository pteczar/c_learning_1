#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char myString[] = "my string";
    char test_strcpy[50];

    strcpy(test_strcpy, "This is a copy test");

    printf("The length of the string is %d\n", strlen(myString));

    printf("%s", test_strcpy);
    return 0;
}

