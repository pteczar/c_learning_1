#include <stdio.h>
#include <stdbool.h>
bool equalStrings (const char s1[], const char s2[]);
int main(int argc, char const *argv[])
{
const char stra[] = "test number 1";
const char strb[] = "test number 2";


printf("%i\n", equalStrings(stra, strb));
printf("%i\n", equalStrings(stra, stra));
printf("%i\n", equalStrings(strb, stra));
printf("%i\n", equalStrings(strb, strb));
printf("%i\n", equalStrings("wielki kutas", "maly kutas"));
printf("%i\n", equalStrings("maly kutas", "maly kutas"));

    return 0;
}

bool equalStrings (const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    while ( s1[i] == s2[i]  &&  s2[i] != '\0' ) //because if s1[i] == s2[i] they are both != 0 at the same time
    i++;

    if (s1[i] == '\0' && s2[i] =='\0')
        areEqual = true;
    else
        areEqual = false;

    return areEqual;
}

