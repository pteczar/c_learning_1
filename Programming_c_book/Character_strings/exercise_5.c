/* Write a function called findString() to determine if one character string exists inside another string. The first argument to the function should be the character string that is to be searched and the second argument is the string you are interested in finding. If the function finds the specified string, have it return the location in the source string where the string was found. If the function does not find the string, have it return −1. So, for example, the call Click here to view code image index = findString ("a chatterbox", "hat"); searches the string "a chatterbox" for the string "hat". Because "hat" does exist inside the source string, the function returns 3 to indicate the starting position inside the source string where "hat" was found. */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int findString (char motherArgument[], char childArgument[]);


int main(int argc, char const *argv[])
{
    
    printf("%s",findString ("a chatterbox", "hat")); //why if I remove space ' ' this does not work, why?
     return 0;
}


int findString (char motherArgument[], char childArgument[]) // is child inside the mother? 
{
 
    int i, flag = false, freq = 0;
   
    for (i = 0; i < strlen(motherArgument); i++) // going through mother
  {
    if(motherArgument[i] == childArgument[i]) //  chars equal?
    {
        flag = true;
        printf("The starting position is %d.", i - 1); // i -1 to get 3 as in the example
        freq++; // frequency
	}

  }
	if (flag = true) 
      {
         printf("\nString '%s' occured for %d time(s).\n", childArgument, freq);    
      }

        else
            {
                printf("None\n"); // false = none
                return -1;
            }
    
    
}