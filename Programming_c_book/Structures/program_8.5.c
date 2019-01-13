#include <stdio.h>
//  Program to update the time by one second (does not work)
struct time
{
    int hour;
    int minutes;
    int seconds;
};


int main(int argc, char const *argv[])
{

    struct time timeUpdate (struct time now);
    struct time currentTime, nextTime;

    printf("Enter the time (hh:mm:ss): ");
    scanf ("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);

    nextTime = timeUpdate (currentTime);
    printf ("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour,nextTime.minutes, nextTime.seconds );


    return 0;
}

// Function to update the time by one second 

struct time timeUpdate (struct time now)
{
    ++now.seconds;

    if (now.seconds == 60 ) 
    {
            now.seconds = 0;
        ++now.minutes;
    }
        if( now.minutes == 60) 
        {
        
            now.minutes = 0;
            ++now.hour;
        }
            if( now.hour == 24) 
            {
            
                now.hour = 0;

            }

    
    
return now;
}