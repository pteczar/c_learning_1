#include <stdio.h>

int main()
{
	FILE *fh;

	/* open the file for appending */
	fh = fopen("/home/przemek/Documents/C_learning/GIT/c_learning_1/LinkedIN_Courses/C Essentials/Ex_Files_C_Data_Structures_Pointers/Exercise Files/Ch04/04_02/alphabet.txt","a");
	if( fh == NULL )
	{
		puts("Failed to open file");
		return(1);
	}

	/* output */
	fputc('\n',fh);

	/* close the file */
	fclose(fh);

	return(0);
}
