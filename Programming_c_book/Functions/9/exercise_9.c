// Function to find the greates common divisor and return the result

#include <stdio.h>

int gcd ( int u, int v)
{
    int temp;
  

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
  
    return u;
}


int main(void)

{
    int gcd (int u, int v);
    int u, v, lcm;

    printf("please enter first number: ");
        scanf("%d", &u);

    printf("please enter second number: ");
        scanf("%d", &v);



    lcm = (u*v) / gcd(150,35);
    printf("The 15lcm of %d and %d is %i\n",u,v, lcm);



    return 0;
}