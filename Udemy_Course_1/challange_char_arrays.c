#include <stdio.h>
#include <stdbool.h>

/* 

1. create a function to count characters in the string (legth) / do not use the srtlen library/ 
 - function should take a character array as a parameter
 - should return an int (length) 

2. write a function to concatenate two character strings / do not use the strcat library /
 - function should take three paramaters
 - char result[]
 - const char str1[]
 - const char str[2]
 - can return void

 3. Write a function to compare two strings / do not user strcmp library /
  - function should take two const char arrays as paramaeters and return boolean of true if they are equal and false if otherwise
  */
 int main(int argc, char const *argv[])
 {
      void counter (char text[]);
     
     counter ("Przemek");


     return 0;
 }
 

 void counter (char text[])
 {
    int i = 0;
    int count = 0;

    while (text[i] != '\0')     
    {
    count++;
    i++;
    }

    printf("%d",count);

 }