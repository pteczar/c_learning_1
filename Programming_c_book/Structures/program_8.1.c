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

    today.month = 1;
    today.day = 11;
    today.year = 2019;

    printf("todays date = %d/%d/%d",today.day, today.month, today.year);

    return 0;
}
