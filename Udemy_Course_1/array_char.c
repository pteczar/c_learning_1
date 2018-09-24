#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[] = "My names is Przemek";

    char temp[50];
    
     strncpy(temp,s, sizeof(temp) - 1);

    printf("The length is %d: \n",strlen(s));

    printf("The string is %s",temp);

    return 0;
}
