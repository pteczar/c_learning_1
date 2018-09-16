#include <stdio.h>

long int x_to_n (long int x,long int n)
{
    
    int i;
    long int result;

if (n == 0)
{
x = 1; //working
}
else if (n == 1)
{
x = x * 1; //working
}

else
{
  result = 1;
for ( i = 0; i < n; i++) // 
{
    result *= x;

}
}
return result;
}

int main(int argc, char const *argv[])
{
    /* code */
    long int x_to_n (long int x,long int n);


    long int x;
    long int n;

printf("Please enter X: ");   
scanf("%li", &x);


printf("Please enter n: ");
scanf("%li", &n);

    printf(" %li^%li = %li",x ,n, x_to_n(x,n));

    return 0;
}
