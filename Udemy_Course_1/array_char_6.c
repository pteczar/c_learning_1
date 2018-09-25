#include <stdio.h>
#include <cstring>
#include <ios>

int main(int argc, char const *argv[])
{
    char text[100];
    char substring[40];
    int i;

    printf("Enter the string to be searched (less than %d characters):\\n",100);
    scanf("%s", text);

    printf("\nEnter a string sough (less than %d chaacters):\n",40);
    scanf("%s", substring);

    printf("\nFirst string entered:\n%s\n", text);
    printf("Second string entered:\n%s\n", substring);

    for(i = 0;(text[i] = (char)toupper(text[i])) !='\0'; ++i );
    for( i =0; (substring[i] = (char)toupper(substring[i])) != '\0'; ++i );

    printf("The second string %s found in the rist\n",((strstr(text, substring) == NULL) ? "was not" : "was" ));

    return 0;
}
