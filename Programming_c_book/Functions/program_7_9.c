#include <stdio.h>

int minumum (int values[10])
{
    int minValue, i;

    minValue = values[0];


for( i = 1; i < 10; ++i)
    if(values[i] < minValue)
        minValue = values[i];

        return minValue;
}

int main(int argc, char const *argv[])
{
    /* code */

    int scores[10], i, minScore;
    int minimum (int values[10]);

    printf("Enter 10 scores\n");

    for(i = 0; i < 10; ++i)
        scanf("%i", &scores[i]);

        minScore = minumum (scores);
        printf("\nMinimum score is %i\n", minScore);
        
    return 0;
}
