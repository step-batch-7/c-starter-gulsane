#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
unsigned long int square(unsigned long int);

unsigned char is_even(int num)
{
  return num % 2 == 0;
}

unsigned char is_odd(int num)
{
  return !is_even(num);
}

unsigned long int square(unsigned long int num)

{
  return num * num;
}

int main(void)
{
  int num;
  printf("Please enter a number: ");
  scanf("%d", &num);
  printf("%d is %s number\n", num, is_even(num) ? "an even" : "not an even");
  printf("%d is %s number\n", num, is_odd(num) ? "an odd" : "not an odd");
  printf("square of %d is %lu\n", num, square(num));
}