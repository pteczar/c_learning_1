#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};


int main(int argc, char const *argv[])
{

    struct date todaysDate;

    struct date *datePtr;

    datePtr = &todaysDate;

    datePtr->day = 28; // (*datePtr).day = 21;
    datePtr->month = 2;
    datePtr->year = 2019;

    if(datePtr->day == 26 && datePtr->month == 2 && datePtr->year == 2019)

        printf("%d/%d/%d", datePtr->day, datePtr->month, datePtr->year);

    else
    
        printf("Today is not 26/02/2019");
    
    

    return 0;
}
