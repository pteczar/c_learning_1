#include <stdio.h>
#include <stdbool.h>
int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };
bool asc = true;
bool desc = false;

int main(int argc, char const *argv[])
{
    int i;
    

    int sort (int a[], int n, bool c);

    printf("the array before the sort\n");
    for( i = 0 ; i < 16; ++i)
        printf("%i ",array[i]);

        printf("\n");

        sort(array, 16, desc);

         printf("the array after the sort\n");
    for( i = 0 ; i < 16; ++i)
        printf("%i ",array[i]);

        printf("\n");

    return 0;
}

int sort (int a[], int n, bool c)
{
    int i, j, temp;

    if (c == true)
    {

    for( i = 0; i < n -1; ++i)
        for(j = i + 1; j < n; ++j)
            if( a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    }
       else if (c != true)
    {
        for( i = 0; i < n -1; ++i)
              for(j = i + 1; j < n; ++j)
                 if( a[i] < a[j])
                  {
                      temp = a[i];
                      a[i] = a[j];
                      a[j] = temp;
                  }
    }
    else return 1;
}