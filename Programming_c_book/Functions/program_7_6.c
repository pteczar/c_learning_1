/* Function to find the greatest common divisorof two nonnegative integer values             */ 


#include <stdio.h> 

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
int main (void)

{
    int gcd (int u, int v);
     
     int result;

     result = gcd (150, 35);
     printf("%d", result);
    
return 0;

} 