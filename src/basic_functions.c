#include <stdio.h>

unsigned char is_even(int);

unsigned char is_even(int num)
{
  return num % 2 == 0;
}

int main(void)
{
  int num;
  printf("Please enter a number: ");
  scanf("%d", &num);
  printf("%d is %s number\n", num, is_even(num) ? "an even" : "not an even");
}