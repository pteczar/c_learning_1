#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void printEntry (struct entry head);
void insertEntry (struct entry *insert, struct entry *previous );
int main(int argc, char const *argv[])
{
    struct entry n0, n1, n2, n3, n9;

    
    struct entry x;
    x.value = 150;
    
    n0.next = &n1;
    n1.value = 100;
    n1.next = &n2;
    n2.value = 200;
    n2.next = &n3;
    n3.value = 300;
    n3.next = NULL;
    n9.value = 900;


        printEntry(n0);
        insertEntry (&n9, &n0);
        printEntry(n0);

    return 0;
}


void printEntry (struct entry head)
{
    struct entry *ptr = head.next;

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