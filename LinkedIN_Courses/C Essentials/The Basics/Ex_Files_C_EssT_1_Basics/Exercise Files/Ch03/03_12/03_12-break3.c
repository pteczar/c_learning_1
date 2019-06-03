#include <stdio.h>

int main()
{
	int ch;

	puts("Type 0 to end:");
	while(1)
	{
		ch = getchar();
		if( ch == '0')
			break;
		putchar(ch);
	}

	return(0);
}
