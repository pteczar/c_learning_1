#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;

    fp = fopen("file.txt","w+");

    fputs("This is C programming\n ", fp);
    fputs("This is a system programming language", fp);

    fclose(fp);

    return 0;
}
