#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    int c;

    fp = fopen("/home/przemek/Documents/C_learning/GIT/c_learning_1/file.txt","r");

    if(fp == NULL)
    {
        perror("Error in opening file");
        return (-1);
    }
    while ((c = fgetc(fp)) != EOF)
    printf("%c", c);

    fclose(fp);
    fp = NULL;
    
    return 0;
}
