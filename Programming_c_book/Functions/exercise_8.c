#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    float quadratic_function (float a, float b, float c);
    void question();
    void count ();
    /* code */
float delta = 0, x1, x2, a = 4, b = -17, c = -15;
char yes;

printf("The first delta, x1, x2 as counted with numbers provided in the exercies: 4x^2 - 17x - 15 = 0\n");

quadratic_function (a,b,c);

question();

    return 0;
}

// function asking Y/N question

void question()
{
    void count ();
    char option;
 
 
    printf("\nDo you want to continue? {Y|N) ");
    scanf("%c", &option);
 
 
    if (option ==  'y' || option == 'Y')
    {
        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
        return count();
        
    }
    else if (option == 'n' || option == 'N')
    {
        printf("Exiting....\nGoodbye!");
        exit(0);
    }
    else
    {
        printf("Invlid selection.");
        return question();
    }
}
// function used for data input
void count ()

{
    float quadratic_function (float a, float b, float c);
    float a, b, c;
    printf("enter a:\n");
    scanf("%f", &a);

    printf("enter b:\n");
    scanf("%f", &b);

    printf("enter c:\n");
    scanf("%f", &c);

    quadratic_function (a,b,c);
    exit(0);
}


// Function to count delta and x1, x2 for the quadradic equation

float quadratic_function (float a, float b, float c)
{
    float  squareRoot (float x);
    float delta, x1, x2;

    delta = (b*b) - (4*(a*c));

    printf("The delta is %f\n", delta);

     if (delta < 0)
    {
        printf("the  roots are imaginary");
    }

    if (delta > 0)
    {
        x1 = ((-1*b) + squareRoot(delta))/(2*a);
        x2 = ((-1*b) - squareRoot(delta))/(2*a);

            printf(" x1 = %f, x2 = %f", x1, x2);

            return 0;
    }

   




}

// Function for absolute value
float  absoluteValue (float x) 
 
{
     if ( x < 0 )x = -x;
     
     return (x);
     
} 



// Function to compute the square root of a number 

float  squareRoot (float x) 

{
    const float  epsilon = .00001;
    
    float        guess = 1.0;
    
    while  ( absoluteValue (guess * guess - x) >= epsilon )
    guess = ( x / guess + guess ) / 2.0;
    
    return guess; 
}

//x to n power function

int x_to_the_n (int x, int n)
{
   long int result = 1;
   
   if (n <0)
   {
   printf("You are not allowed to use int < ");
     return 0;
   }
    else if (n > 0)
{

   while (n != 0)
    {
        result *= x;
        n--; //why?
    }


}

return result;
}