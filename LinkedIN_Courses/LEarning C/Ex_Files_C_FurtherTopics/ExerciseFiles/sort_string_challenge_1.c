#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
int compare(const void *a, const void *b);

int main(int argc, char const *argv[])
{
    
    char array[SIZE];
    int i;


    //populating the radom array
   srand((unsigned)time(NULL));
   for(i=0;i<SIZE;i++)
   array[i] = 'A' + rand() % 26;
//displaying the unsorted array
        puts("Unsordted Array");
         for(i=0;i<SIZE;i++)
         printf(" %3c",array[i]);
	putchar('\n');

//sorting the array
qsort(array,SIZE,sizeof(char),compare);

//displaying the sorted array
	puts("Sorted array:");
	for(i=0;i<SIZE;i++)
		printf(" %3c",array[i]);
	putchar('\n');

    return 0;
}


int compare(const void *a, const void *b)
{
	return( *(int *)a - *(int *)b );
}