#include <stdio.h>
#include <stdlib.h>


struct entry
{
    int value;
    struct entry *next;
};

void insertEntry (struct entry ** head_ref, int newEntry )
{
    struct entry* newData = (struct entry*) malloc (sizeof(struct entry));

    newEntry.value = newData;
    newEntry.next = (*head_ref);
    (*head_ref) = newEntry;

}