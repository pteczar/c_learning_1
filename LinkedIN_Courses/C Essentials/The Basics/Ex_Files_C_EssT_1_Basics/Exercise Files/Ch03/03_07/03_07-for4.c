#include <stdio.h>

int main()
{
	int a,b;

	b = 10;
	for( a=1 ; a<10 ; a++)
	{
		printf("%2d %2d\n",a,b);
		b--;
	}

	return(0);
}

