#include <stdio.h>

void print_big(int number)
{
if (number > 10)
printf("%d is big\n", number);
}


int main() {

void print_big(int number);
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

