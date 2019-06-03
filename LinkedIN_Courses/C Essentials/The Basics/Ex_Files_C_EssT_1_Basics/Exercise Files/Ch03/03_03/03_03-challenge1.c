#include <stdio.h>

int main()
{
	int a;

	printf("Select item 1, 2, or 3: ");
	scanf("%d",&a);

	if (a == 3)
	puts("This is the third item");
		else
		{
			puts("invalid choice");
		}
		

	return(0);
}
