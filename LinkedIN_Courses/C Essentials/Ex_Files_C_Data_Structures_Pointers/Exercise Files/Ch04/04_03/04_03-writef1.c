#include <stdio.h>

int main()
{
	const char filename[] = "/home/przemek/Documents/C_learning/GIT/c_learning_1/LinkedIN_Courses/C Essentials/Ex_Files_C_Data_Structures_Pointers/Exercise Files/Ch04/04_03/integers.dat";
	FILE *fp;
	int x,a;

	/* open and create the file */
	fp = fopen(filename,"w");
	if( fp == NULL )
	{
		printf("Unable to create %s\n",filename);
		return(1);
	}

	/* write the integers */
	a = 10;
	for(x=0;x<10;x++)
	{
		fwrite(&a, sizeof(int), 1, fp);
		a += 5;
	}

	/* and remember to close */
	fclose(fp);

	return(0);
}

