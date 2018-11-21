// write a program to find a total number of lines in a text file
/* 1. create a file that contains some line od fexts
    2. open the test file
    3. use the fgetc function to parse characters in a file until you get to the EOF
    - if EOF increment counter  / count the lines 
    - display the output the total number of lines in the file */



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{


    // initializing the number of lines
    int lines = 0;   
    char chars;
    
    //creating the file
    FILE *pointerToFile = NULL;

    //opening the file for writing 
    pointerToFile = fopen("test_file.txt", "w+");

    //writing to the file
    fprintf(pointerToFile, "this is the first line\nthis is the second line\nthis is the third line\n");
    
   
    if(pointerToFile != NULL) // if not NULL proceed
{


    while ((chars = fgetc(pointerToFile)) != EOF);
    if( chars == '\n' && lines > 0)
    lines++;
}
    else // else end with -1
    return -1;
   
    fclose(pointerToFile); // close the file

    printf("there are: %i line(s)", lines); // print the number of lines

    return 0;
}
