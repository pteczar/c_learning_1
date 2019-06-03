#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *input;

    input = malloc(sizeof(char));
    if(input == NULL)
    {
        puts("Memory not allocated");
        return 1;
    }

    puts("Enter your name: ");
    fgets(input,sizeof(input),stdin);

    printf("Hello %s", input);


    return 0;
}
