/* If c is a lowercase character, the expression c – 'a' + 'A' produces the uppercase equivalent of c, assuming an ASCII character set. Write a function called uppercase() that converts all lowercase characters in a string into their uppercase equivalents. */

#include <stdio.h>

void uppercase (char text[])
{
	int i = 0;

	while ( text[i] != '\0' ) {
		if ( text[i] >= 'a' && text[i] <= 'z' ) {
			text[i] = text[i] - 'a' + 'A';
		}
		++i;
	}
}

int main (void)
{
	char text[] = "All of these chArActers shOuld End uP in uPperCase!";

	printf ("text: %s\n", text);
	printf ("Converting to uppercase...\n");
	uppercase (text);
	printf ("text: %s\n", text);

	return 0;
}