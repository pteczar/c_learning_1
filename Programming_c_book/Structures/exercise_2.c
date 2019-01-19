#include <stdio.h>
 int f_ (int year_, int month_);
    int g_ (int month_);
    int abs(int number);


struct date 
    {
        int day;
        int month;
        int year;
    };

    int main(int argc, char const *argv[])
    {
       
     int N1, N2;
       struct date dateOne, dateTwo;

    printf("Enter the first date: (dd mm yyyy): ");
        scanf ("%i%i%i",&dateOne.day, &dateOne.month, &dateOne.year);

    N1 = 1461 *f_(dateOne.year, dateOne.month)/4 + 153 *g_(dateOne.month)/5 + dateOne.day; //why 3?

    printf("Enter the second date: (dd mm yyyy): ");
        scanf ("%i%i%i",&dateTwo.day, &dateTwo.month, &dateTwo.year);

    N2 = 1461 *f_(dateTwo.year, dateTwo.month)/4 + 153 *g_(dateTwo.month)/5 + dateTwo.day;

    printf("%d", abs(N1 - N2));

        return 0;
    }
    


// function 1 for dates to fit the equation N1,N2
    int f_(int year_, int month_)
    {
     if (month_ <= 2)
        {
            year_=year_ -1;
        }
         else
            {
                year_ = year_;
            }
       

        return year_;

    }

// function 2 for dates to fit the equation N1,N2
    int g_(int month_)
    {
        if(month_ <= 2)
        {
            month_ = month_ + 13;
        }
         else 
         {
             month_= month_+1;
         }

         return month_;
    }
int abs(int number)
{
 if (number < 0)
  number = number * -1;

  return number;
}
