 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main(int argc, char const *argv[])
 {
     char *str = NULL; //good practce to initiate to NULL
//initial memory allocation

str = (char *) malloc(15 * sizeof(char)); // so it works on all systems 
strcpy(str, "przemek");

printf("string = %s, Address = %u\n", str, str);

//Reallocating memory

str = (char *) realloc(str,25 * sizeof(char));
strcat(str,".com");

printf("String = %s, Address = %u\n",str, str);

free(str);

     return 0;
 }
 