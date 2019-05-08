#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
int compare(const void *a, const void *b);

int main(int argc, char const *argv[])
{
    char string [SIZE];
    int length;


    printf("Enter data: ");
    fgets(string,SIZE,stdin);
    length = strlen(string);

    qsort(string,length,sizeof(char),compare);

    puts("Sorted String: ");
    printf("%s\n", string);

    return 0;
}



int compare(const void *a, const void *b)
{
	return( *(int *)a - *(int *)b );
}