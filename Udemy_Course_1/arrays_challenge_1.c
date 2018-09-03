#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int p, i , primes[50], primeIndex =2; // primeIndex is set to 2 as it is the next free slot in the array
    bool isPrime;

    primes[0] = 2; // storing the first two primes in the array
    primes[1] = 3;

    for( p = 5; p <= 100; p = p + 2) // for running through odd integers from 5 up to 100
    {
        isPrime = true; // after isPrime is set to bool treu the next for is entered

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i) // this loop is to divide the the value of p by previously generated prime numbers that are stored in the array primes.  
                                                                // It starts from 1 because it is not necessary to divide by primes[0] which has value 2, this is always true because the program does not test even numbers. They are not prime.          
            if(p % primes[i] == 0) // inside the loop testing if the number is diversible by primes[i] and if it is the value is set to false (WHY?)
            isPrime = false;

        if(isPrime == true) // the loop continues until the value of isPrime is true and the primes[i] does not exceed the square root of p.
        {
                  primes[primeIndex] = p; // adding to the correct plase in the array means primes[primeIndex] , and it starts wuth place number 2, and + 1 on every loop
                     ++primeIndex;
        }
     
    }

    for ( i = 0; i < primeIndex; ++i) // printing prime numbers from 0 to our primeIndex , which is above 
        printf("%i ", primes[i]); // we are printing the data

        printf("\n");

    return 0;
}
