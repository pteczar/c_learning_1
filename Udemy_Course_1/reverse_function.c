#include <stdio.h>
#include <string.h>




int main(int argc, char const *argv[])
{
    void reverse(char s[1000]);
    char s[1000] = "mars";

    reverse(s);

    return 0;
}
void reverse(char s[1000])
{
  int i = 0;
  int j = strlen(s) - 1;
  char temp;
 
   while ( i < j)
   {
       temp = s[i];
       s[i] = s[j];
       s[j] = temp;
       i++;
       j--;
   }
   printf("\nReverse string is :%s", s);
   
}