#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    float store;

    printf("Enter and integer: ");
    scanf("%d",&input);

    store = (float)input;

    printf("integer %d = float %.1f",input, store);


    return 0;
}
