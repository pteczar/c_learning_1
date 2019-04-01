#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

struct entry n1, n2, n3, n4, newEntry;    
    
    


int main(int argc, char const *argv[])
{

    n1.value = 100;
    n1.next = &n2;
    n2.value = 200;
    n2.next = &n3;
    n3.value = 300;
    n3.next = &n4;
    n4.value = 400;
    n4.next = (struct entry *) NULL;

    

    return 0;
}



int insertEntry (struct entry n4)
{
 n4.value = 400;

}