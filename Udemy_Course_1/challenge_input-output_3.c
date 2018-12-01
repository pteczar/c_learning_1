
//write a program that prints the content of a file in reverse order
// FSEEK - read from the end of the file 
//FTELL - get the position of the file pointer
// display output in reverse order



#include <stdio.h>

int main(int argc, char const *argv[])
{

    int position = 0;
    char c;
    int i = 0;
   FILE *file = fopen("file.txt", "r");

    if(file != NULL)
    {
        fseek (file, 0, SEEK_END);
        position = ftell (file);
       
        printf("File size: %d bytes\n", position);
        fclose (file);


            FILE *file = fopen("file.txt", "r");
           

        while(i <= position)
        {   
            i++;
            fseek(file,-i,SEEK_END); // position does not work but why? 
            c = fgetc(file);
            
            printf("%c", c);

        }       

        fclose (file);
    }


    return 0;
}
