#include <stdio.h>

int main()
{
	int a, i;
	char c = '-';

	printf("How long is the line? ");
	scanf("%d",&a);
	 
	 i = 0;

		while(i < a)
	{
		putchar(c);
			i++;
	}
		

	return(0);
}
