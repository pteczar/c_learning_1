#include <stdio.h>
// function to calculate the length of a string

int LengthOfString( const char *pLength)
{
    int l = 0; // starting from 0 position

    while( pLength[l] != '\0') // going until the end by +1
    {
        l++; // incrementing
    }

    return l; // returning the value of l
} 

int main(int argc, char const *argv[])
{

int LengthOfString( const char *pLength);

printf("%d", LengthOfString("should_be_12"));    
   
    return 0;
}
