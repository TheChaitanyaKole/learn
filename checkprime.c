#include <stdio.h>
#include <conio.h>

int main()
{
  int number ;
  int prime = 1, i ;

  //clrscr();

  printf("Enter a number you want to check:");
  scanf("%d",&number);

  for ( i = 2 ; i*i <= number ; i++ )
  {
    if (number % i == 0)
    {
      prime = 0;
      break;
    }
  }

  if (number == 1)
  {
    printf("1 is neither prime or composite");
  }
  else if (prime == 1)
  {
    printf("%d is prime number", number);
  }
  else
  {
    printf("%d is Composite", number);
  }

  return 0;
}
