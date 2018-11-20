#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fp;

    fp = fopen("file.txt", "w+");
    fprintf(fp, "%s %s %s %s %d","Hello","My","Number", "is", 555 );

    fclose(fp); 

    return 0;
}
