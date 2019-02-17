/*Write a function called insertString() to insert one character string into another string. The arguments to the function should consist of the source string, the string to be inserted, and the position in the source string where the string is to be inserted. So, the call Click here to view code image insertString (text, "per", 10); with text as originally defined in the previous exercise, results in the character string "per" being inserted inside text, beginning at text[10]. Therefore, the character string "the wrong person" is
stored inside the text array after the function returned. */

#include <stdio.h>
#include <string.h>

int insertString(char a[],char b[],int pos);
int main(int argc, char const *argv[])
{
    char source[50] = "the wrong son";
    char insert[50] = "per";
    int position = 10;
   
   // printf("source length = %ld\n",strlen(source));
  //  printf("insert length = %ld\n",strlen(insert));

    

    int outcome = insertString(source,insert, position);

     if(outcome != -1)
    printf("%s",source );
    else
    printf("bye");
        return 0;
    
    }

int insertString(char a[],char b[],int pos)
{

  int i = 0;
  int lengthA = strlen(a);
  int lengthB = strlen(b);

  if(pos > lengthA)
    return -1;

  for(i= lengthA; i >= pos; i--)
      a[i + lengthB] = a[i];

  for ( i = 0; i < lengthB; ++i )
      a[i + pos] = b[i];

  return 1;
}