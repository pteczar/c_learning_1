#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
   //tHIS IS STUPID BUT THE COMPARE IS USED WITH 0,1 OR -1
   
printf("strcmp(\"A\", \"A\") is ");
printf("%d\n", strcmp("A", "A"));

printf("strcmp(\"A\", \"B\") is ");
printf("%d\n", strcmp("A", "B"));

printf("strcmp(\"B\", \"A\") is ");
printf("%d\n", strcmp("B", "A"));    
    
    
    
    return 0;
}

