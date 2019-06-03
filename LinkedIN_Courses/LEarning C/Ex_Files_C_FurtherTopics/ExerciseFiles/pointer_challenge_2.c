#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char *string = "string";

    int i;
    int length = strlen(string);

  

    for(i = 0; i <length; i++)
    {
        putchar(*(string+i));
    }


    return 0;
}
