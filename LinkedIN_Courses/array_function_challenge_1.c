#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

void displayString (char *str);
void convertString (char *str);


int main(int argc, char const *argv[])
{
    char string [SIZE];
    
    
    printf("Enter a string:");
    fgets(string,SIZE,stdin);
   
    displayString(string);
    convertString (string);
    printf("%s", string);
    return 0;
}

void displayString (char *str)
{
    printf("string output: ");
    puts(str);
}

void convertString (char *str)
{
    int i,j, length;
    length = strlen(str);

    printf("Output in CAPITALS: ");

    while (*str)
   {
     *str = toupper(*str);
     if (*str == ' ')
       *str = '_';
        str++;
   }
   

}

