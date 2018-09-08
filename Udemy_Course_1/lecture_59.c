//global variable

#include <stdio.h>

int myGlobal = 0; // global variable is declared before main()

main(int argc, char const *argv[])
{
    int myLocalMain = 0; // local variable

    return 0;
}

void myFunction()
{
    int x; // local variable

    // can access myGlobal and x but cannot access the myLocal as it is local to another function 
}
