// how to store 

plusSign = '+';

printf("This is a string");
printf("This is on\n two lines");
printf("For\"you write \\\".");

"" - in this there are strings
'' - in this there are characters

\null - always end of the null characters
NULL is not the same as \null

creating a string

declare a string in C 

char myString[20];

initilizing a string:
2 ways:

char word[] = {'H','e'.'l','l','o'};
char word[] = {"Hello"};

do not specify the size of the array

%s strings in printf 

printf("\nThe message is %s", message); - we do not enter message[] even if it is an array 

scanf("wielki kutas %s" messge) - no &message becasue it is a string

how to test if strings are equal?
do not user ==
strcmp function to do that

constant string 

#define 

example 

#define TAXRATE 0.0015
it can be anywhere , it is not global 
this is constant defined in a preprocessor

other options for define:

const int MONTHS = 12; // MONTHS a symobilic constant for 12 instead of #define
you can use a type like int float etc

third way to create constant:

using enums enum 

you can initilize a char array that is a constant so it will never change and can be used for displaying different sentences const char message[] = "The end is near!";

// STRING FUNCTIONS

strlen - length of the string
strcpy() and strncpy() - copying one character string to another
strcat() and strncat() - combining the character 
strcmp() and strncmp() - check if they functions are equal





