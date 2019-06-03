#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char first[64];
    char second[64];
    char buffer[200];


    puts("Enter the first string: ");
    fgets(first,64,stdin);
    

    puts("Enter the second string: ");
    fgets(second,64,stdin); 

    strcpy(buffer,first);
	strcat(buffer,second);

    buffer[strcspn(buffer, "\n")] = 1;

    printf("%s",buffer);
    return 0;
}

