#include <stdio.h>
#include <stdlib.h>

struct entry
{
    int value;
    struct entry *next;
};

struct entry* head;    
    
void InsertEntry (int x);
void PrintEntry();

int main(int argc, char const *argv[])
{

int count, i , x;

 head = NULL; // list is empty

 printf("How many numbers?\n");
 scanf("%d", &count);

 for(size_t i = 0; i < count; i++)
 {
      printf("Enter the number\n");
      scanf("%d",&x);
      InsertEntry(x);
      PrintEntry();
 }
 

    return 0;
}



void insertEntry (int x)
{

 entry* temp = (entry*)malloc(sizeof(struct entry)); // creating a node
 temp->value = x;
 temp->next = NULL;
 if(head != NULL) temp->next = head;
 head = temp;
}

void PrintEntry()
{
    struct entry* temp = head;
    printf("List is:");
    while(temp != NULL)
    {
        printf("%d", temp->value);
        temp = temp->next;
    }

    printf("\n");
}