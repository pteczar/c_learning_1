#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};



int main(int argc, char const *argv[])
{
   int i;
   struct entry n1, n2, n3;

   n1.value = 100;
   n2.value = 200;
   n3.value = 300;

    

    n1.next = &n2;
    n2.next = &n3;

    i = n1.next->value;

    printf("n2 = %d", i);
    printf("\nn3 = %d", n2.next->value);


    return 0;
}
