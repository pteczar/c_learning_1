#include <stdio.h>
#include <string.h>

#define SIZE 32


int main(int argc, char const *argv[])
{

char name[SIZE];
char buffer[2*SIZE];
char last[] = "passed the challenge!\n";
char c;
int i = 0;
    
//fetch input from the user

//1. prompt the user to typu their name

puts("Please enter your name: ");


//2. Write a loop to process single character input storing it in a buffer called name[]
 
 while( (c=getchar()) != '\n' )

{
    name[i] = c;
    i++;

    if (i == SIZE -1)
    break;
}
 name[i] = '\0';

//process input and string literal to generate a phrase

strcpy(buffer, name);
strcat(buffer, " ");
strcat(buffer,last);

//output the phrase

i = 0;

	while( putchar(buffer[i++]) );

    return 0;
}
