#include <stdio.h>

long double find_factorial(long int);

long double find_factorial(long number)
{
  return number ? number * find_factorial(number - 1) : 1;
}

int main(void)
{
  long number;
  printf("Enter a number to find its factorial: ");
  scanf("%li", &number);
  printf("factorial of %li is %Lf\n", number, find_factorial(number));
}