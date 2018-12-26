/* Program to count average of an array of 10 floating-point values */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float array[10] = { 0.01571030992, 0.6938652309, 0.3511882549, 0.03561093894, 0.409532801, 0.9730321283, 0.01253622591, 0.6322868075, 0.8020451657, 0.8285654786};
    float average, sum = 0.0;
    int i;

    for(i = 0; i < 10; ++i)
    {
    sum += array[i];
    }

    printf("Sum %f", sum);
     
   average = sum/i;


    printf("\nAverage = %f",average);



    return 0;
}
