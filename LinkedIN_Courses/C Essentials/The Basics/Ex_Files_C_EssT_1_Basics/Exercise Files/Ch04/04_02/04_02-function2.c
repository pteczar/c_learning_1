#include <stdio.h>

void sum(void);

int main()
{
	puts("Calling the sum() function:");
	sum();
	puts("done");

	return(0);
}

void sum(void)
{
	int a,b;

	a = 91; b = 7;
	printf("%d / %d = %d\n",a,b,a/b);
}

