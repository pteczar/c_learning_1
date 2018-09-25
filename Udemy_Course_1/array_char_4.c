#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[80] = "Hello how are you -my name is -Przemek";
    const char s[2] = "-";
    char *token;


    //get the first token

    token = strtok(str, s);

    // walk through other tokens

    while(token != NULL) 
    {
        printf(" %s\n", token);

        token = strtok(NULL, s);
    }
    
    
    return 0;
}
