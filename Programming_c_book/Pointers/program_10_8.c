#include <stdio.h>
void test (int *int_pointer);



int main(int argc, char const *argv[])
{
    
    int i = 50, *p = &i;

        printf("Before the call to test i = %i\n", i);

    test(p);

        printf("After the call to test i = %i\n", i);
   

    return 0;
}

void test (int *int_pointer)
{
    *int_pointer = 100;
}