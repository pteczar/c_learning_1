#include <stdio.h>

int main()
{
	union storage {
		char a;
		int b;
	} reg;

	reg.a = 'A';
	printf("reg.a stores %c\n",reg.a);

	reg.b = 1346;
	printf("reg.b stores %d\n",reg.b);
	printf("reg.a stores %c\n",reg.a);

	return(0);
}

