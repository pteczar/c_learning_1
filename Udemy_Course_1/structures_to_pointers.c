#include <stdio.h>

int main(int argc, char const *argv[])
{
    struct date 
    {
        int month;
        int day;
        int year;
    };

struct date today, *datePtr;

datePtr = &today;

datePtr->month = 9;
datePtr->day = 9;
datePtr->year = 2015;

printf("Today's date is %i/%i/%2i.\n", datePtr->month, datePtr->day, datePtr->year );
    return 0;
}
