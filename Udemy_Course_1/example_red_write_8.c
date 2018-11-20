#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;

    fp = fopen("file.txt","w+");
    fputs("This is Jason", fp);

    fseek(fp, 7, SEEK_SET);
    fputs("Hello how are you?", fp);
    
    fclose(fp);
    return 0;
}
