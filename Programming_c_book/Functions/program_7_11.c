#include <stdio.h>

void multiplyBy2 (float array[], int n)
{
    int i;

    for(i = 0; i < n; ++i)
    array[i] *= 2;
}

int main(int argc, char const *argv[])
{
    float floatVls[4] = {1.2f, -3.7f, 6.2f, 8.55f};
    int i;

    void multiplyBy2 (float array[], int n);

    multiplyBy2 (floatVls, 4);

    for ( i = 0; i < 4; ++i)
    printf("%.2f\t", floatVls[i]);

    printf("\n");

    return 0;
}
