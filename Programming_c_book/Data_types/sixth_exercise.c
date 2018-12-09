#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int i = 0;
    int j = 0;

    int nextMultiple = 0;

    printf("Enter the multiple i and j: ");
    scanf("%d",&i);
     scanf("%d",&j);

    nextMultiple = (i + 2*j) - (i % 2*j);

  //  256 + 7 - 256 % 7


    printf(" i = %d, j = %d nextMultiple = %d", i,j,nextMultiple);

    return 0;
}
