#include <stdio.h>
void readLine (char buffer[]);

int main(int argc, char const *argv[])
{
    int i;
    char line[81];
    
    for( i = 0; i < 51; i++)
    {
        readLine (line);
        printf ("%s\n\n", line);
    }
    

    return 0;
}

//Function to read a line of text from the terminal

void readLine (char buffer[])
{
    char character;
    int i = 0;

    printf("Enter a line of text, up to 80 characters. Hit enter when done:\n"); 

    do
    {
        character = getchar();
        buffer[i] = character;
        i++;

    } while (character != '\n');

    buffer[i -1] = '\0';
    
}