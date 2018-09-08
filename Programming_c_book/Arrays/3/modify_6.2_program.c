#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ratingCounters[11], i, response, numberResponses;

    printf("How many responses do you want? ");
    scanf("%d", &numberResponses);
    
    for(i = 1; i <=10; ++i)
    ratingCounters[i] = 0;
    
    printf("Enter your responses: ");

    for(i = 1; i <= numberResponses; i++)
    {
        scanf("%i", &response);
        
        
        if(response < 1 || response > 10)
        printf("Bad response: %i\n", response);
         
        if(response == 999)
        break;

        else if (++ratingCounters[response]);
       
    }
       

    printf("\n\nRating \t\t5Number of responses\n");

    printf("------------------------------------------------------------\n");

    for( i = 1; 1 <= 10; ++i)
    printf("%4i%14i\n",i , ratingCounters[i]);




    return 0;
}
