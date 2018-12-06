#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>
//this program is working but using a GCC not G++ compiler
int main(int argc, char const *argv[])
{
struct node
{    

    int data;
    struct node *next;
};

struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

one->data = 5;
two->data = 6;
three->data = 7;

one->next = two;
two->next = three;
three->next = NULL;

head = one;

//https://www.programiz.com/dsa/linked-list
printf("one = %i\n",one->data);
printf("two = %i\n" ,one->next->data);
printf("three = %i\n",two->next->data);


    return 0;
}

