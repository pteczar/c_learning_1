#include <stdio.h>
#include <string.h>
int removeString (const char *string, int startFrom, int charsToRemove  );
int main(int argc, char const *argv[])
{
   
   char *string = "the wrong son";
  
   printf("the length of string is %d",strlen(string));

    removeString (string, 4, 6);

    return 0;
}



int removeString (const char *string, int startFrom, int charsToRemove  )
{
    int i;
   const char *substring;

    for (i = startFrom ; i < charsToRemove; i++)
    {
        printf("\n%s\n", string);
    }

}