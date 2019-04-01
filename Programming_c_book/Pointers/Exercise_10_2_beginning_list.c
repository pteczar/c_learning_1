#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void InsertEntry (int x);
void PrintEntry();

//declaring the head

struct Node* head; // global variable

int main(int argc, char const *argv[])
{
    head = NULL; // list is empty at the beginning

    printf("How many numbers?\n");
    int n, i, x;
    scanf("%d", &n);

    for(size_t i = 0; i < n; i++)
    {
        printf("Enter the number\n");
        scanf("%d",&x);
        InsertEntry(x);
        PrintEntry();
    }

    return 0;
}

void InsertEntry (int x)
{
    Node* temp = (Node*)malloc(sizeof(struct Node)); // creating a node
    temp->data = x;
    temp->next = NULL;
    if(head != NULL) temp->next = head;
    head = temp;
}

void PrintEntry ()
{
    struct Node* temp = head;
    printf("List is: ");
    while(temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

