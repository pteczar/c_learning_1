/*Develop insertEntry() and removeEntry() functions for a doubly linked list that are similar in function to those developed in previous exercises for a singly linked list. Why can your removeEntry() function now take as its argument a direct pointer to the entry to be removed from the list?*/

#include <stdio.h>

struct entry
{
    int value;
    struct entry *previous;
    struct entry *next;
};

void printDoubleList ( struct entry *ptr);
int main(int argc, char const *argv[])
{
    struct entry  n1, n2, n3;
    struct entry *nNull = NULL;
    
    n1.value = 1;
    n2.value = 2;
    n3.value = 3;

    n1.previous = nNull;
    n2.previous = &n1;
    n3.previous = &n2;
   
    n1.next = &n2;
    n2.next = &n3;
    n3.next = nNull;

    
    printDoubleList(&n1);

    return 0;
}


void printDoubleList ( struct entry *ptr)
{
    while (ptr->next != NULL)
    {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }

    while (ptr->previous != NULL)
    {
        printf("%d\n", ptr->value);
        ptr = ptr->previous;
    }
        
    printf ("%i\n", ptr->value);
}