#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    fpos_t position;

    fp = fopen("file.txt", "w+");
    fgetpos(fp, &position);

    fputs("Hello World", fp);

    fsetpos(fp, &position);
    fputs("This is to verride previous content", fp);

    fclose(fp);
    
    return 0;
}
