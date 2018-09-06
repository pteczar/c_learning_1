#include <stdio.h>

int main(int argc, char const *argv[])
{
    char hello[5] = {'h', 'e', 'l', 'l', 'o'};
    int i;

    for( i = 0; i <= 5; i++)
    printf("%c",hello[i]);

    return 0;
}
