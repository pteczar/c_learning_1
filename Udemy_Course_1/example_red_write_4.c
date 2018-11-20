#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    int ch;

    fp = fopen("file.txt", "w+");

    for(ch = 33; ch <= 100; ch++) 
    {
        fputc(ch, fp);
    }

    fclose(fp);

    return 0;
}
