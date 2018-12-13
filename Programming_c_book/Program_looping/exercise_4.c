#include <stdio.h>

// formatting example! check the printf statements.

int main(int argc, char const *argv[])
{
    int n, twoToN;
    
     printf("TABLE OF POWERS OF TWO\n\n");
      printf(" n     2 to the n\n");
       printf("---    ---------------\n");
        twoToN = 1;
        
        
         for(n = 0; n <= 10; ++n)
         {
              printf("%2i        %i\n", n, twoToN);
               twoToN *= 2;
               
               } 
    return 0;
}
