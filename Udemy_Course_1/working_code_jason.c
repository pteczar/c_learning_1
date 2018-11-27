#include <stdio.h>

#include <stdlib.h>



int main(int argc, char const *argv[])

{





    // initializing the number of lines

    int lines = 0;

    int chars;



    //creating the file

    FILE *pointerToFile = NULL;



    //opening the file for writing

    pointerToFile = fopen("test_file.txt", "w+");



    //writing to the file

    fprintf(pointerToFile, "this is the first line\nthis is the second line\nthis is the third line\n");





    if(pointerToFile == NULL) // if not NULL proceed

{

    printf("print something please\n");

    return -1;



}



fclose(pointerToFile);

pointerToFile = fopen("test_file.txt", "r");



    while ((chars = fgetc(pointerToFile)) != EOF)

    {

    printf("just read in character %c\n", chars);

    if( chars == '\n')

    lines++;



    }

    fclose(pointerToFile); // close the file

    pointerToFile = NULL;







    printf("there are: %i line(s)", lines); // print the number of lines



    return 0;

}