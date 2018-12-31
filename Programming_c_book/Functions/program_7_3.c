#include <stdio.h> 

void printMessage (void)
{
    printf ("Programming is fun.\n"); 
} 

int main (void) 

{
    int i = 1;

    do 
    {   ++i;
        printMessage ();
    }
    while (i < 10);
 
    i = 10;
        

    return 0;
} 