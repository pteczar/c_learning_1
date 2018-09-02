/* 
1. program should find all the prime numbers from 3-100
2.no input from the user
3. output - each prime number in one line separated by space
*/

#include <stdio.h>

#define N 100

int main(int argc, char const *argv[])
{
    
  int  primes[100] = {1,2};
  int p, i, primeIndex, isPrime;
for( p = 3; p<=100; p+= 2 ) // odd numbers this is why +2
{
    isPrime = 1; // assumption that the number is prime
    for ( i =1, i < primeIndex; ++i)

    if(p % primes[i] == 0)
    isPrime = 0;
}  
if( isPrime == 1)
 primes[primeIndex] = p;
 ++primeIndex






    return 0;
}
