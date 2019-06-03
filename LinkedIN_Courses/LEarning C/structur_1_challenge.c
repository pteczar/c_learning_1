#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person 
{
    char name[64];
    int age;
};
struct person *allocateStruct(void);
void fetchStruct(struct person *p);
void showStruct(struct person *p);

int main(int argc, char const *argv[])
{

  struct person *you;

	you = allocateStruct();
	fetchStruct(you);
	showStruct(you);
    
    return 0;
}



void fetchStruct(struct person *p)
{
	printf("Type your name: ");
	scanf("%s",p->name);

	printf("Type your age: ");
    scanf("%d",&p->age);
}

void showStruct(struct person *p)
{
	printf("%s is %d years old\n",
			p->name,
			p->age);

			
}

struct person *allocateStruct(void)
{
	struct person *p;

	p = (struct person *)malloc(sizeof(struct person));
	if( p == NULL)
	{
		perror("Unable to allocate structure");
		exit(1);
	}
	return(p);
}