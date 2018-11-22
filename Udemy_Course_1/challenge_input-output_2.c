#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



// create the file, open it,

int main(int argc, char const *argv[])
{
     //creating the file
    FILE *myFile = NULL;
    int chars;

    //opening the file for writing 
    myFile = fopen("jasons_challenge_2.txt", "w+");

    //writing to the file
    fputs("This is second Jason's challenge.",myFile); // working

    fclose(myFile); // close the file

   //opening the file for reading
    myFile = fopen("jasons_challenge_2.txt", "r");



   /*----------------------------------------------- 
   
   testing the islower function - not needed 

    myFile = chars;

    if(islower(chars)) 
    {
    printf("%d", chars);
    }
    else 
    return - 1;
  ---------------------------------------------*/



    //changing the character to uppercase



    //closing the file
    fclose(myFile); // close the file



    //creating the Temp file

    FILE *myTempFile = NULL;


    //rename the temporary file to jasons_challenge_2a.txt


    //remove the temporary file 





    return 0;
}
