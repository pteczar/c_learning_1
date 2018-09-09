/* 
Write three functions:
1. (Greatest Common Divisior) algorithm
2. Absolute value of the number (float)
3. Square root of a number , this function should return -1 if a negative argument is passed

 - use abosulte value function when you use a square root function 
- if a negative argument is passed the function should return -1
Function prototype at the top 
*/

//


//for loop checking the division % of the numbers
#include <stdio.h>
#include <math.h>

// GCD  algorithm
void GCD (int number_1, int number_2, int divisor, int i)

{  

for(i = 1; i <= number_1 && i <=number_2; i++)

{
if (number_1 % i == 0 && number_2 % i == 0)
divisor = i;
}

printf("number %d and number %d have a common divisor %d\n",number_1, number_2, divisor);
}

// ABS algorithm

float ABS (float number)

{
 if(number > 0)
 
 printf("absolute number of %.2f is %.2f", number, number);

 else
 
  printf("absolute number of %.2f is %.2f",number ,number*(-1));
}

//Sroot algorithm - it needs to take value from absolute number so I need to switch the places in the code and add the / copy the code to main and add the rest below.

float SROOT (float n)
{
 float sr = 0.0;

if(n < 0)

{
printf("\n dupa\n");
n = -1 ;
}

else 


while(sqrt(n) >= 0)
printf("larger than 0 test");

if(sr = n)

return n;
}


int main(int argc, char const *argv[])
{
    GCD (42, 56, 1, 1);

    ABS(54);

    SROOT (5.0);
 
    return 0;
}


