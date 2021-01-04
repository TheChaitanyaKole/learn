#include <stdio.h>
#include <conio.h>

void main ()
{
  int m[10][10] , t[10][10] , row , column , i , j;

  //clrscr();

  // To take number of rows and columns
  printf("Enter number of rows ");
  scanf("%d", &row);

  printf("Enter number of columns ");
  scanf("%d", &column);

  // To take elements in matrix
  for (i=0; i<row ; i++)
  {
    for (j=0; j<column ; j++)
    {
      printf("Enter %d%dth element \n", i+1 , j+1 );
      scanf("%d", &m[i][j]);
    }
  }

  // To Display elements of matrix
  printf("\nMatrix Entered\n");
  for (i=0 ; i<row ; i++)
  {
    for (j=0 ; j<column ; j++)
    {
      printf("%d\t", m[i][j]);
      if (j == column - 1)
      printf("\n");
    }
  }

  //To find transpose of Matrix
  for (i=0 ; i<row ; i++)
  {
    for (j=0 ; j<column ; j++)
    {
      t[i][j] = m[j][i];
    }
  }

  //To print transpose Matrix
  printf("\nTranspose of Matrix\n");
  for (i=0 ; i<row ; i++)
  {
    for (j=0 ; j<column ; j++)
    {
      printf("%d\t", t[i][j]);
      if (j == column - 1)
      printf("\n");
    }
  }

  getch();
}
