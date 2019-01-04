#include <stdio.h>

int main(int argc, char const *argv[])
{
int x_to_the_n (int x, int n);
   printf("%d", x_to_the_n (2,2));
    /* code */
    return 0;
}



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

// https://www.programtopia.net/c-programming/examples/power-of-given-number
