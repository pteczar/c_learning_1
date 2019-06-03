#include <stdio.h>

int main()
{
	const char filename[] = "/home/przemek/Documents/C_learning/GIT/c_learning_1/LinkedIN_Courses/C Essentials/Ex_Files_C_Data_Structures_Pointers/Exercise Files/Ch04/04_03/integers.dat";
	FILE *fp;
	int x,a[10];

	/* open the file for reading */
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		printf("Unable to create %s\n",filename);
		return(1);
	}

	/* read integers */
	fread(&a, sizeof(int), 10, fp );
	for(x=0;x<10;x++)
		printf("%d\n",a[x]);

	/* close */
	fclose(fp);

	return(0);
}

