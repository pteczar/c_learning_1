#include <stdio.h>
#include <stdbool.h>

/* 

1. create a function to count characters in the string (legth) / do not use the srtlen library/ 
 - function should take a character array as a parameter
 - should return an int (length) 

2. write a function to concatenate two character strings / do not use the strcat library /
 - function should take three paramaters
 - char result[] - character string that you store
 - const char str1[]
 - const char str[2]
 - can return void

 3. Write a function to compare two strings / do not use strcmp library /
  - function should take two const char arrays as paramaeters and return boolean of true if they are equal and false if otherwise
  */
 int main(int argc, char const *argv[])
 {
      void counter (char text[]);
      void concatenate ( char str1[], char str2[]);
      int compare (char str1[], char str2[]);
     
     char str1[100] = "same";
     char str2[100] = "same";
    
     
 
    counter ("Przemek");
    concatenate (str1, str2);
    printf("\nString obtained on concatenation: \"%s\"\n", str1);
    printf("%d",compare(str1,str2));
   


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

 void concatenate ( char str1[], char str2[])
 {
     
     int i = 0;
     int j = 0;

     while (str1[i] != '\0' )
     {
         i++;
     }
   while (str1[j] != '\0')  
   { 
        str1[i] = str2[j];
         i++;
         j++;
     }
     str1[i] = '\0';
 }

 int compare(char str1[],char str2[])
{
    int i,outcome = true;
    for(i=0; str1[i]!='\0' || str2[i]!='\0'; i++) {
        if(str1[i] != str2[i]) {
            outcome = false;
            break;
        }
    }
    return outcome;
}
   
   
 



 