#include <stdio.h>
#include <stdbool.h>
bool alphabetic (const char c);
bool numeric (const char c);

int main(int argc, char const *argv[])
{
    
    char  text[81];
    int   totalWords = 0;
    int   countWords (const char  string[]);
    void  readLine (char  buffer[]);
    bool  endOfText = false;
    
        printf ("Type in your text.\n");
        printf ("When you are done, press 'RETURN'.\n\n");
        while ( ! endOfText )
        {
            readLine (text);
            
            if ( text[0] == '\0' )
                endOfText = true;
            else
                totalWords += countWords (text);
                
        }
            
        printf ("\nThere are %i words in the above text.\n",  totalWords);


    return 0;
}

bool alphabetic (const char c)
{
    if ((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z')) 
    {
        return true;
    }

    else
    {
        return false;
    }
        
}

bool numeric (const char c)
{
    if ((c >= '0') || ( c <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

//function to count words in a string

int countWords (const char string[])  //rewrite and use  numeric & alphabetic string + if (if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || stri[i] == '\''))
{
    int i, wordCount = 0;
    bool lookingForWord = true, alphabetic (const char c);

    for(i = 0; string[i] != '\0'; i++) 
    {
        if (alphabetic (string[i])) // || numeric(string[i]) 
        {
            if (lookingForWord) 
            {
                ++wordCount;
                lookingForWord = false;
            }
            
        }
        else
        {
            lookingForWord = true;
        }
        
    }
    return wordCount;
}

void readLine (char buffer[])
{
    char character;
    int i = 0;

    printf("Enter a line of text, up to 80 characters. Hit enter when done:\n"); 

    do
    {
        character = getchar();
        buffer[i] = character;
        i++;

    } while (character != '\n');

    buffer[i -1] = '\0';
    
}

