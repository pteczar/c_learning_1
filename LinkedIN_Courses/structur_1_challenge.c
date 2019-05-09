#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person 
{
    char name[64];
    int age;
};
void fetchStruct(struct person *p);
void showStruct(struct person *p);

int main(int argc, char const *argv[])
{

    char author[64];

    printf("provide person's name: ");
    fgets(author, sizeof(author),stdin);

    struct person *author;
    
    
    return 0;
}



void fetchStruct(struct person *p)
{
	strcpy(p->name,"Dan Gookin");
	p->age = 54;
	
}

void showStruct(struct person *p)
{
	printf("Author %s is %d years old\n",
			p->name,
			p->age);

			
}