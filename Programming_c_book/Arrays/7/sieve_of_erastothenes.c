/* using the sieve of erasthothenes write a program that displays prime numbers up to 150


https://www.codesdope.com/blog/article/prime-numbers-using-sieve-algorithm-in-c/

https://www.startertutorials.com/blog/c-program-print-prime-numbers-using-sieve-eratosthenes.html

 */

#include<stdio.h>
int main()
{
	int n;
	printf("Enter n value: ");
	scanf("%d", &n);
	int prime[n+1];
	//Loading the array with numbers from 1 to n
	for(int i = 1; i <= n; i++)
	{
		prime[i] = i;
	}
	//Start with least prime number, which is 2.
	//No need to check for numbers greater than square root of n.
	//They will be already marked.
	for(int i = 2; i*i <= n; i++)
	{
		if(prime[i] != -1)
		{
			//Mark all the multiples of i as -1.
			for(int j = 2*i; j <=n ; j += i)
				prime[j] = -1;
		}
	}
	printf("Prime numbers are: \n");
	for(int i=2; i <= n; i++)
	{
		if(prime[i] != -1)
		{
			printf("%d ", i);
		}
	}
}