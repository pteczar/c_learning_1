#include <stdio.h>

int main(int argc, char const *argv[])
{
   int arraySum (int array[], int number);
   int arr[] = {1, 2, 5, 66, 7, 56}; 
   int num = sizeof(arr) / sizeof(arr[0]); 
   
  
   printf("%d", arraySum(arr,num));
    
    return 0;
}


int arraySum (int array[], int number)
{
    int sum = 0;
    int i;

    for (i = 0; i < number; i++)
    {
        sum += array[i];
    }
        return sum;
    
}