#include <stdio.h>

long double find_factorial(long);
void get_fibonacci_series(long);
void print_nth_nums_between_two_nums(long, long, long);
unsigned char is_odd(long);
void print_odd_nums_between_two_nums(long, long);
void print_odd_nums_series(long);

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

void print_nth_nums_between_two_nums(long first_num, long last_num, long n)
{
  for (; first_num <= last_num; first_num += n)
  {
    printf("%li\n", first_num);
  }
}

unsigned char is_odd(long num)
{
  return num % 2 == 1;
}

void print_odd_nums_between_two_nums(long num1, long num2)
{
  long first_num = is_odd(num1) ? num1 : num1 + 1;
  print_nth_nums_between_two_nums(first_num, num2, 2);
}

void print_odd_nums_series(long last_num)
{
  print_odd_nums_between_two_nums(1, last_num);
}

int main(void)
{
  long number1, number2, number3;
  printf("Enter a number to find its factorial: ");
  scanf("%li", &number1);
  printf("factorial of %li is %Lf\n", number1, find_factorial(number1));

  printf("Enter a number to get fibonacci series: ");
  scanf("%li", &number1);
  get_fibonacci_series(number1);

  printf("Enter three num as first num, last num and term to print every nth num: ");
  scanf("%li %li %li", &number1, &number2, &number3);
  print_nth_nums_between_two_nums(number1, number2, number3);

  printf("Enter two numbers to find all odd numbers between them: ");
  scanf("%li %li", &number1, &number2);
  print_odd_nums_between_two_nums(number1, number2);

  printf("Enter a number to get odd series: ");
  scanf("%li", &number1);
  print_odd_nums_series(number1);
}