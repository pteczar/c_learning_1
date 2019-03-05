#include <stdio.h>
int arraySum( int *array, const int n);

int main(int argc, char const *argv[])
{
   int values[10] ={3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

   printf ("The sum is %i\n", arraySum (values, 10));

    return 0;
}

int arraySum( int *array, const int n)
{
    int sum = 0;
    int *const arrayEnd = array + n; // I do not understand this elements

    for(array; array < arrayEnd; ++array)
        sum = *array + sum;

    return sum;
}

