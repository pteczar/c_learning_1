/* Converting number of minutes to days and years
minutes can be int but I decide for double
the rest double
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{

    double min;

    double years, days;
    double min_in_a_year = 525948.766;
   
    printf("Enter number of minutes:");
    scanf("%lf",&min);

    days = min/1440;

    printf("days %.11lf\n", days);


    years = min / min_in_a_year;
    printf("years %.11f",years );
    return 0;

}

