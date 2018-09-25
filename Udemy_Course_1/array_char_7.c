#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    double value = 0;
    char str[] = "3.5 2.5 1.26";
    char *pstr = str;
    char *ptr = NULL;

    while(true)
    {
        value = strtod(pstr, &ptr);
        if(pstr == ptr)
            break;
        else
        {
            printf(" %f", value);
            pstr = ptr;
        }
    }
    return 0;
}
