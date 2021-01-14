#include<stdio.h>
#include<conio.h>

void main ()
{
  int a, b, i, max;

  //clrscr();

  printf("Enter two numbers: ");
  scanf("%d %d", &a , &b);

  max = (a > b) ? a : b;

  for (i = max ; i > 0 ; i++)
  {
    if (i % a == 0 && i % b == 0)
    {
      printf("LCM  of %d and %d is %d\n", a ,b , i);
      break;
    }
  }

  getch();
}
