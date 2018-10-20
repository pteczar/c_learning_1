//Function to count the number of characters in a string

#include <stdio.h>

int stringLength ( const char string[])
{
    int count = 0;

    while (string[count] != '\0')
        ++count;

        return count;
}

int main(int argc, char const *argv[])
{
int stringLength ( const char string[]);

const char word1[] = "Przemek i dupa";
const char word2[] = "is";
const char word3[] = "bored";

printf("%i %i %i", stringLength(word1), stringLength(word2), stringLength(word3));


    return 0;
}
