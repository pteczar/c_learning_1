#include <stdio.h>

int main()
{
	FILE *fh;
	int a;

	/* open/create the file */
	fh = fopen("/home/przemek/Documents/C_learning/GIT/c_learning_1/LinkedIN_Courses/C Essentials/Ex_Files_C_Data_Structures_Pointers/Exercise Files/Ch04/04_02/alphabet.txt","w");
	if( fh == NULL )
	{
		puts("Failed to create file");
		return(1);
	}

	/* output */
	for(a='A';a<='Z';a++)
		fputc(a,fh);

	/* close the file */
	fclose(fh);

	return(0);
}
