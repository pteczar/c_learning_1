//Function to count characters in a string - Poiter version

#include <stdio.h>

int stringLength (const char *string)
{
    const char *cptr = string;

    while (*cptr != '\0')
    ++cptr;

    return cptr - string;
}

int main(int argc, char const *argv[])
{
    int stringLength (const char *string);

    printf ("%i  ", stringLength ("stringLength test"));
    printf ("%i  ", stringLength (""));
    printf ("%i\n", stringLength ("complete"));
    return 0;
}
