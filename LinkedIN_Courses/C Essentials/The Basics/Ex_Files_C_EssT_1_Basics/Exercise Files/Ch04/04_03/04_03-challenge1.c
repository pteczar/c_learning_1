#include <stdio.h>

void line(void);

int main()
{
	puts("How to Fight Off a Robot Attack");
	line();
	puts("A Survival Guide for the 21st Century");
	line();

	return(0);
}

void line(void)
{
	int i;

	for (i = 0 ; i <= 50; i++)
	putchar('-');
	putchar ('\n');
}