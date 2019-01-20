#include <stdio.h>
#include <stdbool.h>

//does not work properly

struct time timeUpdate (struct time now);
struct date dateUpdate (struct date today);
struct dateAndTime  clockKeeper (struct dateAndTime  dt);

struct date
{
    int month;
    int day;
    int year;
};

struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct dateAndTime 
{
    struct date   sdate;
    struct time   stime; 
};

struct dateAndTime  dt1 =
     {
         { 23, 59, 59 }, { 1, 11, 19 }
     };

bool  isLeapYear (struct date  d);
int  numberOfDays  (struct date  d);
int main(int argc, char const *argv[])
{
    printf ("Current date and time is %.2i/%.2i/%.2i "
	    "%.2i:%.2i:%.2i\n",
	    dt1.sdate.month, dt1.sdate.day, dt1.sdate.year,
	    dt1.stime.hour, dt1.stime.minutes, dt1.stime.seconds);

    dt1 = clockKeeper (dt1);

    printf ("Updated date and time is %.2i/%.2i/%.2i "
	    "%.2i:%.2i:%.2i\n\n",
	    dt1.sdate.month, dt1.sdate.day, dt1.sdate.year,
	    dt1.stime.hour, dt1.stime.minutes, dt1.stime.seconds);
}

struct dateAndTime  clockKeeper (struct dateAndTime  dt)
{
     struct time  timeUpdate (struct time  now);
     struct date  dateUpdate (struct date  today);

     dt.stime = timeUpdate (dt.stime);

	if ( dt.stime.hour == 0  &&  dt.stime.minutes == 0  &&
             dt.stime.seconds == 0 )
	     dt.sdate = dateUpdate (dt.sdate);

   	return  dt;
}

    /* if the time is 00:00:00 
    call date update and update the date by adding 1

    return dateAndTime

    */
 



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

struct date dateUpdate (struct date today)
{
    struct date tomorrow;
    int numberOfDays (struct date d);

    if(today.day != numberOfDays (today))
    {
        tomorrow.day = today.day +1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }

    else if(today.month == 12) //end of year
    {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else
    {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    return tomorrow;
}

// Function to find the number of days in a month

 int  numberOfDays  (struct date  d)
{
      int days;
      bool  isLeapYear (struct date  d);
      
      const int   daysPerMonth[12] ={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
      
      if ( isLeapYear (d) == true &&  d.month == 2 )days = 29;
       else
           days = daysPerMonth[d.month - 1];
           
    return days; 
} 

bool  isLeapYear (struct date  d) 

{

bool  leapYearFlag;
    if ( (d.year % 4 == 0  &&  d.year % 100 != 0)  ||d.year % 400 == 0 )
        leapYearFlag = true;   // It's a leap year

        else

        leapYearFlag = false;  // Not a leap year

return leapYearFlag; 
}