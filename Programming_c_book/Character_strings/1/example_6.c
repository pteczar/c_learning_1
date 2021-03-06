// Program reading lines of data

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    char line[81];
    void readLine (char buffer[]);

    for ( i = 0; i < 3; ++i)
    {
        readLine (line);
        printf("%s\n\n", line);
    }
    return 0;
}

// Function to read line of data rom terminal

void readLine (char buffer[])
{
    char character;
    int i = 0;

    do
    {
        character = getchar();
        buffer[i] = character;
        ++i;
    }

    while (character != '\n');
    buffer[i - 1] = '\0';
}
