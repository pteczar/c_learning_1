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
    int change;
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
  
    while (fgetc(myFile) != EOF) 
    { 
        fputs(chars, myTempFile); 
        chars[BUFFER] = fgetc(myTempFile); 
    } 

  printf("The lowercase string in the created temp file: %s\n", chars);

    //closing the first file
    fclose(myFile); 

    //changing the character to uppercase NOT WORKING!!!
    while (fgetc(myTempFile) != EOF) 
      if ((chars[BUFFER] >= 'a') && (chars[BUFFER] <= 'z'))
      chars[BUFFER] = fgetc(myTempFile); 
    { 
       chars[BUFFER] = chars[BUFFER] - 32;
       fseek(myTempFile,-1,SEEK_CUR);
                fputc(chars[BUFFER],myTempFile);
           } 
    
    printf("The UPPERCASE string in the created temp file: %s\n", chars);


  
        
            
             
        



 

    //copying to the temp file 


    //rename the temporary file to jasons_challenge_2a.txt

    


    //remove the temporary file 





    return 0;
}