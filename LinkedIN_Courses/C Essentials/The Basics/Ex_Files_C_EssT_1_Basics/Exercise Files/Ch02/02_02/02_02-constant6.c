#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	const int n = 5;
	int x,r[n];

	srand((unsigned)time(NULL));

	for(x=0;x<n;x++)
		r[x] = rand()%10+1;

	printf("Here are your %d random values:\n",n);
	for(x=0;x<n;x++)
		printf("%3d\n",r[x]);

	return(0);
}

