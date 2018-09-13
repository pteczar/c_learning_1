#include <stdio.h>

void printMessage (void)
{
    printf("Programming is fun!\n");
}

int main(int argc, char const *argv[])
{
    int i;

    for(i = 1; i <= 5; i++)
    {
    printMessage();
    }
    return 0;
}
