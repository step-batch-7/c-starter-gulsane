#include <stdio.h>

void break_currency(long);
void print_break(int,int);

void print_brea
void break_currency(long total_money)
{
  int two_thousand_notes = 0;
  int five_hundred_notes = 0;
  int two_hundred_notes = 0;
  int one_hundred_notes = 0;
  int fifty_notes = 0;
  int ten_notes = 0;
  int five_notes = 0;
  int one_notes = 0;
  for (; total_money >= 2000; total_money -= 2000)
  {
    two_thousand_notes += 1;
  }
  for (; total_money >= 500; total_money -= 500)
  {
    five_hundred_notes += 1;
  }
  for (; total_money >= 200; total_money -= 200)
  {
    two_hundred_notes += 1;
  }
  for (; total_money >= 100; total_money -= 100)
  {
    one_hundred_notes += 1;
  }
  for (; total_money >= 50; total_money -= 50)
  {
    fifty_notes += 1;
  }
  for (; total_money >= 10; total_money -= 10)
  {
    ten_notes += 1;
  }
  for (; total_money >= 5; total_money -= 5)
  {
    five_notes += 1;
  }
  for (; total_money >= 1; total_money -= 1)
  {
    one_notes += 1;
  }
  printf("%d X Rs 2000\n", two_thousand_notes);
  printf("%d X Rs 500\n", five_hundred_notes);
  printf("%d X Rs 200\n", two_hundred_notes);
  printf("%d X Rs 100\n", one_hundred_notes);
  printf("%d X Rs 50\n", fifty_notes);
  printf("%d X Rs 10\n", ten_notes);
  printf("%d X Rs 5\n", five_notes);
  printf("%d X Rs 1\n", one_notes);
}

int main(void)
{
  long total_money;
  printf("Enter the total money to get currency breakdown: ");
  scanf("%li", &total_money);
  break_currency(total_money);
}