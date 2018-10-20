#include <stdio.h>
#include <string.h>

int countLength ( const char string[])
{
    int number = 0;
    const char word1[] = "character";
  // int numberOfLetters = 9;
    int start = 4;
    int count = 3;

    while(string[start] <= (strlen(word1) - count))
    number++;

    return number;
}

int main(int argc, char const *argv[])
{
    printf("%d", countLength("character"));
    return 0;
}
