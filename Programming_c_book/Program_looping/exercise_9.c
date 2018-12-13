/*Write a program that calculates the sum of the digits of an integer. 
For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13. 
The program should accept any arbitrary integer typed in by the user.*/

#include <stdio.h>
 
int main()
{
   int n, t, sum = 0, remainder;
 
   printf("Enter an integer\n");
   scanf("%d", &n);
 
   t = n; // t is assigned the value of n
 
   while (t != 0) // while loop goes through the number until there is 0 in the memory
   {
      remainder = t % 10; // 
      sum = sum + remainder;
      t = t / 10;
   }
 
   printf("Sum of digits of %d = %d\n", n, sum);
 
   return 0;
}
