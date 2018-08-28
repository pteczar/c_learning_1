/* 
Author: PT 
Purpose: Test of multiline comment
Date: 28.08.2018
*/

// Pre-processor, stdio = standard input output
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[100];
    int i;

    printf("Enter a Value ");

    scanf("%d %s",&i, str);

    printf("\nYou entered: %d %s\n", i, str);
    return 0;
}
