/*  Write a program to generate and display a table of n and n^2 , for integer values of n ranging from 1 to 10. Be certain to print appropriate column headings. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int i;
    printf ("%10s", "value of n\t\n");
    for (i = 1; i <= 10; i++)
    {

        n = (n + 1);
        
        printf("%d\t", n);     
    }

    n = 0;
    printf("\n\n");
    printf ("%10s", "value of n^2\t\n");
    for (i = 1; i <= 10; i++)
    {
        n = (n + 1) ;
         printf("%d\t", n*n);
    }

    return 0;
}

