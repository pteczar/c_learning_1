/* The countWords() function from program 9.7 and 9.8
incorectly counts a word that contains an aphostrophy
as two words. Modify this funcion to corectly handel 
this situation. Also, extend the founction to count a 
 sequnce of positive or negative numbers, including 
 embeded comma as a single word */
 
 // Function to determine if a chracter is alphabetic
 
#include <stdio.h>
#include <stdbool.h>
 
bool alphabetic(const char c)
{
	return ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
 
bool numeric(const char c)
{
	return (( c >= '0') || ( c <= '9'));	
}
 
/* Function to count the number of
words in a string*/
 
int countWords(char string[])
{
	int i, wordCount = 0;
 
	bool lookingForWord = true;
	bool alphabetic(const char c);
 
	for( i = 0; string[i] != '\0'; ++i)
	{
		 alphabetic(string[i]);
		if(alphabetic(string[i]) || numeric(string[i]))
		{
			if(lookingForWord)
			{
				
				++wordCount;
				lookingForWord = false;
			}
		}
 
		else
		{
			lookingForWord = true;
		}
 
 
 
	}
 
	return wordCount;
}
 
int main(void)
{
	char text1[] = {"Well here 12 goes."};
	char text2[] = {"And her'e we go...again."};
	//int countWords(const char string[]);
 
	printf("%s - words = %d\n", text1, countWords(text1));
	printf("%s - words = %d\n", text2, countWords(text2));
 
	return 0;
}