#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string)
{
    const char *lastAddress = string;

    while (*lastAddress)
        ++lastAddress;

    return lastAddress - string;
}


int main()

{


int stringLength(const char *string);

   printf("%d \n", stringLength("stringLength test"));
   printf("%d \n", stringLength("should_be_12"));
   printf("%d \n", stringLength("jason"));

    return 0;
}
