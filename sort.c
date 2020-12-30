#include<stdio.h>
#include<conio.h>

  void main()
  {
    int arr[15],i,j ,temp,n;

    //clrscr();

    printf("Enter no of Elements");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      arr[i]=(rand()%10)+1;
    }

    for(i=0;i<n;i++)
    {
      printf("%d\n",arr[i]);
    }

    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        if(arr[j]>arr[j+1])
        {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
      }
    }

    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
      printf("%d\n",arr[i]);
    }
    getch();
  }
