#include <stdio.h>

int main() {
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10) {
         i++;
        if( array[i] < 5)
        {
        continue;
        }
         
       

        if (array[i] > 10)
        {
        break;
        }
    printf("%d\n", array[i]);
       
    }

    return 0;
}