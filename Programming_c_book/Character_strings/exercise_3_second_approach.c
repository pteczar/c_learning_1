#include <stdio.h>

int countWords (const char string[])
{
    int i, wordCount = 1;

    for( i = 0; string[i] != '\0'; i++)
    {
      
        if (string[i] == ' ' || string[i] == '\n' || string[i] == '\t' && string[i] != ',' && string[i] != '.' && string[i] != '\'')
        {
           wordCount++;
        }
    }

    return wordCount;
}

int main(int argc, char const *argv[])
{
   const char  text1[] = "Well here 12 goes.";
   const char  text2[] = "And her'e we go...again. -1";
        printf ("%s - words = %i\n", text1, countWords (text1));
        printf ("%s - words = %i\n", text2, countWords (text2));
        
    return 0;
}
