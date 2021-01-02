#include<stdio.h>
#include<conio.h>

struct student
{
  char name[25];
  int roll;
  float marks;
} s[10];

void main()
{
  int i,n;

  printf("How many students you want to store : ");
  scanf(" %d", &n);

  //clrscr();

  for (i=0; i<n; i++)
  {
    s[i].roll = i+1;
    printf("For Roll no %d Enter name :", i+1);
    scanf(" %s", &s[i].name);
    printf("Enter Marks of %s \t :", s[i].name);
    scanf(" %f", &s[i].marks);
  }

  printf("Displaying Information\n\n");

  for (i=0; i<n; i++)
  {
    printf("\t\tRoll number \t: %d \n", s[i].roll);
    printf("\t\tName \t\t: %s \n", s[i].name);
    printf("\t\tMarks \t\t: %.2f \n", s[i].marks);
  }

  getch();
}
