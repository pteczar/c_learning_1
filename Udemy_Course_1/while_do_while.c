/* Guess the number:
1. Generate random number from 0 to 20
2. Ask the user to guess the number
3. User should be able to enter only numbers 0-20
4. Program should incdicate if the guess is too low or too high
5. User will get five tries after that it will stop */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    time_t t; // declaration of time constraint
    int number, tries;

    srand((unsigned) time(&t)); // this is an intialization of the random generator
    int random_number = rand() % 21; // getting the random number between 0-20

        printf("This is a guessing game.\nI have chosen the number between 0 and 20 which you must guess.\n");

        
    for(tries = 0; tries < 5; tries++)
{
     printf("Put in your number: ");
        scanf("%d",&number);


        while( number >=0 && number <= 20)
        {   

        if(number == random_number) // nested if statement for testing the number
        {
            printf("You won in the first try, you are amazing\n");
        }
           else if( number < random_number)
                {
// printf("nothing to display yet"); // just for testing
                    printf("Your number is too low, try again!\n");
                }
            else if (number > random_number)
                {
                    printf("Your number is too high, try again!\n");
                }
            else   {
                    printf("%d", random_number); // printing the random number for testing 
                   }
                  
        
        break;
        }
        
}


// add goto?

    return 0;
}
