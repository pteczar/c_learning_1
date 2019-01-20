#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

typedef struct time TimeStructure;

int timeDifference (TimeStructure startTime, TimeStructure endTime);
int countSeconds (TimeStructure time1);
int timeCount (int inputSeconds);
int abs(int number);

TimeStructure time1 = {3,45,15};
TimeStructure time2 = {9,44,03};

int main(int argc, char const *argv[])
{
    printf("\nStart Time in seconds = %d", countSeconds(time1));
    printf("\nEnd Time in seconds = %d", countSeconds(time2));
    printf("\nThe difference in seconds = %d", timeDifference(time2, time1));
    timeCount(timeDifference(time2, time1));
    return 0;
}

//The duration is 5 hours, 58 minutes and 48 seconds

int timeDifference(TimeStructure startTime, TimeStructure endTime)
{
    return abs(countSeconds(endTime) - countSeconds(startTime));
}

// function to change the time to seconds
int countSeconds(TimeStructure time)
{
    return (time.hours * 60 * 60) 
            + (time.minutes * 60)
            + time.seconds;
}

//https://stackoverflow.com/questions/30829923/i-want-to-multiply-two-different-structures-in-c-language

int abs(int number)
{
    if (number < 0)
        number = number * (-1);
    return number;
}

//program to count hours. min, seconds

int timeCount(int inputSeconds)
{
    int h,m,s; //hours, seconds, minutes
    int remainingSeconds, secondsInHour = 3600, secondsInMinute = 60;

    h = inputSeconds/secondsInHour;
    remainingSeconds = inputSeconds - (h * secondsInHour);
    m = remainingSeconds/secondsInMinute;
    remainingSeconds = remainingSeconds - (m*secondsInMinute);
    s = remainingSeconds;

    printf("\n%d hour, %d minutes and %d seconds",h,m,s);
}