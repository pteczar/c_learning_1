#include <stdio.h>

int main()
{
	int a,b,larger;

	printf("Enter a value: ");
	scanf("%d",&a);
	printf("Enter another value: ");
	scanf("%d",&b);

    larger = (a > b) ? a : b;

	//if( a > b )
	//	larger = a;
//	else
//		larger = b;
	printf("%d is the larger value.\n",larger);

	return(0);
}

