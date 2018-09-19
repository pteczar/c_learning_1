#include <stdio.h>

int prime (int number)
{
    int i, flag = 1;

    printf("Enter number: ");
    scanf("%d", &number);


    for (i = 2; i < number; i++)
{
    if((number % i) == 0)
      flag = 0;
      
   }
    return flag;


}

int main(int argc, char const *argv[])
{
    int prime (int number);
    int flag, number;
   

    if(flag == 1)

    printf("%d", prime(number));
    else

    printf("%d\t", prime(number));




    return 0;
}
