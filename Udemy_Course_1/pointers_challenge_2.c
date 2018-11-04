#include <stdio.h>

//test of pass by reference 
// Function has to square number by itself and use pointer 

int multiply (int *x)
{
int temp;

temp = *x;

return temp*temp;

}
int main(int argc, char const *argv[])
{
    
int multiply (int *x);

int x = 5;

printf("%d",multiply(&x));

    return 0;
}
