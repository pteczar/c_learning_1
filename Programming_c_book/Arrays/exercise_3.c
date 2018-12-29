#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numbers[10] = {1.2, 2.5, 3.5, 6.7, 8.9, 6.3, 2.5, 3.1, 9.9, 1.1};
    float average = 0.0, sum = 0.0;
    int i;

    for( i = 0; i < 10; i++)
    {
        sum = sum + numbers[i];  
    }

    average = sum/i;


    printf("sum = %f | average = %f", sum, average);
    return 0;
}
