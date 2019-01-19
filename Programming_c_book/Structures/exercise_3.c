#include <stdio.h>
int timeDifference (int startTime, int endTime);
int countSeconds (struct time time1);
int timeCount (int inputSeconds);
int abs(int number);

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct time time1 = {3,45,15};
struct time time2 = {9,44,03};


int main(int argc, char const *argv[])
{
    
 
    printf("\nStart Time in seconds = %d", countSeconds(time1));
    printf("\nEnd Time in seconds = %d", countSeconds(time2));
    printf("\nThe difference in seconds = %d",timeDifference(countSeconds(time2),countSeconds(time1)));
    timeCount(timeDifference(countSeconds(time2),countSeconds(time1)));
    
   
       return 0;
}

//The duration is 5 hours, 58 minutes and 48 seconds

int timeDifference (int startTime, int endTime)
{
 int diff;

 
 diff = abs(endTime - startTime); //diff in seconds

 return diff;

}

// function to change the time to seconds
int countSeconds (struct time time_)
{
    int count;

    count = time_.hours*60*60 + time_.minutes*60 + time_.seconds;


    return count;
  
}

//https://stackoverflow.com/questions/30829923/i-want-to-multiply-two-different-structures-in-c-language

int abs(int number)
{
 if (number < 0)
  number = number * -1;

  return number;
}

//program to count hours. min, seconds

int timeCount (int inputSeconds)
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