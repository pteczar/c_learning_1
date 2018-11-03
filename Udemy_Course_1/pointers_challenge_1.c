#include <stdio.h>
#include <iostream>

//write a program that creates an integer variable with a hard-coded value. Assign that variable's address to a pointer variable
// Display as output the address of the pointer, the vale of the pointer and the value of what the pointer is pointing to.


int main(int argc, char const *argv[])
{

    int number = 10;
    int *mypointer = NULL;

    mypointer = &number;

    printf(" [addres] of mypointer is [%p] and the [value] is [%d]", mypointer, *mypointer);
    printf(" [addres] [%p]  [value] is [%p]", &mypointer, &number);
    return 0;
}
