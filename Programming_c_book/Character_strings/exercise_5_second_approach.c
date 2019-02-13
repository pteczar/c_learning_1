#include <stdio.h>
#include <string.h>

int findString(const char *string, const char *substring);

int main(int argc, char const *argv[])
{
      char *string = "a chatterbox";

    int index = findString(string, "hat");

    if (index != -1)
    {
      //  printf("%s\n", string + index);
        printf("The starting position is %d", index);
    }
    return 0;
}

int findString(const char *string, const char *substring)
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (strncmp(string + i, substring, strlen(substring)) == 0)
        {
            return i;
        }
    }

    return -1;
}