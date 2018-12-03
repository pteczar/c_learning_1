#include <stdio.h>

void guessNumber(int guess) 
{
    if(guess == 555)
    {
        printf("Correct. You guessed it!");
    }
    else if(guess > 555)
    {
        printf("Your guess is too high.");
    }
    else
    {
		printf("Your guess is too low.");
    }
}


int main() {
void guessNumber(int guess); 

    guessNumber(500);
    guessNumber(600);
    guessNumber(555);


    return 0;
}

