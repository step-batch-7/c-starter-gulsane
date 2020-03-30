#include <stdio.h>

unsigned char is_even(long);
unsigned char is_odd(long);
double square(float);
double cube(float);
long gcd(long, long);

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

long gcd(long num1, long num2)
{
  long dividend, divisor, gcd;
  switch (num1 > num2 ? 1 : 2)
  {
  case 1:
    dividend = num1, divisor = num2;
    break;
  case 2:
    dividend = num2, divisor = num1;
    break;
  }
  gcd = dividend;
  while (divisor != 0)
  {
    gcd = divisor;
    divisor = dividend % divisor;
    dividend = gcd;
  }
  return gcd;
}

int main(void)
{
  long int num1, num2;
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

  printf("Enter tow numbers seperated by space to find HCf: ");
  scanf("%li %li", &num1, &num2);
  printf("The HCF of %li and %li is %li\n", num1, num2, gcd(num1, num2));
}