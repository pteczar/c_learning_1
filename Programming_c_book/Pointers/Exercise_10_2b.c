#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void printEntry (struct entry *ptr);
void insertEntry (struct entry *insert, struct entry *previous );
int main(int argc, char const *argv[])
{
    struct entry n1, n2, n3;

    struct entry *LinkedList = &n1;
    struct entry x;
    x.value = 150;
    

    n1.value = 100;
    n1.next = &n2;
    n2.value = 200;
    n2.next = &n3;
    n3.value = 300;
    n3.next = NULL;


        printEntry(LinkedList);
        insertEntry (&x, &n1);
        printEntry(LinkedList);

    return 0;
}


void printEntry (struct entry *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }

    printf("\n");
}

void insertEntry (struct entry *insert, struct entry *previous )
{
    insert->next = previous->next;
    previous->next = insert;
}