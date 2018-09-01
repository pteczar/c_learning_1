/* 
payrate = 12 USD if 40h 
above 40h = pyarate * 1,5
tax_rate_1 = 15% if max 300 usd
tax_rate_2 = 20% if 300-450 USD
tax_rate_3 = 25% if above 450 USD

count gross / net / taxes
user needs to input the number of hours
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number_of_hours, payrate = 12;
double tax_rate_1 = 0.15, tax_rate_2 = 0.2, tax_rate_3 = 0.25, overtime, gross_pay, amount, tax;

printf("Enter number of hours: ");
scanf("%d", &number_of_hours);

if(number_of_hours <40)
{
    gross_pay = (number_of_hours * payrate);
    printf("Gross Pay = %.2f\n",gross_pay);
}
    else 
    {
        overtime = number_of_hours - 40;
        double overtime_pay = overtime * 18;
        gross_pay = overtime_pay + (40*12); // 40*12 = standard payrate, for stadard time 40h / week
        printf ("Gross Pay = %.2lf\n", gross_pay);
    }

// taxes

if(gross_pay <= 300)
{
    tax = tax_rate_1 * gross_pay; // tax for 300

    printf("Tax = %.2f\n",tax);
}

else if(gross_pay >300 && gross_pay <= 450)
{
    
     tax = 300 * tax_rate_1;
     tax += (gross_pay - 300) * tax_rate_2;

    printf("Tax = %.2f\n",tax);
}
else
{
    tax = (300 * tax_rate_1) + (150 * tax_rate_2);
    tax += (gross_pay - 450) * tax_rate_3;

    printf("Tax = %.2f\n",tax);
}

 printf ("Net pay = %.2f",gross_pay - tax);
    return 0;
}
