//quadratic equation program
// this program sometimes freezes, no idea why, the calculations are correct
// square root of a number program

#include <stdio.h>


// absolute number function
float absoluteValue (float x)
{
    if ( x < 0)
    x = -x;

    return x;
}

// Function to compute the square root of a number

float squareRoot (float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    while(absoluteValue (guess * guess - x) >= epsilon)
    guess = ( x / guess + guess) / 2;

    return guess;

}

int main(int argc, char const *argv[])
{
float delta, a,b,c,x1,x2;

printf("please enter the value of a: ");
    scanf("%f",&a);

printf("please enter the value of b: ");
    scanf("%f",&b);

printf("please enter the value of c: ");
    scanf("%f",&c);

//printf("Does your equation looks like that %dx^2 + %dx5 + %d = 0",a,b,c); // I will need to add some chaking the - & + and printing different values when chosing the correct combination

 delta = 0;

 delta = (b*b) - (4*a*c) ;
 if(delta > 0)
 {
     x1 = (-b -squareRoot(delta))/ (2*a);
     x2 =(-b + squareRoot(delta))/ (2*a);

     printf("x1 = %f\n", x1);
     printf("x2 = %f\n", x2);
 }
 else if (delta == 0)
 {
     x1 = -b / (2*a);
     

     printf("delta = 0, x1 = x2 = %f",x1);
 }
else

printf("sorry but delta is < 0, program does not count imaginary numbers");




    return 0;
}
