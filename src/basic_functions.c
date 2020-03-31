#include <stdio.h>
#include <math.h>

unsigned char is_even(long);
unsigned char is_odd(long);
double square(float);
double cube(float);
long gcd(long, long);
long lcm(long, long);
double simple_interest(float, float, float);
double compound_interest(float, float, float);
long find_greatest_of_three(long, long, long);
float find_average_of_three(long, long, long);
float fahrenheit_to_centigrade(float);
float centigrade_to_fahrenheit(float);

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

long lcm(long num1, long num2)
{
  long hcf = gcd(num1, num2);
  return num1 * num2 / hcf;
}

double simple_interest(float principle, float interest, float duration)
{
  return (principle * duration * interest) / 100;
}

double compound_interest(float principle, float interest, float duration)
{
  double total_amount = principle * pow((1 + interest / 100), duration);
  return total_amount - principle;
}

long find_greatest_of_three(long num1, long num2, long num3)
{
  long greatest_of_two = num1 > num2 ? num1 : num2;
  return greatest_of_two > num3 ? greatest_of_two : num3;
}

float find_average_of_three(long num1, long num2, long num3)
{
  return (num1 + num2 + num3) / 3.0;
}

float fahrenheit_to_centigrade(float fahrenheit)
{
  return (fahrenheit - 32) * (5.0 / 9.0);
}

float centigrade_to_fahrenheit(float centigrade)
{
  return (9.0 / 5.0) * centigrade + 32;
}

int main(void)
{
  long int num1, num2, num3;
  float number, principle, duration, interest;
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

  printf("Enter two numbers seperated by space to find HCF: ");
  scanf("%li %li", &num1, &num2);
  printf("The HCF of %li and %li is %li\n", num1, num2, gcd(num1, num2));

  printf("Enter two numbers seperated by space to find LCM: ");
  scanf("%li %li", &num1, &num2);
  printf("The LCM of %li and %li is %li\n", num1, num2, lcm(num1, num2));

  printf("Enter principle amount, duration and interest to get simple interset: ");
  scanf("%f %f %f", &principle, &interest, &duration);
  printf("The simple interest is %lf\n", simple_interest(principle, interest, duration));

  printf("Enter principle amount, duration and interest to get compound interset: ");
  scanf("%f %f %f", &principle, &interest, &duration);
  printf("The compound interest is %lf\n", compound_interest(principle, interest, duration));

  printf("Enter three numbers to find the greatest of them: ");
  scanf("%li %li %li", &num1, &num2, &num3);
  printf("Greatest number is %li\n", find_greatest_of_three(num1, num2, num3));

  printf("Enter three numbers to find their average: ");
  scanf("%li %li %li", &num1, &num2, &num3);
  printf("Average of numbers is %f\n", find_average_of_three(num1, num2, num3));

  printf("Enter temperature in Fahrenheit to convert in Centigerate: ");
  scanf("%f", &number);
  printf("%f Fahrenheit = %f Centigerate\n", number, fahrenheit_to_centigrade(number));

  printf("Enter temperature in Centigerate to convert in Fahrenheit: ");
  scanf("%f", &number);
  printf("%f Centigerate = %f Fahrenheit\n", number, centigrade_to_fahrenheit(number));
}