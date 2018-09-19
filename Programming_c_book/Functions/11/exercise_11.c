#include <stdio.h>

int arraySum (int array[], int numberOfElements)
{
int sum = 0;
int i;

for(i = 0; i < numberOfElements; i++)
sum += array[i];

return sum;

}



int main(int argc, char const *argv[])
{
    int arraySum (int array[], int numberOfElements);
    int array[] = {0, 1, 2, 3, 7};
    int numberOfElements = sizeof(array) / sizeof(array[0]);
        printf("%d", arraySum(array, numberOfElements));

    return 0;
}


