#include <stdio.h>

int line (int count, char c);

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'-');

	return(0);
}


int line (int count, char c)
{
	int i;
	for( i = 0; i <= count; i++)
	putchar(c);
}