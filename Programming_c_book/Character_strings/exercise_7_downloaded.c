#include<stdio.h>


int insertString(char[],char[],int);
int stringLength(char[]);
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

  int i = 0,j = 0;
  int lengthA = stringLength(a);
  int lengthB = stringLength(b);

  if(pos > lengthA)
    return -1;

  for(i= lengthA; i >= pos; i--)
      a[i + lengthB] = a[i];

  for ( i = 0; i < lengthB; ++i )
      a[i + pos] = b[i];

  return 1;
}
int stringLength(char x[])
{
  int length=0;
  while(x[length]!='\0')
    length++;
  return length;
}