/* Write a function called findString() to determine if one character string exists inside another string. The first argument to the function should be the character string that is to be searched and the second argument is the string you are interested in finding. If the function finds the specified string, have it return the location in the source string where the string was found. If the function does not find the string, have it return −1. So, for example, the call Click here to view code image index = findString ("a chatterbox", "hat"); searches the string "a chatterbox" for the string "hat". Because "hat" does exist inside the source string, the function returns 3 to indicate the starting position inside the source string where "hat" was found. */

#include <stdio.h>

int findString (char motherArgument[], char childArgument[]);


int main(int argc, char const *argv[])
{
    
  //char index = findString ("a chatterbox", "hat"); 

printf("%c",findString ("hat", "h"));
    return 0;
}


int findString (char motherArgument[], char childArgument[]) // is child inside mother? :)
{
 
    int i = 0;
    while (motherArgument[i] != '\0')
    if(motherArgument[i] == childArgument[i])
    {
        i++;
		printf("Both the strings are equal");
        return i;
	}
	else
	{
		return 0;
	}
	
    
}