
//islower test

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
      char znak;
scanf( "%c", & znak );
if( islower( znak ) )
     printf( "Wprowadziles mala litere alfabetu i jest to: %c\n", znak );
    return 0;
}
