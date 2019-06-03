#include <stdio.h>

int main(int argc, char *argv[])
{
	int count;
	
	printf("There were %d command line arguments\n",argc);
	printf("This program is named '%s'\n", argv[0]);

	if(argc ==1)
		printf("There are no extra agruments");
	if(argc >= 2)
	{
		printf("There are extra arguments = %d", argc);
		for(count = 0; count < argc; count++)
		printf("\nargv[%d]: %s",count,argv[count]);
	}
	return(0);
}

