#include <stdio.h>
#include <conio.h>

void main ()
{
  int a , b , i , min ;

  //clrscr();

  printf("Enter two numbers: ");
  scanf("%d %d", &a ,&b);

  min = ( a < b ) ? a : b;

  for (i = min ; i > 0 ; i--)
  {
    if (a % i == 0 && b % i == 0)
    {
      printf(" HCF of %d and %d is %d", a, b, i);
      break;
    }
  }
  getch();
}
