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

strcmp function to do that

