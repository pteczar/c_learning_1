
/* two for or while loops one ++ , one -- , printf result or store it in result. return result, i beleive that the function needs to be int */


#include <stdio.h>
#include <string.h>

int substring (char source, int start, int count, char result);

int main(int argc, char const *argv[])
{
  char result;
      char s[100] = "wielki";     
 
    substring (s, 2,4,result);//wtf?



    return 0;
}




int substring (char source, int start, int count, char result)
{

int i, j;
char s[100];
result = 1;

for (i = 0; i <= start && i != '\0'; i ++)
{
    printf("%c",s[i]);
}

for (j = 0; j <= count && j != '\0'; j--)
{
    printf("%c",s[j]);
}


}