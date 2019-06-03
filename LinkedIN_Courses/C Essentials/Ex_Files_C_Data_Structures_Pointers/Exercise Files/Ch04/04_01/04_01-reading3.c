#include <stdio.h>

int main()
{
	const char filename[] = "/home/przemek/Documents/C_learning/GIT/c_learning_1/LinkedIN_Courses/C Essentials/Ex_Files_C_Data_Structures_Pointers/Exercise Files/Ch04/04_01/sonnet18.txt";
	FILE *fh;
	char buffer[64];

	/* open the file */
	fh = fopen(filename,"r");
	if( fh == NULL )
	{
		printf("Unable to read from file %s\n",filename);
		return(1);
	}
	
	/* read the file 64 characters at a time */
	while( fgets(buffer,64,fh) )
		printf("%s",buffer);

	/* close when you're done */
	fclose(fh);

	return(0);
}
