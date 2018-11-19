
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    fp = fopen("/home/przemek/Documents/C_learning/GIT/c_learning_1/file.txt","w+");
    if(fp !=NULL)
    fputs("Hello how are you",fp);

    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read String1|%s|\n", str1);
    printf("Read String2|%s|\n", str2);
    printf("Read String3|%s|\n", str3);
    printf("Read Int|%d|\n", year);

    fclose(fp);

    return 0;
}
