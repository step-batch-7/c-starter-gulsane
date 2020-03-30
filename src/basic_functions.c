#include <stdio.h>

unsigned char is_even(long);
unsigned char is_odd(long);
double square(float);
double cube(float);

unsigned char is_even(long num)
{
  return num % 2 == 0;
}

unsigned char is_odd(long num)
{
  return !is_even(num);
}

double square(float num)
{
  return num * num;
}

double cube(float num)
{
  return num * square(num);
}

int main(void)
{
  long int num1;
  float number;
  printf("Enter a number to check if it is even or not: ");
  scanf("%li", &num1);
  printf("%li is %s number\n", num1, is_even(num1) ? "an even" : "not an even");

  printf("Enter a number to check if it is odd or not: ");
  scanf("%li", &num1);
  printf("%li is %s number\n", num1, is_odd(num1) ? "an odd" : "not an odd");

  printf("Enter a number to find its square: ");
  scanf("%f", &number);
  printf("Square of %f is %lf\n", number, square(number));

  printf("Enter a number to find its cube: ");
  scanf("%f", &number);
  printf("Cube of %f is %lf\n", number, cube(number));
}