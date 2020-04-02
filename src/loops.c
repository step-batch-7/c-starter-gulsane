#include <stdio.h>

long double find_factorial(long);
void get_fibonacci_series(int *, int);
void print_nth_nums_between_two_nums(long, long, long);
unsigned char is_odd(long);
void print_odd_nums_between_two_nums(long, long);
void print_odd_nums_series(long);
void print_even_nums_series(long);
long get_sum_of_n_numbers(long, long);
long get_product_of_n_numbers(long, long);
void print_multiplication_table(long, long);
long get_sum_of_even_numbers(long, long);
void print_revrse_odd_series(long);

long double find_factorial(long number)
{
  return number ? number * find_factorial(number - 1) : 1;
}

void get_fibonacci_series(int *array, int length)
{
  int current_term = 0;
  int next_term = 1;

  for (int index = 0; index < length; index++)
  {
    next_term = current_term + next_term;
    current_term = next_term - current_term;
    array[index] = current_term;
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

void print_even_nums_series(long last_num)
{
  print_nth_nums_between_two_nums(2, last_num, 2);
}

long get_sum_of_n_numbers(long first_num, long last_num)
{
  long sum = 0;
  for (; first_num <= last_num; first_num++)
  {
    sum += first_num;
  }
  return sum;
}

long get_product_of_n_numbers(long first_num, long last_num)
{
  long double product = 1;
  for (; first_num <= last_num; first_num++)
  {
    product = product * first_num;
  }
  return product;
}

void print_multiplication_table(long number, long last_multiplier)
{
  for (long multiplier = 1; multiplier <= last_multiplier; multiplier++)
  {
    long multiplication = number * multiplier;
    printf("%li\n", multiplication);
  }
}

long get_sum_of_even_numbers(long num1, long num2)
{
  long sum = 0;
  long first_num = num1 % 2 == 0 ? num1 : num1 + 1;
  for (; first_num <= num2; first_num += 2)
  {
    sum += first_num;
  }
  return sum;
}

void print_revrse_odd_series(long num)
{
  long last_odd_num = is_odd(num) ? num : num - 1;
  for (; last_odd_num >= 1; last_odd_num -= 2)
  {
    printf("%li\n", last_odd_num);
  }
}

int main(void)
{
  int terms;
  long number1, number2, number3;
  printf("Enter a number to find its factorial: ");
  scanf("%li", &number1);
  printf("factorial of %li is %Lf\n", number1, find_factorial(number1));

  printf("Enter a number to get fibonacci series: ");
  scanf("%d", &terms);
  int array[terms];
  get_fibonacci_series(array, terms);
  for (int index = 0; index < terms; index++)
  {
    printf("%d\n", array[index]);
  }

  printf("Enter three num as first num, last num and term to print every nth num: ");
  scanf("%li %li %li", &number1, &number2, &number3);
  print_nth_nums_between_two_nums(number1, number2, number3);

  printf("Enter two numbers to find all odd numbers between them: ");
  scanf("%li %li", &number1, &number2);
  print_odd_nums_between_two_nums(number1, number2);

  printf("Enter a number to get series of odd numbers: ");
  scanf("%li", &number1);
  print_odd_nums_series(number1);

  printf("Enter a number to get series of even numbers: ");
  scanf("%li", &number1);
  print_even_nums_series(number1);

  printf("Enter two numbers to find sum of numbers between them: ");
  scanf("%li %li", &number1, &number2);
  printf("sum of numbers is %li\n", get_sum_of_n_numbers(number1, number2));

  printf("Enter two numbers to find product of numbers between them: ");
  scanf("%li %li", &number1, &number2);
  printf("product of numbers is %li\n", get_product_of_n_numbers(number1, number2));

  printf("Enter two numbers to get multiplication table: ");
  scanf("%li %li", &number1, &number2);
  print_multiplication_table(number1, number2);

  printf("Enter two numbers to get sum of all even numbers between them: ");
  scanf("%li %li", &number1, &number2);
  printf("Sum of even numbers is %li\n", get_sum_of_even_numbers(number1, number2));

  printf("Enter a number to get reverse odd numbers series: ");
  scanf("%li", &number1);
  print_revrse_odd_series(number1);
}