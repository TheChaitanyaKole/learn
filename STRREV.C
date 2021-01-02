#include<stdio.h>
#include<conio.h>

void main()
{
  int i , j , length=0;
  char str[20], rev[20];

  //clrscr();

  printf("Enter the string:");
  scanf(" %s", &str);

  while(str[i] != '\0')
  {
    length++;
    i++;
  }

  j=length-1;
  rev[length] ='\0';

  for(i=0; i<length; i++)
  {
    rev[j]=str[i];
    j--;
  }

  printf("Original String is : %s\n", str);
  printf("Reverse of the string is : %s", rev);

  getch();
}
