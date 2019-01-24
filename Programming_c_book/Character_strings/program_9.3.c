
#include <stdio.h>

int main(int argc, char const *argv[])
{
void concat (char result[], const char str1[], const char str2[]);

const char s1[] =  "Iwo jest Bogiem!";
const char s2[] = " Wujek jest z nim!";
char s3[50];

concat (s3,s1,s2);

printf("%s\n", s3);


    return 0;
}


//Function to concatenate two character strings

void concat (char result[], const char str1[], const char str2[])
{
int i, j;

// copy str1 to result
for (i = 0; str1[i] != '\0'; ++i)
    result[i] = str1[i];

//copy str2 to result

    for (j = 0; str2[j] != '\0'; ++j)
    result[j + i] = str2[j];


    //Terminate the concatenated string with a null character

    result[j + i] = '\0'; 
}