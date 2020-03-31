#include <stdio.h>

long double find_factorial(long);
void get_fibonacci_series(long);

long double find_factorial(long number)
{
  return number ? number * find_factorial(number - 1) : 1;
}

void get_fibonacci_series(long term)
{
  long current_term = 0, next_term = 1;
  for (; term > 0; term--)
  {
    next_term = current_term + next_term;
    current_term = next_term - current_term;
    printf("%li\n", current_term);
  }
}

int main(void)
{
  long number;
  printf("Enter a number to find its factorial: ");
  scanf("%li", &number);
  printf("factorial of %li is %Lf\n", number, find_factorial(number));

  printf("Enter a number to get fibonacci series: ");
  scanf("%li", &number);
  get_fibonacci_series(number);
}