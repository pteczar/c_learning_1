
//lcm (u, v) = uv / gcd (u, v)        u, v >= 0

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int lcm (int u, int v);
    /* code */

    lcm(15,-10);
    return 0;
}

int lcm (int u, int v)
{
    int gcd (int u, int v);
    int temp; // LCM alias

    if (u >= 0 && v>=0)
    {
       temp = u*v / gcd (u,v);

       printf("result = %d", temp);
    }

    else
    printf("you cannot use - values");
    return 0;

   
}



int gcd (int u, int v) 
 {
    int  temp;
    
     
    while ( v != 0 )
    
        {
         
         temp = u % v;
         
         u = v;
         v = temp;
         
        }
         
                return u;
 }