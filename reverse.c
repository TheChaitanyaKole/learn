#include<stdio.h>
#include<conio.h>

void main()
{
  int n , reverse , remainder ;
  reverse=0;

  // clrsccr();

  printf("Enter the number you want to reverse");
  scanf("%d", &n);

  while(n != 0)
  {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n/=10;
  }

  printf("Reversed number is %d", reverse);

  getch();
}
