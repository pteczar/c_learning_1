#include <stdio.h>

void copyString (char *to, char *from);

int main(int argc, char const *argv[])
{
    char  string1[] = "A string to be copied.";
    char  string2[50];

    copyString (string2, string1);
    printf ("%s\n", string2);


    copyString (string2, "So is this.");
    printf ("%s\n", string2);

    return 0;
}




void copyString (char *to, char *from)
{
    while (*from)
        *to++ = *from++;

        *to = '\0';
}

