/*Using the findString(), removeString(), and insertString() functions from preceding exercises, write a function called replaceString() that takes three character string arguments as follows replaceString (source, s1, s2); and that replaces s1 inside source with the character string s2. The function should call the findString() function to locate s1 inside source, then call the removeString() function to remove s1 from source, and finally call the insertString() function to insert s2 into source at the proper location. So, the function call replaceString (text, "1", "one"); replaces the first occurrence of the character string "1" inside the character string text, if it exists, with the string "one". Similarly, the function call replaceString (text, "*", ""); has the effect of removing the first asterisk inside the text array because the replacement string is the null string. */


// Replace String
 
 
#include <stdio.h>
#include <stdbool.h>
 
 
bool  replaceString (char source[], char s1[], char s2[])
{
     
    int findString (char s1[], char s2[]);
    void    removeString    (char source[], int start, int remove );
    void   insertString (char source[], char insert[], int x);
    int index;
     
    int i;
    bool stillFound;
     
    index = findString(source, s2);
     
    if (index > 0)
    {
        for (i = 0; s1[i] != '\0'; ++i)
        {                                                       //count letters in string to replace
            ;
        }
         
        if (s1[i] == '\0')
        {
            i = 1;
        }
         
        stillFound = true;
         
        removeString(source, index, i);    //if string is found, remove string starting at index location
         
        insertString(source, s1, index);
         
    }
     
    else if (index < 0)
    {
        stillFound = false;
    }
     
    return stillFound;
}
 
 
//function to insert string
 
 
void insertString (char s1[], char s2[], int x)
{
    int sourceletters;
    int replaceletters;
    int i;
     
    for (sourceletters = 0; s1[sourceletters] != '\0'; ++sourceletters)    //count letters in source, i = letters in source
    {
        ;
    }
     
    for (replaceletters = 0; s2[replaceletters] != '\0'; ++replaceletters)
    {
        ;
    }
     
    for (sourceletters = sourceletters; sourceletters >= x; --sourceletters)
    {
        s1[sourceletters + replaceletters] = s1[sourceletters];
    }
     
    for (i = 0; i < replaceletters; ++i, ++x)
    {
        s1[x] = s2[i];
    }
     
}
//Remove String
 
 
void    removeString    (char source[], int start, int remove )
{
    int i;
     
    for (i = start; source[i] != '\0'; ++i)
    {
        source[i] = source [i + remove];
    }
}
 
 
 
 
//FindString Version 2
 
 
 
 
int findString (char s1[], char s2[])
{
    int i, j = 0, result = 0;
     
    for (i = 0; s1[i] != '\0'; ++i)
    {
        if (s1[i] != s2[j])
        {
            j = 0;
            result = -1;
        }
         
        if (s1[i] == s2[j])
        {
            ++j;
            if (s2[j] == '\0')
            {
                result = i - (j - 1);
                return result;
            }
        }
    }
     
    return result;
}
 
 
 
 
int main    (void)
{
    int findString (char s1[], char s2[]);
    void    removeString    (char source[], int start, int remove );
    void   insertString (char source[], char insert[], int x);
    bool   replaceString (char source[], char s2[], char s3[]);
     
    char source[50] = "hello how are you doing today?";
    char s1[] = "*";
    char s2[] = " ";
    bool stillFound;
     
    printf("If you replace the character string \"%s\" with the character string \"%s\" in the string \"%s\" the result is ", s2, s1, source);
 
 
    do
        stillFound = replaceString(source, s1, s2);
    while ( stillFound );
         
    printf("\"%s\".\n", source);
     
     
    return 0;
     
}