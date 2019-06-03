#include <stdio.h>
#include <string.h>
#define SIZE 32

int main(int argc, char const *argv[])
{
    char name[SIZE];
    char buffer[2*SIZE];
    char last[] = "passed the challenge!\n";
    int i = 0;
    char c;

    puts("Please enter your name");

    while( (c=getchar()) != '\n' )
    {
     

        name[i] = c;
        i++;

        if (i ==31)
            break;
    }

        name[i] = '\0';

    strcpy(buffer,name);
	strcat(buffer," ");
	strcat(buffer,last);

	i = 0;

	while( putchar(buffer[i++]) );


    return 0;
}
