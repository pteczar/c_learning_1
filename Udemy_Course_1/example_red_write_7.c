#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    int len;

    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }

    fseek(fp, 0, SEEK_END);


    len = ftell(fp);
    fclose(fp);


    printf("Total size of file.txt = %d bytes\n", len);
    
    return 0;
}
