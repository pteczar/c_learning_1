#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER 34

// create the file, open it,

int main(int argc, char const *argv[])
{
     //creating the file
    FILE *myFile = NULL;
    char chars[BUFFER];

    //opening the file for writing 
    myFile = fopen("jasons_challenge_2.txt", "w+");

    //writing to the file
    fputs("this is second jason's challenge.",myFile); // working

    fclose(myFile); // close the file

   //opening the file for reading
    myFile = fopen("jasons_challenge_2.txt", "r");

    fgets (chars, BUFFER, myFile);
    printf("The String in the file: %s\n", chars);

       //creating the Temp file

    FILE *myTempFile = NULL;

    //opening the second file
    myTempFile = fopen("myTempFile.txt","w+");

    //copying the content of a file to another file
  
    while (chars[BUFFER] = fgetc(myFile)) != EOF) 
    { 
        fputs(chars, myTempFile); 
        chars = fgetc(myFile); 
    } 

  printf("The String in the created temp file: %s\n", chars);
   
    //changing the character to uppercase



    //closing the file
    fclose(myFile); // close the file



 

    //copying to the temp file 


    //rename the temporary file to jasons_challenge_2a.txt

    


    //remove the temporary file 





    return 0;
}
