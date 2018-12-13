#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, factorial;

    for(i = 1; i <= 10; i++)
    {
            factorial = 1; // why?
      

        for (n = 1; n <= i; n++ ) // connect two for loops
        
    
        factorial = factorial*n;
        
        
        printf("factorial of %d = %d\n",n-1, factorial);  
    }


    return 0;
}
