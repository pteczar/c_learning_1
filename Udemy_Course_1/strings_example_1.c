#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str1[] = "To be or not to be";
    char str2[] = ",that is the question";

    unsigned int count = 0; // stores the string length

    while (str1[count] != '\0')
    ++count;

printf("The length of the string \"%s\" is %d characters \n", str1,count);

count = 0; //reset the count for the next __STRING
while (str2[count] != '\0') //count for the second string
++count;

printf("The length of the string \"%s\" is %d characters \n", str2,count);

    return 0;
}
