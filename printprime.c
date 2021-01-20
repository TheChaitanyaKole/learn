#include <stdio.h>
#include <conio.h>

int main ()
{
  int low , high , prime , i , temp;

  //clrscr();

  printf("Enter the numbers you want to prime in between:\n");
  scanf("%d %d", &low , &high);

  if (low > high )
  {
    temp = low;
    low = high;
    high = temp;
  }

  printf("You want prime number between %d and %d\n", low , high);
  printf("Prime numbers between %d and %d are : ", low , high);

  while(low < high)
  {
    prime = 1;

    if(low <= 1)
    {
      low++;
      continue;
    }

    for (i = 2 ; i*i <= low ; i++)
    {
      if (low % i == 0)
      {
        prime = 0;
        break;
      }
    }

    if (prime == 1)
    {
      printf("%d ",low);
    }

  low++;
  }

  return 0;
}
