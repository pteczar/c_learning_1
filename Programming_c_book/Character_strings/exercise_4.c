#include <stdio.h>
 
void substring(char source[], char result[], int start, int count); 
 
int main()
{
   char string[1000] = {"character"}, sub[1000]; 

   substring(string, sub, 4, 3);
 
   printf("Required substring is \"%s\"\n", sub);
 
   return 0;
}
//C substring function definition
void substring(char source[], char result[], int start, int count) 
{
   int i = 0;
   
   while (i < count) 
   {
      result[i] = source[start + i];
      i++;
   }
   result[i] = '\0';
}