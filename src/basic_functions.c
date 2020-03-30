#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
unsigned long int square(long int);
long int cube(long int);

unsigned char is_even(int num)
{
  return num % 2 == 0;
}

unsigned char is_odd(int num)
{
  return !is_even(num);
}

unsigned long int square(long int num)
{
  return num * num;
}

long int cube(long int num)
{
  return num * square(num);
}

int main(void)
{
  int num;
  printf("Enter a number to check if it is even or not: ");
  scanf("%d", &num);
  printf("%d is %s number\n", num, is_even(num) ? "an even" : "not an even");

  printf("Enter a number to check if it is odd or not: ");
  scanf("%d", &num);
  printf("%d is %s number\n", num, is_odd(num) ? "an odd" : "not an odd");

  printf("Enter a number to find its square: ");
  scanf("%d", &num);
  printf("Square of %d is %lu\n", num, square(num));

  printf("Enter a number to find its cube: ");
  scanf("%d", &num);
  printf("Cube of %d is %lu\n", num, cube(num));
}