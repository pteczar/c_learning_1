#include<stdio.h>
#include <string.h>

int insertString(char[],char[],int);
int main()
{

  char text[17]= "the wrong son";
  int result = insertString(text,"per", 10);
  if(result != -1)
    printf("string 1 is : %s \n", text);
  else
    printf("Not possible\n");
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
