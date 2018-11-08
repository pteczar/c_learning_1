#include <stdio.h>

int main(int argc, char const *argv[])
{
    struct date
    {
        int month; 
        int day;
        int year;
    };


    struct date today;

    today.day = 25;
    today.month = 9;
    today.year = 2015;


printf("Today's date is %i/%i/%.2i\n", today.day, today.month, today.year);

    return 0;
}
