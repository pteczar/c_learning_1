#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>


int removeString (char string[], int startFrom, int charsToRemove  )
{
    int i;
    

    for (i = 0 ; i < startFrom; i++)
    
       if(string[i] == '\0')
       return 0;
    

    for (; i < (startFrom + charsToRemove); ++i)
         if (string[i] == '\0') 
        {
            string[startFrom] = '\0';
            return 0;
        }

        do 
            {
                string[i - charsToRemove] = string[i];
            }
                 while (string[i++] != '\0');
}

 int main(int argc, char const *argv[])
 {
     char string[] = "the wrong son";
  
   printf("the length of string is %ld",strlen(string));

    removeString (string, 4, 6);
    printf("\n%s\n", string);
    return 0;
 }
 

 