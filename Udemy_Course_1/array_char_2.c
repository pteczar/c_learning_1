#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char src[50], dest[50];
    
    strcpy(src, "This is the source");
    strcpy(dest, "This is the destination");


    strncat(dest, src, 15);

    printf("Final Destination string: |%s|",dest);
    return 0;
}
