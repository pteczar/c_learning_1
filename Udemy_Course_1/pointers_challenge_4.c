#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// function to read the string


int main(int argc, char const *argv[])
{
    int size = 0;
    char *value = NULL;
    
   
    printf("Please enter desired length: ");
        scanf("%d",&size);

        printf("Please enter a string: ");
        scanf("%s",value); 

        value = (char *) malloc(size * sizeof(char));

    printf("String = %s, Length = %d\n", value, size);
    
    free(value);

    return 0;
}

