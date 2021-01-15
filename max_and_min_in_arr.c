#include<stdio.h>
#include<conio.h>

//Function to Find Max Element
int max_ele (int arr[],int n)
{
  int max = 0 , i;

  for (i = 0 ; i < n ; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  return max;
}

//Function to find Min Element
int min_ele (int arr[] , int n)
{
  int min = 100 , i ;

  for (i=0 ; i < n ; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  return min;
}

//Main Function
void main ()
{
  int arr[20], i , n , max , min;

  //clrscr();

  //Taking number of elements in array
  printf("Enter the number of elements in array ");
  scanf("%d", &n);

  //Inserting random elements in array
  for (i = 0 ; i < n ; i++)
  {
    arr[i]=((rand()%100)+1);
  }

  //Printing of array
  for (i = 0 ; i < n ; i++)
  {
    printf("%d \t %d \n",i+1,arr[i]);
  }

  //Calling Functions
  max = max_ele(arr , n);
  min = min_ele(arr , n);

  //Displaying the Max and Min Elements
  printf("Max element is %d\n", max );
  printf("Min element is %d\n", min );

  getch();
}
