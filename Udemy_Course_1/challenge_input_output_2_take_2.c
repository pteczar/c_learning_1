#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define FILENAME "jasons_challenge_2.txt"

// create the file, open it,

int main(int argc, char const *argv[])
{
     //creating the file
    FILE *myFile = NULL;
    FILE *myTempFile = NULL;
    
    char chars = ' ';

   //opening the file for reading
    myFile = fopen(FILENAME, "r");

    if(myFile == NULL)
        return -1;
   
   //opening the second file
    myTempFile = fopen("myTempFile.txt","w");

     if(chars = myTempFile == NULL) 
        return -1;
   
    while ((chars = fgetc(myFile)) != EOF) 
     {
        if (islower(chars))
        {
            chars = chars-32;
        }

        fputc(chars, myTempFile);
    }

   
 //closing the first file
    fclose(myFile); 
    fclose(myTempFile);

    remove(FILENAME);

    rename("myTempFile.txt", FILENAME);
    remove("myTempFile.txt");

       myFile = fopen(FILENAME, "r");

    if(myFile == NULL)
    return -1;

    while((chars = fgetc(myFile)) != EOF)
    printf("%c", chars);

    fclose(myFile);
    myFile = NULL;
    myTempFile = NULL;


        return 0;
}