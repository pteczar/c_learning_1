/* pay-rate 12USD/h */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hours_worked, overtime, tax_1, tax_2,tax_3,pay_rate, first_threshold, pay_gross, pay_gross_1;
    
             printf("How many hours did you work this week: ");
             scanf("%d",&hours_worked); // scanning the amount out hours worked

    if(hours_worked > 40 ) // Checking the overtime
    {
        overtime = hours_worked - 40;
             printf( "You worked overtime (%d - 40) = %d hours will be payed 18 USD/hour\n",hours_worked,overtime); // if overtime the amount of oviertime pay is 18USD
    }
    else
    {
              printf("You did not work overtime, you worked %d hours\n", hours_worked); // no overtime printing the hours worked
    }
   
// payments % tax thresholds
    pay_rate = 12;
    pay_gross = hours_worked * pay_rate; // overtime is 0 in this case
    
    
       if(hours_worked <= 40)
     {
           
        tax_1 = 0.15 * pay_gross;
        
        
                printf("Your gross pay is %d tax = %d net pay = %d\n", pay_gross, tax_1,pay_gross - tax_1);
     }
         else
         {
            pay_gross_1 = overtime * (pay_rate * 1.5); // in the case of 45 it is 5* 12 * 1.5 = 450
            pay_gross += pay_gross_1; // how do I get pay_gross? 
            printf("Your gross pay is %d", pay_gross);
         }
     
    return 0;
    }
