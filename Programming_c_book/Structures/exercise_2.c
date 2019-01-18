#include <stdio.h>

struct date 
    {
        int day;
        int month;
        int year;
    };

// function to read first date
    int firstDate (struct date dateOne)  
    {
printf("Enter the first date: (dd mm yyyy): ");
scanf ("%i%i%i",&dateOne.day, &dateOne.month, &dateOne.year);



    } 